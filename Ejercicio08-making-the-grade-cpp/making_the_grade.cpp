#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> student_scores_int;

    for(double val : student_scores){
        student_scores_int.emplace_back(static_cast<int>(val));
    }
    
    return student_scores_int;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{0};
    for(int val : student_scores){
        if(val<=40){
            count++;
        }
    }
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> best_scores;

    for(int val: student_scores){
        if(val >= threshold){
            best_scores.emplace_back(val);
        }
    }
    
    return best_scores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int failling_threshold{40};
    int difference = (highest_score - failling_threshold)/4;
    int aux = failling_threshold +1;
    
    std::array<int, 4> boundaries{41, 0, 0, 0};

    for (int i{1}; i < 4; i++){
        aux += difference;
        boundaries[i] = aux;
    }
    
    
    return boundaries;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking;
    for(int i{0}; i < student_scores.size(); i++){
        //std::string aux;
        ranking.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i])  );
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string perfect_student {""};

    for(int i{0}; i<student_scores.size(); i++){
        if(student_scores[i] == 100){
            perfect_student = student_names[i];
            break;
        }
    }  
    
    return perfect_student;
}
