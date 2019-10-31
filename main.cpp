#include <iostream>
#include "TPC.h"
#include <fstream>




int main(int argc, char** argv[]) {

  auto fileWords = countWords("C:/test_files/shake_it_off.txt");
  printOut(sort(fileWords), 10);


    return 0;
}