#include "secret_handshake.h"

namespace secret_handshake {

// TODO: add your solution here
    std::vector<std::string> commands(int n){

        std::string wink = "wink";
        std::string d_blink = "double blink";
        std::string close_eyes = "close your eyes";
        std::string jump = "jump";
        std::string binario = "";
        std::vector<std::string> response;
        std::vector<std::string> reverse_response;
        

        while (n > 0) {
            binario = (n % 2 == 0 ? "0" : "1") + binario;
            n /= 2;
        }

        //Rellenar el string en caso de que no tengamos 5 digitos
        while(binario.size() <5){
            binario = "0" + binario;
        }
        
        if(binario[4] == '1'){
            response.emplace_back(wink);

        }

        if(binario[3] == '1'){
            response.emplace_back(d_blink);
        }

        if(binario[2] == '1'){
            response.emplace_back(close_eyes);
        }

        if(binario[1] == '1'){
            response.emplace_back(jump);
        }

        if(binario[0] == '1'){
            //Reverse the response
            for(auto s : response){
                reverse_response.insert(reverse_response.begin(), s);
                
            }
            response.clear();
            return reverse_response;

        }


        return response;

    }


}  // namespace secret_handshake
