#ifndef DOG_H
#define DOG_H
#include "pet.h"
#include <string>
#include <stdexcept>
class Dog : public Pet{

public:
    Dog(std::string name, double weight):Pet(name,weight){
        if(weight<10 || weight> 50){
            throw std::range_error("The range is in error");
        }
    }

    void feed(){
        if((weight_ + 0.8) <= 50){
            weight_ += 0.8;
        }
        else{
            throw std::range_error("out_of_range");
        }
    }

  
   

    



};

#endif