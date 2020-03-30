#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <stdexcept>


using namespace std;

std::string phonetic::find(std::string text, std::string word) {
    int i=0;
    transform(word.begin(), word.end(), word.begin(),::tolower);
    while (!text.empty()){
    int j=0;
    bool flag = true;
    int x = text.find_first_of(' ');
    string str= text.substr(0,x);
    string s;
    if(x==-1){
        s.append(text);
    }
   else{
 s.append(str);
   }
     transform(s.begin(), s.end(), s.begin(),::tolower);
    if(x==-1){
        text.erase(0, text.length());
    }
    else{
    text.erase(0,x+1);
    }
        while (j<s.length() || j<word.length()){
               if(findwv(s[j], word[j])== 0 ){
                   if(text.empty()){
                   throw out_of_range{"ERROR"};
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
    return 0;
}


int findwv(char t, char w) {
    if(t==w){
        return 1;
    }
   if ((t=='v' || t == 'w') && (w=='v'|| w == 'w')){
          return 1;
   }
   if ((t=='b' || t == 'p' || t=='f') && (w=='b' || w == 'p'|| w == 'f')){
        return 1;
   }
   if ((t=='c' || t == 'k' || t=='q') && (w=='c' || w == 'k'|| w == 'q')){
        return 1;
   }
    if ((t=='g' || t == 'j') && (w=='g' || w == 'j')){
            return 1;
    }
    if ((t=='s'  || t == 'z' ) && (w=='s' || w == 'z' )){
            return 1;
    }
    if ((t=='d'  || t == 't') && (w=='d' || w == 't' )){
        return 1;
    }
    if ((t=='o' || t == 'u' ) && (w=='o'  || w == 'u' )){
         return 1;
    }
    if ((t=='i' || t == 'y' ) && (w=='i' || w == 'y' )){
        return 1;
    }

    return 0;
}