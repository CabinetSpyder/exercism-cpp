#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>

namespace grade_school {

    class school{
        private:
            std::map<int, std::vector<std::string>> roster_m;
        public:
            //rooster() return the rooster as it is
            std::map<int, std::vector<std::string>> roster() const;
            //add() adds a student to a grade, and adds it in alphabetical order
            void add(std::string name, int gr);
            //grade() returns the students in that grade in alphabetical order
            std::vector<std::string> grade(int gr) const;
        
    };

    
}  // namespace grade_school

#endif // GRADE_SCHOOL_H