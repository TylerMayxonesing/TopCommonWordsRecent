//
// Created by T Alpha 1 on 10/29/2019.
//

#include "CharFunctions.h"

bool isupper(char c) {
  return c >= 'A' && c <= 'Z'; // incorrect 'A' <= c <= 'Z
  //('A' <= c) <= 'Z;
  //true or false <= Z;
  //0 or 1 <= 'Z'
  //0 or 1 <= 90
  // true
  //'A' + 1
  //'C' - 'A'
}

bool islower(char c) {
  return c >= 'a' && c <= 'z';
}

bool isalpha(char c) {
  return islower(c) || isupper(c);
}

bool isdigit(char c) {
  return c >= '0' && c <= '9';
}

bool isalnum(char c) {
  return isalpha(c) || isdigit(c);
}

char toupper(char c) {
  if(islower(c)){
    return 'A' + (c - 'a'); //(c-a) is how far c is into the lowercase alphabet
    //we then need to move that same amount into the uppercase alphabet
  }else{
    return c;
  }
}

char tolower(char c) {
  if(isupper(c)){
    return 'a' + c - 'A';
  } else{
    return c;
  }
}
