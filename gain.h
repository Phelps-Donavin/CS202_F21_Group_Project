#include "normalization.h"

class Gain: public Normalization{
  std::vector<float> normalCopy;
  int gainFactor = 2; //for testing

public:
  void getNormalVector(Normalization normal);
  void process();
	std::vector <float> getProcessedData();
};