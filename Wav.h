#ifndef WAV_H
#define WAV_H

#include <iostream>
#include <string.h>
#include "wavHeader.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
class Wav{
wav_header waveHeader;
unsigned char* buffer;
public:

void readFile(const std::string &fileName);
//int getSampleRate;
//int getBitsPerSample;
//int getSoundType;

};




#endif
