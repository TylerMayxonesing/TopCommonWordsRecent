//
// Created by T Alpha 1 on 10/29/2019.
//

#include "MoreStringFunctions.h"

//
// Created by mfbut on 4/8/2019.
//

#include <algorithm>
#include <string>
#include "MoreStringFunctions.h"
#include "CharFunctions.h"

void lowerInPlace(std::string& string) {
  for (auto& letter : string) {
    letter = tolower(letter);
  }

}

std::string lower(std::string string) {
  lowerInPlace(string);
  return string;
}

void stripInPlace(std::string& string, const std::string& charsToRemove) {
  lstripInPlace(string, charsToRemove);
  rstripInPlace(string, charsToRemove);
}

void lstripInPlace(std::string& string, const std::string& charsToRemove) {

  auto itr = string.begin();
  for (; itr != string.end(); ++itr) {
    if (!contains(charsToRemove, *itr)) {
      break;
    }
  }
  string.erase(string.begin(), itr);
}

void rstripInPlace(std::string& string, const std::string& charsToRemove) {
  auto itr = string.rbegin();
  for (; itr != string.rend(); ++itr) {
    if (!contains(charsToRemove, *itr)) {
      break;
    }
  }
  string.erase(itr.base(), string.end());
}


std::vector<std::string> split(const std::string& string, const std::string& delimiter) {
  std::vector<std::string> strings;
  std::size_t pos;
  unsigned int substringStart = 0;
  for (pos = string.find(delimiter);
       pos != std::string::npos;
       pos = string.find(delimiter, pos + delimiter.size())) {
    //add the substring to our vector of strings
    strings.emplace_back(string, substringStart, pos - substringStart);
    substringStart = pos + 1;
  }

  if(substringStart < string.size()){
    strings.emplace_back(string, substringStart, string.size() - substringStart);
  }
  return strings;
}