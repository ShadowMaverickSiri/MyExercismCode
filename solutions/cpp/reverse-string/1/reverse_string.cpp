#include"reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string str){
        std::string reverse_str;
        if(str=="")
        {   return  std::string{""};} 
        else
        {
            int num = str.size();
            char *tmp = new char[num]; 
            
            for(unsigned i=0;i<str.size();++i)
            {
                tmp[i] = str[str.size()-1-i];
            }
            reverse_str = std::string{tmp};
            delete []tmp;
            return reverse_str;
        }
    }
}  // namespace reverse_string
