#include "TPC.h"

std::string cleanWords (std::string words){
  words = lower(words);
  lstripInPlace(words, "!@#$%^&*()',`~<>//\"|?{}[]-_=+");
  rstripInPlace(words, "!@#$%^&*()',`~<>//\"|?{}[]-_=+");
  return words;
}

std::map<std::string, int> countWords(std::string fileName){
  std::ifstream file(fileName);
  std::map<std::string, int> cleanedWords;
  std::string words;
  while (file >> words) {
    words = cleanWords(words);
    if (words != "a"&& words != "an"&& words !="and"&& words != "in"&& words !="is"&& words !="it"&& words !="the") {
      cleanedWords[words] = cleanedWords[words] + 1;
    }
  }
  return cleanedWords;
}

std::map<int, std::vector<std::string>, std::greater<>> sort(std::map<std::string, int> cleanedWords){
  std::map<int, std::vector<std::string>,std::greater<>> sorted;

  for(const auto& wordAndFreq : cleanedWords)
    {
        const auto& word = wordAndFreq.first;
        const auto& freq = wordAndFreq.second;
        if(sorted.count(freq) == 1)
        {
          sorted.at(freq).push_back(word);
        }
        else{
          sorted.insert({freq,{word}});
        }
    }
  return sorted;
}

void printOut(std::map<int, std::vector<std::string>, std::greater<>> wordCount,int topWords){
      int count = 1;
    for(auto map_iter = wordCount.begin(); map_iter != wordCount.end(); ++map_iter){

        std::cout << count << ".) These words appeared " << map_iter->first<< " times: {";
        int vecCount = 1;
        for(auto vec_iter = map_iter -> second.begin(); vec_iter != map_iter -> second.end(); ++vec_iter) {


            if(vecCount == map_iter ->second.size()){
                std::cout << *vec_iter << "} \n";

            }else {
                std::cout << *vec_iter << ", ";
                vecCount++;
            }
        }
        count++;
        if(count -1 == topWords){
            break;
        }
    }
}




