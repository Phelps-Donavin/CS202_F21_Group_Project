#ifndef WAV_H
#define WAV_H

#include <iostream>
#include <string>
#include "wavHeader.h"
#include <fstream>
#include <vector>

/**
 * @brief class Wav, 
 * 
 */
class Wav{
wav_header waveHeader;
unsigned char* buffer;

/**
 * @brief 
 * 
 */
public:
Wav()=default;
Wav(std::string filename);
void read(const std::string fileName);
void save();
void save(std::vector<unsigned short> data);
void save(std::vector<unsigned char> data);
void displayMetaData(std::string filename);
unsigned char* getBuffer() const;
wav_header getwaveHeader();
};




#endif
