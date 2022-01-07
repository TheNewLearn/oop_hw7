#include <gtest/gtest.h>
#include "../src/cat.h"
#include "../src/pet.h"
#include <string>
#include <vector>
#include <stdexcept>
TEST(cattest,test){
    cat c1("hello_kitty",5.2);
    cat c2("hello_kitty",5.9);
    c1.feed();
    ASSERT_NEAR(c1.getweight(),5.4,0.00000001);
    ASSERT_THROW(cat("h",7),std::range_error);
    ASSERT_THROW(c2.feed(),std::range_error);
}