#include<iostream>
#include"Wav.h"
#include "normalization.h"
#include "gain.h"


int main(){

    Wav sound("yes-8-bit-mono.wav");
    sound.save();

	Normalization normal;
	normal.getData(sound);
  normal.process();
  
  Gain gain;
  gain.getNormalVector(normal);
  gain.process();

  
    return 0;

}
