#include"Wav.h"
/**
 * @brief Construct a new Wav:: Wav object
 * 
 * @param filename 
 */
    Wav::Wav(std::string filename){
        read(filename);
    }
/**
 * @brief 
 * 
 * @param fileName 
 */
    void Wav::read(const std::string fileName) { 
        std::ifstream file(fileName,std::ios::binary | std::ios::in); 
        if(file.is_open()){ 
            file.read((char*)&waveHeader, sizeof(wav_header)); 
            buffer = new unsigned char[waveHeader.data_bytes]; 
            file.read((char*)buffer, waveHeader.data_bytes); 
            file.close(); 
            displayMetaData(fileName);
        }
	}
/**
 * @brief 
 * 
 */
    void Wav::save(){
         std::ofstream file("output.wav",std::ios::binary | std::ios::out); 
         file.write((char*)&waveHeader, sizeof(wav_header));
         file.write((char*)buffer, waveHeader.data_bytes); 
         file.close(); 
    }
/**
 * @brief 
 * 
 * @param filename 
 */
    void Wav::displayMetaData(std::string filename){
        std::cout<<"**FILE METADATA**"<<std::endl;
        std::cout<<filename<<std::endl;
        std::cout<<waveHeader.sample_rate<<std::endl;
        std::cout<<waveHeader.bit_depth<<std::endl;

        if(waveHeader.num_channels==1){
            std::cout<<"Mono"<<std::endl;
        }

        if(waveHeader.num_channels==2){
            std::cout<<"Stereo"<<std::endl;
        }

    }
/**
 * @brief 
 * 
 * @return unsigned* 
 */
    unsigned char* Wav::getBuffer() const{
        return(buffer);
    }
    wav_header Wav::getwaveHeader(){
        return(waveHeader);
    }

