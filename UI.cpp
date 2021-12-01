#include "UI.h"
#include <iostream>

void UI::StartOption(){
    std::cout << "This Program will allow you to modify the WAV files." << std::endl;
    std::cout << "To Begin with, " << std::endl;
}

void UI::InputFilename(){
    std::string name;
    std::cout << "Please Enter the Name of a WAV File, or Enter \"quit\" to Exit the Program." << std::endl;
    std::cout << "Enter the WAV Filename:" << std::endl;
    std::cin >> name;
    setInput(name);
}

void UI::ExitOption(){
    std::cout << "Exiting..." << std::endl;
}

void UI::checkInput(){
  std::string i = getInput();
  if((i) == "quit"){
    ExitOption();
    exit(0);
  }
 } 

std::string UI::ProcessorOptions(){
    std::cout << "Choose Modification method:" << std::endl;
    std::cout << "1. Normalization" << std::endl;
    std::cout << "2. Echo" << std::endl;
    std::cout << "3. Gain Adjustment" << std::endl;
    std::string selection;

    do
    {
        std::cout << "Enter the Number of the Processor Function: " << std::endl;
        std::cin >> selection;
    } while(selection != "1" &&
          selection != "2" && 
          selection != "3");
    return selection;
}

std::string UI::OutputFileName() {
    std::cout << "Enter the Name of Your Output File:" << std::endl;
    std::string name;
    std::cin >> name;
    return name;
}

