#include <iostream>
#include "TPC.h"
#include <fstream>




int main(int argc, char** argv) {
    std::map<std::string,int>  wordCount;
    std::ifstream file(argv[1]);
    int numWords = std::stoi(argv[2]);
    std::string words;
    std::map<int, std::vector<std::string>,std::greater<>> v2;
    std::vector<std::string> removeList {"a", "an", "and", "in","is", "the"};


    while(file >> words){

        lower(words);
        lstripInPlace(words, ",.:;\"|\\!@#$%^&*()_+-=[]{}<>?/~`'");
        rstripInPlace(words, ",.:;\"|\\!@#$%^&*()_+-=[]{}<>?/~`'");
        ++wordCount[words];

    }

    for(const auto& wordAndFreq : wordCount)
    {

        const auto& word = wordAndFreq.first;
        const auto& freq = wordAndFreq.second;
        if(v2.count(freq) == 1)
        {
          v2.at(freq).push_back(word);
        }
        else{
          v2.insert({freq,{word}});
        }
    }


    int count = 1;
    for(auto map_iter = v2.begin(); map_iter != v2.end(); ++map_iter){

        std::cout << count << ".) These words appeared " << map_iter->first<< " times: {";
        int vecCount = 1;
        //removeMatchingElements(map_iter->second, removeList);
        for(auto vec_iter = map_iter -> second.begin(); vec_iter != map_iter -> second.end(); ++vec_iter) {


            if(vecCount == map_iter ->second.size()){
                std::cout << *vec_iter << "} \n";

            }else {
                std::cout << *vec_iter << ", ";
                vecCount++;
            }
        }
        count++;
        if(count -1 == numWords){
            break;
        }
    }


    return 0;
}