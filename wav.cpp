#include"Wav.h"

    Wav::Wav(std::string filename){
        read(filename);
    }

    void Wav::read(const std::string fileName) { 
        std::ifstream file(fileName,std::ios::binary | std::ios::in); 
        if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
        } 
    }

    void Wav::save(){
         std::ofstream file("output.wav",std::ios::binary | std::ios::out); 
         file.write((char*)&waveHeader, sizeof(wav_header));
         file.write((char*)buffer, waveHeader.data_bytes); 
         file.close(); 
    }
      