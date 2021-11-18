
#include <iostream>
#include <string>
#include "Wav.h"
#include "UI.h"

int main()
{
	while(){
		UI::UIStart()

		std::cin >> UserInput;

		if(UserInput == "quit"){
			UI::UIExitMenu()
		}
	}
	else{
		UI::UIRun;
	}
return 0;
}
