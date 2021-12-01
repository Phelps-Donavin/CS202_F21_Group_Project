#include "gain.h"
#include <iostream>
#include <iomanip>
void Gain::getNormalVector(Normalization normal){
  normalCopy = normal.getNormal();
}

void Gain::process(){
  
  for(int i = 0; i < normalCopy.size(); i++){
    normalCopy[i] = normalCopy[i] * gainFactor;
  }
  std::cout << normalCopy[1] << std::endl<< normalCopy[2] << std:: endl<< normalCopy[3] <<std::endl;
  
}

std::vector<float> Gain::getProcessedData(){
	return(normalCopy);
}