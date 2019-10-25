#include "TPC.h"



void lowerInPlace(std::string& string){
    for (auto& letter : string){
        letter = tolower(letter);
    }
}



std::string lower(std::string string){
    lowerInPlace(string);
    return string;
}


bool contains(const std::string& string, char letter){
    return std::find(string.cbegin(), string.cend(), letter) != string.cend();
}



void rstripInPlace(std::string& string, const std::string charsToRemove){
    auto itr = string.rbegin();
    for (;itr != string.rend(); ++itr){
        if (!contains(charsToRemove, *itr)){
            break;
        }
    }
    string.erase(itr.base(),string.end());
}



void lstripInPlace(std::string& string, const std::string& charsToRemove){
    auto itr = string.begin();
    for (; itr != string.end(); ++itr){
        if(!contains(charsToRemove, *itr)){
            break;
        }
    }
    string.erase(string.begin(),itr);
}

template <typename T>
void removeMatchingElements(std::vector<T> &vec, const std::vector<T> &valsToRemove){
    auto begin = vec.begin();
    auto end = vec.end();
    for(const auto& removable : valsToRemove){
        end = std::remove(begin,end ,removable);
    }
    vec.erase(end, vec.end());
}
