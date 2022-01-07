#include <gtest/gtest.h>
#include "../src/algo.h"
#include "../src/cat.h"
#include "../src/pet.h"
#include "../src/dog.h"
#include <string>
#include <vector>
#include<iostream>




TEST(PETTEST, wei)
{
    cat c1("He", 5.0);
    cat c2("melo", 4.2);
    cat c3("qq", 2.5);
    std::vector<cat> catv;
    catv.push_back(c1);
    catv.push_back(c3);
    catv.push_back(c2);

    Dog d1("pigger",20.5);
    Dog d2("doge",49.8);
    Dog d3("pig",25.5);
   std::vector<Dog> dogv;
   dogv.push_back(d1);
   dogv.push_back(d2);
   dogv.push_back(d3);

    ASSERT_NEAR(5.0,maxPet(catv.begin(),catv.end(),mycom)[0].getweight(),0.00001);
    ASSERT_EQ("melo",maxPet(catv.begin(),catv.end(),mycom_name)[0].getname());
    ASSERT_NEAR(49.8,maxPet(dogv.begin(),dogv.end(),mycom)[0].getweight(),0.00001);
    ASSERT_EQ("pigger",maxPet(dogv.begin(),dogv.end(),mycom_name)[0].getname());
}
