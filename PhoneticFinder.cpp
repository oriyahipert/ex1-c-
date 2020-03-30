#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <stdexcept>


using namespace std;

std::string phonetic::find(std::string text, std::string word) {
//    for(int i = 0; i<text.length; i++){
    int i=0;
  //  transform(text.begin(), text.end(), text.begin(),::tolower);
    transform(word.begin(), word.end(), word.begin(),::tolower);
    while (!text.empty()){
    int j=0;
    bool flag = true;
    int x = text.find_first_of(' ');
    string str= text.substr(0,x);
 //   cout << str << endl;
    string s;
    if(x==-1){
        s.append(text);
    }
   else{
 s.append(str);
   }
     transform(s.begin(), s.end(), s.begin(),::tolower);
   // cout << s << endl;
    // for (int p=0; p<s.length(); p++){
    //          putchar(tolower(s[p]));
    // }
    if(x==-1){
        text.erase(0, text.length());
    }
    else{
    text.erase(0,x+1);
    }
        // cout << "1" << endl;
       // cout << text << endl;
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
                // if(x==-1){
                //     return 
                // }
                return str;
            }
        } 
    
}


int findwv(char t, char w) {
    if(t==w){
        return 1;
    }
   if ((t=='v' || t == 'V' || t == 'w' || t=='W') && (w=='v' || w == 'V' || w == 'w' || w=='W')){
          return 1;
   }
   if ((t=='b' || t == 'B' || t == 'p' || t=='P' || t=='f' || t=='F') && (w=='b' || w == 'B' || w == 'p' || w=='P' || w == 'f' || w == 'F')){
        return 1;
   }
   if ((t=='c' || t == 'C' || t == 'k' || t=='K' || t=='q' || t=='Q') && (w=='c' || w == 'C' || w == 'k' || w=='K' || w == 'q' || w == 'Q')){
        return 1;
   }
    if ((t=='g' || t == 'G' || t == 'j' || t=='J') && (w=='g' || w == 'G' || w == 'j' || w=='J')){
            return 1;
    }
    if ((t=='s' || t == 'S' || t == 'z' || t=='Z') && (w=='s' || w == 'S' || w == 'z' || w=='Z')){
            return 1;
    }
    if ((t=='d' || t == 'D' || t == 't' || t=='T') && (w=='d' || w == 'D' || w == 't' || w=='T')){
        return 1;
    }
    if ((t=='o' || t == 'O' || t == 'u' || t=='U') && (w=='o' || w == 'O' || w == 'u' || w=='U')){
         return 1;
    }
    if ((t=='i' || t == 'I' || t == 'y' || t=='Y') && (w=='i' || w == 'I' || w == 'y' || w=='Y')){
        return 1;
    }

    return 0;
}