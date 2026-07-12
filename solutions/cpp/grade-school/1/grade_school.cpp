#include"grade_school.h"
#include<algorithm>
namespace grade_school {

// TODO: add your solution here
    void school::add(std::string name_,int grade_){
       m_map[grade_].push_back(name_);  
        std::sort(m_map[grade_].begin(), m_map[grade_].end());
    }

    std::map<int,std::vector<std::string>> school::roster()const{
        return m_map;
    }

    std::vector<std::string> school::grade(int grade_)const{
        auto it  = m_map.find(grade_);
        if(it==m_map.end())
            return {};
        return it->second;
    }
}  // namespace grade_school
