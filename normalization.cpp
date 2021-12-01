#include "normalization.h"

void Normalization::getData(Wav sound){
	bufferCopy = sound.getBuffer();
	waveHeaderCopy = sound.getwaveHeader();
	Normalization::process();
}

void Normalization::process(){
	std::cout << "Normalization Processor" << std::endl;

	for(int i = 0; i < waveHeaderCopy.data_bytes/waveHeaderCopy.sample_alignment; i++){
		soundData.push_back((float)bufferCopy[i]);
		
		if(soundData[i] > maxValue){
			maxValue = soundData[i];
		}
		soundData[i] = soundData[i]/maxValue;
		//std::cout << soundData[i] << " ";
	}
}

std::vector<float> Normalization::getNormal(){
	return(soundData);
}


	
