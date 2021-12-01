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
            displayMetaData(fileName);
        }
/*-------------------------------------------------------------------------*/
		for(int i = 0; i < waveHeader.data_bytes/waveHeader.sample_alignment; i++){
			soundData.push_back((float)buffer[i]);
		}

		for(int j = 0; j < soundData.size(); j++){
			std::cout << soundData[j] << " ";
			if(soundData[j] > maxValue){
				maxValue = soundData[j];
			}
		}
		std::cout << std::endl;
		std::cout << maxValue << std::endl;
	}
/*-------------------------------------------------------------------------*/
    void Wav::save(){
         std::ofstream file("output.wav",std::ios::binary | std::ios::out); 
         file.write((char*)&waveHeader, sizeof(wav_header));
         file.write((char*)buffer, waveHeader.data_bytes); 
         file.close(); 
    }

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

    unsigned char* Wav::getBuffer() const{
        return(buffer);
    }
    wav_header Wav::getwaveHeader(){
        return(waveHeader);
    }



