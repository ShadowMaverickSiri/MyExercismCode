#include "pangram.h"


namespace pangram {

// TODO: add your solution here
    bool is_pangram(std::string str){
        //先全部切换成小写
        for(auto &c: str){
            c = std::tolower(c);
        }

        if(!str.empty()&&str.length()>=26)
        {
            std::array<bool,26>seen{}; //初始化一个26个元素的数组，默认值为false，当每取到一个字母时，将对应的数组元素置为true，最后检查数组中是否有false即可
            for(const char&ch:str)
            {
                if(ch>='a' && ch<='z')
                {
                    seen[ch-'a']=true;
                }
            }
            for(auto c:seen)
            {
                if(c==false)
                    return false;
            }
            return true;
        }
        
        
        return false;
        
        
        
    }
}  // namespace pangram
