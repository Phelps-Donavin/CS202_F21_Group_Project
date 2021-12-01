#include<iostream>
#include"Wav.h"
#include "normalization.h"


int main(){

    Wav sound("yes-16-bit-mono.wav");
    sound.save();

	Normalization normal;
	normal.getData(sound);
  normal.process();
  
    return 0;

}
