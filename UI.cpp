#include "UI.h"
#include <iostream>

/**
 * @brief The start option will show up at the beginning when running the file.
 * 
 */
void UI::StartOption(){
    std::cout << "This Program will allow you to modify the WAV files." << std::endl;
    std::cout << "To Begin with, " << std::endl;
}

/**
 * @brief This will ask the user to enter the filename or enter "quit" to leave.
 * 
 * @return std::string it will return the filename that teh user eneters
 */
std::string UI::InputFilename(){
    std::string name;
    std::cout << "Please Enter the Name of a WAV File, or Enter \"quit\" to Exit." << std::endl;
    std::cout << "Enter the WAV Filename:" << std::endl;
    std::cin >> name;
	return name;
}
/**
 * @brief This checks the user input if they want to "quit" or not
 * 
 * @param userinput the input that the user enters in InputFilename.
 * @return true if user doesn't enter "quit"
 * @return false if user inputs "quit"
 */
bool UI::checkUserInput(std::string userinput){

  if (userinput == "quit"){
    return false; 
  }
  return true; 
}

/**
 * @brief cout a message if the file doesn't quit
 * 
 */
void UI::InvalidFileName()
{
    std::cout << "This file does not exist." << std::endl;
}

/**
 * @brief This option will be showed if the user chose to quit
 * 
 */
void UI::ExitOption(){
    std::cout << "Exiting..." << std::endl;
}
/**
 * @brief This will display all the modification methods in the processor
 * These options include- normalization, Echo and gain adjustment
 */
void UI::ProcessorOptions(){
    std::cout << "Choose Modification method:" << std::endl;
    std::cout << "1. Normalization" << std::endl;
    std::cout << "2. Echo" << std::endl;
    std::cout << "3. Gain Adjustment" << std::endl;
    std::string selection;

/**
 * @brief If the user inputs an invalid selection then it would diplay the options again.
 * 
 */
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
 * @brief asks the user to input the name of output file
 * 
 * @return std::string string of name that the user inputs
 */
std::string UI::OutputFileName() {
    std::cout << "Enter the Name of Your Output File:" << std::endl;
    std::string name;
    std::cin >> name;
    return name;
}

