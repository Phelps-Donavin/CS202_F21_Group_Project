#include "gain.h"
#include <iostream>
#include <iomanip>

/**
 * @brief 
 * 
 * @param normal 
 */
void Gain::getNormalVector(Normalization normal){
  normalCopy = normal.getNormal();
}

/**
 * @brief 
 * 
 */
void Gain::process(){
  
  for(int i = 0; i < normalCopy.size(); i++){
    normalCopy[i] = normalCopy[i] * gainFactor;
  }
  std::cout << normalCopy[1] << std::endl<< normalCopy[2] << std:: endl<< normalCopy[3] <<std::endl;
  
}
/**
 * @brief 
 * 
 * @return std::vector<float> 
 */
std::vector<float> Gain::getProcessedData(){
	return(normalCopy);
}