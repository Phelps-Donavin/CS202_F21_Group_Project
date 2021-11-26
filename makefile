audio: main.o wav.o
	g++ main.o wav.o -o audio
main.o: main.cpp
	g++ main.cpp -c
wav.o: wav.cpp
	g++ wav.cpp -c
make clean:
	rm *.o output.wav audio