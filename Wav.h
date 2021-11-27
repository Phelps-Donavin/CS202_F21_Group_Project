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

Wav()=default;
Wav(std::string filename);
void read(const std::string fileName);
void save();
void displayMetaData(std::string filename);
unsigned char* getBuffer() const;
wav_header getwaveHeader();
};




#endif
