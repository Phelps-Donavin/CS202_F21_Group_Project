#ifndef NORMALIZATION_H
#define NORMALIZATION_H


#include "Wav.h"
#include "processable.h"

/**
 * @brief Normalization class that inherts from the processable class.
 * 
 */
class Normalization: public Processable{
	unsigned char* bufferCopy;
	wav_header waveHeaderCopy;
	std::vector<float> soundData;

/**
 * @brief 
 * 
 */
public:
	Normalization() = default;
	void getData(Wav sound);
	void process();
	std::vector<float> getNormal();
};

#endif
