/**
 *
 * AUTHORS: Noa Yair & Oriya Kronfeld Hipert
 * 
 * Date: 2020-02
 */


#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of p and b") {
    string text = "ccc happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    text = "xxx bbbbb yyy";

    /* Add more checks here */
}

TEST_CASE("Test replacement of v and w") {
    string text = "xxx wow yyy";
    string text2 = "Corona virus";
    CHECK(find(text, "WoW") == string("wow"));
    CHECK(find(text, "vov") == string("wow"));
    CHECK(find(text, "Vow") == string("wow"));
    CHECK(find(text, "wOw") == string("wow"));
    CHECK(find(text, "wov") == string("wow"));
    CHECK(find(text, "WOV") == string("wow"));
    CHECK(find(text2, "Corona wirus") == string("Corona virus"));
    CHECK(find(text2, "CORONA WIRUS") == string("Corona virus"));
    CHECK(find(text2, "Corona VIRUS") == string("Corona virus"));
    CHECK(find(text2, "Corona Wirus") == string("Corona virus"));


}

TEST_CASE("Test replacement of s and z") {
    string text = "suzuki";
    string text2 = "shalom";
    CHECK(find(text, "zusuki") == string("suzuki"));
    CHECK(find(text, "suZuki") == string("suzuki"));
    CHECK(find(text, "suzuki") == string("suzuki"));
    CHECK(find(text, "susuki") == string("suzuki"));
    CHECK(find(text, "SUZUKI") == string("suzuki"));    
    CHECK(find(text, "ZUSUKI") == string("suzuki"));
    CHECK(find(text2, "zhalom") == string("shalom"));
    CHECK(find(text2, "ZHALOM") == string("shalom"));
    CHECK(find(text2, "SHALOM") == string("shalom"));
    CHECK(find(text2, "shalom") == string("shalom"));

}

TEST_CASE("Test replacement of g and j") {
    string text = "google";
    CHECK(find(text, "joogle") == string("google"));
    CHECK(find(text, "joojle") == string("google"));
    CHECK(find(text, "Goojle") == string("google"));
    CHECK(find(text, "GOOGLE") == string("google"));
    CHECK(find(text, "google") == string("google"));
    string text2 = "java";
    CHECK(find(text2, "gava") == string("java"));
    CHECK(find(text2, "java") == string("java"));
    CHECK(find(text2, "JAVA") == string("java"));
    CHECK(find(text2, "GAVA") == string("java"));


}

TEST_CASE("Test replacement of b,f and p") {
    string text = "Public Notice – stay home despite the beautiful weather!";
    CHECK(find(text, "buplic") == string("public"));
    CHECK(find(text, "fuplic") == string("public"));
    CHECK(find(text, "bublic") == string("public"));
    CHECK(find(text, "puplic") == string("public"));
    CHECK(find(text, "PUBLIC") == string("public"));
    CHECK(find(text, "puflic") == string("public"));
    CHECK(find(text, "Puflic") == string("public"));
    CHECK(find(text, "beautiful") == string("beautiful"));
    CHECK(find(text, "feautibul") == string("beautiful"));
    CHECK(find(text, "beautibul") == string("beautiful"));
    CHECK(find(text, "beautipul") == string("beautiful"));
    CHECK(find(text, "peautibul") == string("beautiful"));
    CHECK(find(text, "beautiPul") == string("beautiful"));
    CHECK(find(text, "peautiful") == string("beautiful"));
    CHECK(find(text, "feautiful") == string("beautiful"));
    CHECK(find(text, "BEAUTIFUL") == string("beautiful"));
}

TEST_CASE("Test replacement of I and y") {
string text = "it always seems impossible until it is done";
CHECK(find(text, "it") == string("it"));
CHECK(find(text, "It") == string("it"));
CHECK(find(text, "yt") == string("it"));
CHECK(find(text, "is") == string("is"));
CHECK(find(text, "Is") == string("is"));
CHECK(find(text, "ys") == string("is"));
CHECK(find(text, "impossible") == string("impossible"));
CHECK(find(text, "Impossible") == string("impossible"));
CHECK(find(text, "ImpossIble") == string("impossible"));
CHECK(find(text, "ympossible") == string("impossible"));
CHECK(find(text, "ympossIble") == string("impossible"));
CHECK(find(text, "ympossyble") == string("impossible"));
CHECK(find(text, "impossyble") == string("impossible"));
CHECK(find(text, "it's") == string("it's"));
CHECK(find(text, "It's") == string("it's"));
CHECK(find(text, "yt's") == string("it's"));
}

