#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <string>

class InputHandler {
public:
    static std::string inputString(const std::string& prompt);
    static int inputInt(const std::string& prompt);
    static char inputChar(const std::string& prompt);
    int inputIntInRange(const std::string& prompt, int min, int max);
    static std::string inputEmail(const std::string& prompt);
    static std::string inputPassword(const std::string& prompt);
};

#endif 
