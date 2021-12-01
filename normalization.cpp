#include "normalization.h"

void Normalization::getData(Wav sound){
	bufferCopy = sound.getBuffer();
	waveHeaderCopy = sound.getwaveHeader();
}

void Normalization::process(){
	std::cout << "Normalization Processor" << std::endl;

	if(waveHeaderCopy.bit_depth==16){ //checks for 16 bit
		for(int i = 0; i < waveHeaderCopy.data_bytes/waveHeaderCopy.sample_alignment; i++){
		  soundData.push_back(bufferCopy[i]);

      if(soundData[i] > maxValue){
        maxValue = soundData[i];
      }
      soundData[i] = soundData[i]/maxValue;
    }
  }
  
  else{ //else, loads in 8bit
		for(int i = 0; i < waveHeaderCopy.data_bytes/waveHeaderCopy.sample_alignment; i++){
		  soundData.push_back(bufferCopy[i]);

      if(soundData[i] > maxValue){
        maxValue = soundData[i];
      }
      soundData[i] = soundData[i]/maxValue;
	  }
  }
}

std::vector<float> Normalization::getNormal(){
	std::cout << soundData[1] << std::endl<< soundData[2] << std:: endl<< soundData[3] <<std::endl;
	std::cout<<"-------------------"<<std::endl;
	return(soundData);
}


	
