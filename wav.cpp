#include"Wav.h"

    void Wav::readFile(const std::string &fileName) { 
    std::ifstream file(fileName,std::ios::binary | std::ios::in); 
    if(file.is_open()){ 
        file.read((char*)&waveHeader, sizeof(wav_header)); 
        buffer = new unsigned char[waveHeader.data_bytes]; 
        file.read((char*)buffer, waveHeader.data_bytes); 
        file.close(); 
    } 
      
        /*std::cout<<std::hex<<waveHeader.riff_header<<std::endl;
        std::cout<<waveHeader.wav_size<<std::endl;
        std::cout<<waveHeader.wave_header<<std::endl;
        std::cout<<waveHeader.fmt_header<<std::endl;
        std::cout<<waveHeader.fmt_chunk_size<<std::endl;
        std::cout<<waveHeader.audio_format<<std::endl;
        std::cout<<waveHeader.num_channels<<std::endl;
        std::cout<<waveHeader.sample_rate<<std::endl;
        std::cout<<waveHeader.byte_rate<<std::endl;
        std::cout<<waveHeader.sample_alignment<<std::endl;
        std::cout<<waveHeader.bit_depth<<std::endl;
        std::cout<<waveHeader.data_header<<std::endl;
        std::cout<<waveHeader.data_bytes<<std::endl*/
    }