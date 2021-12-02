#include <iostream>
#include <string>
#include <algorithm>
#include "Wav.h"
#include "processable.h"

class UI {
    std::string input = "quit";
public:
    UI() = default;
    static void StartOption();
    void InputFilename();
    void checkInput();
    static void ExitOption();
    static std::string ProcessorOptions();
    static std::string OutputFileName();
    std::string getInput() const{ return input; }
    void setInput(std::string i) { input = i;}
};
