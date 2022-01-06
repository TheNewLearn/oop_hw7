#ifndef CAT_H
#define CAT_H
#include "pet.h"
#include <string>
#include <stdexcept>

class cat : public Pet
{
public:
    cat(std::string name, double weight) : Pet(name, weight)
    {
        if (weight < 2 || weight > 6)
        {
            throw std::range_error("The range is in error");
        }
    }

    void feed()
    {
        if (weight_ < 6)
        {
            weight_ += 0.2;
        }
        else
        {
            throw std::range_error("out of range");
        }
    }
    
   
};

#endif