TEST_CASE("Test replacement of o and u") {
string text = "If you can dream it you can do it";
CHECK(find(text, "you") == string("you"));
CHECK(find(text, "yOu") == string("you"));
CHECK(find(text, "yoo") == string("you"));
CHECK(find(text, "yOU") == string("you"));
CHECK(find(text, "yuu") == string("you"));
CHECK(find(text, "yuo") == string("you"));
CHECK(find(text, "yuU") == string("you"));
CHECK(find(text, "do") == string("do"));
CHECK(find(text, "dO") == string("do"));
CHECK(find(text, "du") == string("do"));
}


TEST_CASE("Test replacement of d and t") {
string text = "do not dream it be it";
CHECK(find(text, "do") == string("do"));
CHECK(find(text, "Do") == string("do"));
CHECK(find(text, "to") == string("do"));
CHECK(find(text, "not") == string("not"));
CHECK(find(text, "noT") == string("not"));
CHECK(find(text, "nod") == string("not"));
CHECK(find(text, "noD") == string("not"));
CHECK(find(text, "dream") == string("dream"));
CHECK(find(text, "Dream") == string("dream"));
CHECK(find(text, "tream") == string("dream"));
CHECK(find(text, "Tream") == string("dream"));
CHECK(find(text, "it") == string("it"));
CHECK(find(text, "iT") == string("it"));
CHECK(find(text, "id") == string("it"));
CHECK(find(text, "iD") == string("it"));
}


TEST_CASE("Test replacement of q and k") {
string text = "action is the foundational key to all success";
CHECK(find(text, "key") == string("key"));
CHECK(find(text, "Key") == string("key"));
CHECK(find(text, "qey") == string("key"));
}

TEST_CASE("Test replacement of c and k") {
string text = "action is the foundational key to all success";
CHECK(find(text, "action") == string("action"));
CHECK(find(text, "aCtion") == string("action"));
CHECK(find(text, "aktion") == string("action"));
CHECK(find(text, "aKtion") == string("action"));
CHECK(find(text, "key") == string("key"));
CHECK(find(text, "Key") == string("key"));
CHECK(find(text, "cey") == string("key"));
CHECK(find(text, "Cey") == string("key"));
CHECK(find(text, " success") == string("success"));
CHECK(find(text, " sukcess") == string("success"));
CHECK(find(text, " suKcess") == string("success"));
CHECK(find(text, " suCcess") == string("success"));
CHECK(find(text, " suckess") == string("success"));
CHECK(find(text, " sucKess") == string("success"));
CHECK(find(text, " sukkess") == string("success"));
CHECK(find(text, " suCCess") == string("success"));
}

TEST_CASE("Test replacement of c and q") {
string text = "action is the foundational key to all success";
CHECK(find(text, "action") == string("action"));
CHECK(find(text, "aCtion") == string("action"));
CHECK(find(text, "aqtion") == string("action"));
CHECK(find(text, "aQtion") == string("action"));
CHECK(find(text, "success") == string("success"));
CHECK(find(text, "suCcess") == string("success"));
CHECK(find(text, "suCCess") == string("success"));
CHECK(find(text, "suqcess") == string("success"));
CHECK(find(text, "suqqess") == string("success"));
CHECK(find(text, "sucqess") == string("success"));
CHECK(find(text, "sucQess") == string("success"));
}

TEST_CASE("Test string not found") {
    bool exceptionThrown = false;
    string text = "sjjsjs";
    try
    {
        find(text, "happy");
    }
    catch(const exception &e) 
    {   
        exceptionThrown = true;
    }
    CHECK(exceptionThrown);
}

TEST_CASE("Test string not found") {
    bool exceptionThrown = false;
    string text = "Hello world";
    try
    {
        find(text, " ");
    }
    catch(const exception &e) 
    {   
        exceptionThrown = true;
    }
    CHECK(exceptionThrown);
}