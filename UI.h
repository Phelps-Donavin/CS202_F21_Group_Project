#include <iostream>
#include <string>
#include <algorithm>
#include "Wav.h"
#include "processable.h"

class UI {  

public:
/**
 * @brief constructors
 * 
 */    
    UI() = default;
    void StartOption();
    std::string InputFilename();
    bool checkInput(std::string input);
	void InvalidFileName();
    void ExitOption();
    static std::string ProcessorOptions();
    std::string OutputFileName();
};

