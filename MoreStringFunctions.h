//
// Created by T Alpha 1 on 10/29/2019.
//

//
// Created by mfbut on 4/8/2019.
//

#ifndef TCW__MORESTRINGFUNCTIONS_H_
#define TCW__MORESTRINGFUNCTIONS_H_

#include <string>
#include <vector>
#include <string>
#include <vector>
void lowerInPlace(std::string& string);
std::string lower(std::string string);
void stripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");
void lstripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");
void rstripInPlace(std::string& string, const std::string& charsToRemove = "\t\n ");

bool contains(const std::string& string, char letter);

std::vector<std::string> split(const std::string& string, const std::string& delimiter);

#endif //TCW__MORESTRINGFUNCTIONS_H_
