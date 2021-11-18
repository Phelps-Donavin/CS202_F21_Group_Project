wav: main.cpp Wav.o
	g++ -std=c++11 -o wav main.cpp Wav.o

Wav.o: Wav.cpp Wav.h WavHeader.h
	g++ -std=c++11 -o Wav.cpp

clean:
	rm*.o wav
