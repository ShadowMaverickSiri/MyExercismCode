#pragma once
#include<map>
#include<string>
#include<vector>
namespace grade_school {

// TODO: add your solution here
    class school
    {
    public:
        school()=default;;
        ~school()=default;
        void add(std::string name_,int grade_);
        std::map<int,std::vector<std::string>> roster()const;
        std::vector<std::string> grade(int grade_)const;
    private:
        std::map<int,std::vector<std::string>> m_map{};
    };
    
} // namespace grade_school
