#include<iostream>
#include"Wav.h"
#include "normalization.h"

int main(){

    Wav sound("yes-8-bit-mono.wav");
    sound.save();

	Normalization normal;
	normal.getData(sound);
		
    return 0;

}
