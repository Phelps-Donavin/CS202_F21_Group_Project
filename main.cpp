#include<iostream>
#include"Wav.h"

int main(){

    Wav sound("yes-8-bit-mono.wav");
    sound.save();
    unsigned char* p = sound.getBuffer();
    return(0);



}