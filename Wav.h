#ifndef WAV_H
#define WAV_H

#include <iostream>
#include <string>
#include "wavHeader.h"
#include <fstream>
#include <vector>

class Wav{
wav_header waveHeader;
unsigned char* buffer;
std::vector<float> soundData; //for testing
float maxValue; //for testing

public:
Wav()=default;
Wav(std::string filename);
void read(const std::string fileName);
void save();
void displayMetaData(std::string filename);
unsigned char* getBuffer() const;
wav_header getwaveHeader();
};




#endif
