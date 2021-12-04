#include "normalization.h"

/**
 * @brief Gain class inherts from the Normalization class.
 * 
 */
class Gain: public Normalization{
  std::vector<float> normalCopy;
  int gainFactor = 2; //for testing

/**
 * @brief 
 * 
 */
public:
  void getNormalVector(Normalization normal);
  void process();
	std::vector <float> getProcessedData();
};