#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(const std::vector<std::string> &layers,int time){
        return layers.size()*time;
    }

    amount quantities(std::vector<std::string> layers){
        amount res{};
        for(size_t i=0;i<layers.size();i++)
            {
                if(layers[i]=="noodles")
                    res.noodles+=50;
                if(layers[i]=="sauce")
                    res.sauce +=0.2;
            }
        return res;
    }

    void addSecretIngredient(std::vector<std::string> &myList,const std::vector<std::string>friendsList){
        if(!myList.empty())
        {
            myList.pop_back(); //删除“？”
        }
        myList.push_back(friendsList.back());
    }

    std::vector<double> scaleRecipe(std::vector<double>quantities, int portions){
        
        std::vector<double>res;
        for(size_t i=0;i<quantities.size();i++)
            {
                double temp=quantities[i]/2*portions;
                res.push_back(temp);
            }
        return res;
    }
    
    void addSecretIngredient(std::vector<std::string> &myList,std::string secretIngredient){
        if(!myList.empty())
        {
            myList.pop_back(); //删除“？”
        }
        myList.push_back(secretIngredient);
    }
}  // namespace lasagna_master
