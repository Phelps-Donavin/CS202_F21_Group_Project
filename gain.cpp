/*#include "gain.h"

void Gain::getNormalData(Normalization normal){
  normalCopy = normal.getNormal();
}
void Gain::process(){
  std::cout << "Gain Processor" << std::endl;
  std::cout << normalCopy[0] << std::endl;
}