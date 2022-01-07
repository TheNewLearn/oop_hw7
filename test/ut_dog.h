#include <gtest/gtest.h>
#include "../src/dog.h"
#include "../src/pet.h"
#include <string>
#include <vector>
#include <stdexcept>

TEST(dogtest,test){
    Dog d1("hello_dog",15.0);
    Dog d2("doge",49.3);
    d1.feed();
    ASSERT_NEAR(d1.getweight(),15.8,0.00000001);
    ASSERT_THROW(Dog("h",9),std::range_error);
    ASSERT_THROW(d2.feed(),std::range_error);
}