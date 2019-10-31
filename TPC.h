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
#include "MoreStringFunctions.h"

std::string cleanWords(std::string);
std::map<std::string, int>  countWords(std::string);
std::map<int, std::string>  nonEssential(std::string);
std::map<int, std::vector<std::string>, std::greater<>> sort(std::map<std::string, int>);
void printOut(std::map<int, std::vector<std::string>, std::greater<>>,int);



std::string lower(std::string string);
bool contains(const std::string& string, char letter);
template <typename T>
void removeMatchingElements(std::vector<T> &vec, const std::vector<T> &valsToRemove);

#endif //TCW_TPC_H
