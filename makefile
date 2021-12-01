audio: main.o wav.o processable.o normalization.o gain.o
	g++ main.o wav.o processable.o normalization.o gain.o -o audio

main.o: main.cpp
	g++ main.cpp -c

wav.o: wav.cpp Wav.h wavHeader.h
	g++ wav.cpp -c

processable.o: processable.cpp processable.h
	g++ processable.cpp -c

normalization.o: normalization.cpp normalization.h
	g++ normalization.cpp -c

gain.o: gain.cpp gain.h
	g++ gain.cpp -c

make clean:
	rm *.o output.wav audio
