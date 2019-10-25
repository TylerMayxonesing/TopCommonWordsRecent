//
// Created by Jericho Referente on 2019-04-28.
//

#ifndef TCW_TPC_H
#define TCW_TPC_H

#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <map>
void lowerInPlace(std::string& string);
std::string lower(std::string string);
bool contains(const std::string& string, char letter);
void rstripInPlace(std::string& string, const std::string charsToRemove);
void lstripInPlace(std::string& string, const std::string& charsToRemove);
template <typename T>
void removeMatchingElements(std::vector<T> &vec, const std::vector<T> &valsToRemove);

#endif //TCW_TPC_H
