#include<iostream>
#include"Wav.h"

int main(){

    Wav sound("yes-8-bit-mono.wav");
    sound.save();
    unsigned char* p = sound.getBuffer();
    for(int i = 0; i <= 25; i++){
        std::cout<<std::hex<<p[i]<<std::endl;
    }
    return(0);



}