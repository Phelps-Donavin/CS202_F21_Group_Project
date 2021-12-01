#ifndef NORMALIZATION_H
#define NORMALIZATION_H


#include "Wav.h"
#include "processable.h"

class Normalization: public Processable{
	unsigned char* bufferCopy;
	wav_header waveHeaderCopy;
	std::vector<float> soundData;
	int maxValue;

public:
	Normalization() = default;
	void getData(Wav sound);
	void process();
	std::vector<float> getNormal();
};

#endif
