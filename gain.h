/*#include "normalization.h"

class Gain: public Normalization{
  std::vector<float> normalCopy;
  int gainFactor = 2;

public:
  void getNormalData(Normalization normal);
  void process();
};