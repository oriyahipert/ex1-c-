#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>


using namespace std;

std::string phonetic::find(std::string text, std::string word) {
//    for(int i = 0; i<text.length; i++){
    int i=0;
    while (!text.empty()){
    int j=0;
    bool flag = true;
    int x = text.find_first_of(' ');
    string str= text.substr(0,x);
 //   cout << str << endl;
    string s;
    s.append(str);
   // cout << s << endl;
    // for (int p=0; p<s.length(); p++){
    //          putchar(tolower(s[p]));
    // }
    text.erase(0,x);
        // cout << "1" << endl;
       // cout << text << endl;
        while (s.at(j)!= ' ' && word.at(j)==EOF){
               if(findwv(s.at(j), word.at(j) == false)){
                   if(text.empty()){
              //      throw 
                   }
                   else
                   {
                    flag = false;
                    break;
                   }
               }
               else
               {
                   j++;
               }

            }
            if(flag == true){
                return str;
            }
        } 
    
    return "find!";
}


bool findwv(char t, char w) {
   if ((t=='v' || t == 'V' || t == 'w' || t=='W') && (w=='v' || w == 'V' || w == 'w' || w=='W'))
   return true;
   if ((t=='b' || t == 'B' || t == 'p' || t=='P' || t=='f' || t=='F') && (w=='b' || w == 'B' || w == 'p' || w=='P' || w == 'f' || w == 'F'))
   return true;
   if ((t=='c' || t == 'C' || t == 'k' || t=='K' || t=='q' || t=='Q') && (w=='c' || w == 'C' || w == 'k' || w=='K' || w == 'q' || w == 'Q'))
    return true;
    if ((t=='g' || t == 'G' || t == 'j' || t=='J') && (w=='g' || w == 'G' || w == 'j' || w=='J'))
    return true;
    if ((t=='s' || t == 'S' || t == 'z' || t=='Z') && (w=='s' || w == 'S' || w == 'z' || w=='Z'))
    return true;
    if ((t=='d' || t == 'D' || t == 't' || t=='T') && (w=='d' || w == 'D' || w == 't' || w=='T'))
    return true;
    if ((t=='d' || t == 'D' || t == 't' || t=='T') && (w=='d' || w == 'D' || w == 't' || w=='T'))
    return true;
    if ((t=='o' || t == 'O' || t == 'u' || t=='U') && (w=='o' || w == 'O' || w == 'u' || w=='U'))
    return true;
    if ((t=='i' || t == 'I' || t == 'u' || t=='U') && (w=='i' || w == 'I' || w == 'u' || w=='U'))
    return true;

    return false;
}