#include "UI.h"
#include <iostream>

/**
 * @brief 
 * 
 */
void UI::StartOption(){
    std::cout << "This Program will allow you to modify the WAV files." << std::endl;
    std::cout << "To Begin with, " << std::endl;
}

/**
 * @brief 
 * 
 * @return std::string 
 */
std::string UI::InputFilename(){
    std::string name;
    std::cout << "Please Enter the Name of a WAV File, or Enter \"quit\" to Exit the Program." << std::endl;
    std::cout << "Enter the WAV Filename:" << std::endl;
    std::cin >> name;
	return name;
}
/**
 * @brief 
 * 
 * @param userinput 
 * @return true 
 * @return false 
 */
bool UI::checkUserInput(std::string userinput){

  if (userinput == "quit"){
    return false; 
  }
  return true; 
}

/**
 * @brief 
 * 
 */
void UI::InvalidFileName()
{
    std::cout << "This file does not exist." << std::endl;
}
/**
 * @brief 
 * 
 */
void UI::ExitOption(){
    std::cout << "Exiting..." << std::endl;
}
/**
 * @brief 
 * 
 */
void UI::ProcessorOptions(){
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
/**
 * @brief 
 * 
 * @return std::string 
 */
std::string UI::OutputFileName() {
    std::cout << "Enter the Name of Your Output File:" << std::endl;
    std::string name;
    std::cin >> name;
    return name;
}

