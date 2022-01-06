#ifndef PET_H
#define PET_H
#include <string>

 class Pet{
    protected:
        std::string name_;
        double weight_;


    public: 
        Pet(std::string n, double weight):name_(n),weight_(weight){}
        std::string getname(){
            return name_;
        }
        double getweight(){
            return weight_;
        }
        virtual void feed(){}
        
        
        
};













#endif
