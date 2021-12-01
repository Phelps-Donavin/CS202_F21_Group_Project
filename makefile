audio: main.o wav.o UI.o normalizaton.o
	g++ main.o wav.o normalizaton.o -o audio

main.o: main.cpp
	g++ main.cpp -c

wav.o: wav.cpp Wav.h wavHeader.h
	g++ wav.cpp -c

UI.o: UI.cpp UI.h
	g++ UI.cpp -c

normalizaton.o: normalizaton.cpp normalizaton.h
	g++ normalizaton.cpp -c

make clean:
	rm *.o output.wav audio
