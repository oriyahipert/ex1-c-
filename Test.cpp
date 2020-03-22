#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of v and w") {
    string text = "xxx wow yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test string not found") {
    bool exceptionThrown = false;
    string text = "sjjsjs";
    try
    {
        find(text, "happy");
    }
    catch(const exception &e) // special exception type
    {   
        exceptionThrown = true;
    }
    CHECK(exceptionThrown);
}