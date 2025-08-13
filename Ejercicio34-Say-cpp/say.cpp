#include "say.h"

namespace say {

// TODO: add your solution here

std::string tens_to_string(int n){

    std::string number_in_english {""};
    int counter{0};
    
    if(n <= 13){
        number_in_english += numbers_basic[n];

    }else if(n == 18){
        number_in_english += "eighteen";

    }else{
    
        do{
            n -= 10;
            counter++;

        }while( (n >= 10) && (n!=0) );
        
        if(counter == 1){
            
            number_in_english += numbers_basic[n] + numbers_tens[counter-1];
        
        }else{
            if(n == 0){
                number_in_english += numbers_tens[counter-1];
            }else{
                number_in_english += numbers_tens[counter-1] + "-" + numbers_basic[n];
            }
            
        }

    }

    return number_in_english;

}

std::string hundreds_to_string(int n){
    int counter{0};
    std::string number_in_english{""};
    bool check = false;

    while(n >= 100){
        n -= 100;
        counter++;
        check = true;
    }
    

    if(check){
        number_in_english += numbers_basic[counter] + " hundred";
    }
    
    
    if(n!=0){
        if(number_in_english.empty()){
            number_in_english += tens_to_string(n);
        }else{
            number_in_english += " " + tens_to_string(n);
        }
    }else if(n == 0 && !check){ //Caso de que sea 0
        
        number_in_english += tens_to_string(n);
    }
    

    return number_in_english;

}



std::string in_english(long int n){
    if(n<0 || n > 1000000000000 -1 ){
        throw std::domain_error("Number out of rage");
    }

    std::string number_in_english = "";
    int aux{0};
    
    std::vector<int> chunks_of_thousands;
    do{
        aux = n%1000;
        chunks_of_thousands.emplace_back(aux);
        n -= aux;
        n /= 1000;

    }while(n>0);

    do{
        if(chunks_of_thousands.size() == 5){ //Trillones
            number_in_english += hundreds_to_string(chunks_of_thousands.back()) + " trillion";
            
            
        }else if((chunks_of_thousands.size() == 4) && (chunks_of_thousands.back() > 0)){ //billones
            if(number_in_english.empty()){
                number_in_english += hundreds_to_string(chunks_of_thousands.back()) + " billion";
            }else {
                number_in_english += " " + hundreds_to_string(chunks_of_thousands.back()) + " billion";
            }

        }else if((chunks_of_thousands.size() == 3) && (chunks_of_thousands.back() > 0)){ // millones
            if(number_in_english.empty()){
                number_in_english += hundreds_to_string(chunks_of_thousands.back()) + " million";
            }else {
                number_in_english += " " + hundreds_to_string(chunks_of_thousands.back()) + " million";
            }

        }else if((chunks_of_thousands.size() == 2) && (chunks_of_thousands.back() > 0)){ //miles
            if(number_in_english.empty()){
                number_in_english += hundreds_to_string(chunks_of_thousands.back()) + " thousand";
            }else {
                number_in_english += " " + hundreds_to_string(chunks_of_thousands.back()) + " thousand";
            }
        }else if(chunks_of_thousands.back() > 0){
            if(number_in_english.empty()){
                number_in_english += hundreds_to_string(chunks_of_thousands.back());
            }else {
                number_in_english += " " + hundreds_to_string(chunks_of_thousands.back());
            }

        }else if(chunks_of_thousands.back() == 0 && number_in_english.empty()){ //Caso especial
            number_in_english += hundreds_to_string(chunks_of_thousands.back());
        }

        chunks_of_thousands.pop_back();

    }while(chunks_of_thousands.size() != 0);



    return number_in_english;


}

}  // namespace say
