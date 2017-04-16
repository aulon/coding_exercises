/**
*	aulon
*
*	Assume you have a method isSubst ring which checks if one word is a substring
* of another. Given two strings, 51 and 52, write code to check if 52 is a
* rotation of 51 using only one call to isSubstring.
*/

#include<iostream>
#include<string>
#include<sdtlib.h>

isSubstring(string s1, string s2);

isRotation(string s1, string s2){
  int length = s1.length();

  if(length == s2.length() && length > 0){
    string duplicate = s1 + s1;
    return isSubstring(duplicate, s2);
  }

  return false;
}

int main(){
  return 0;
}
