#include "InputHandler.h"
#include <iostream>
#include <string>
#include <limits>
#include <regex>


  std::string InputHandler::inputString(const std::string& prompt) {
        std::string input;
        while (true) {
            std::cout << prompt;

            if (std::getline(std::cin, input)) {
                if (!input.empty()) {
                    return input;
                }
                std::cerr << "Error: Input cannot be empty. Please try again.\n";
            }
            else {
                if (std::cin.eof()) {
                    std::cerr << "\nError: Unexpected end of input.\n";
                    std::cin.clear();
                    return "";
                }
                std::cerr << "Error: Invalid input. Please try again.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    
     int InputHandler::inputInt(const std::string& prompt) {
        int value;
        while (true) {
            std::cout << prompt;
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid number. Please try again.\n";
            }
            else {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return value;
            }
        }
    }

     char InputHandler:: inputChar(const std::string& prompt) {
        char ch;
        while (true) {
            std::cout << prompt;
            std::cin >> ch;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (isalpha(ch)) return tolower(ch);
            std::cout << "Please enter a letter (A-Z or a-z).\n";
        }
    }

    static bool getYesNo(const std::string& prompt) {
        char response;
        while (true) {
            std::cout << prompt << " (y/n): ";
            std::cin >> response;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            response = tolower(response);
            if (response == 'y') return true;
            if (response == 'n') return false;
            std::cout << "Please enter 'y' or 'n'.\n";
        }
    }

     int InputHandler::inputIntInRange(const std::string& prompt, int min, int max) {
        int value;
        while (true) {
            value = inputInt(prompt);
            if (value >= min && value <= max) return value;
            std::cout << "Please enter a value between " << min << " and " << max << ".\n";
        }
    }

     std::string InputHandler:: inputEmail(const std::string& prompt) {
        const std::regex emailPattern(R"(^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$)");

        while (true) {
            std::string email = inputString(prompt);  
            if (std::regex_match(email, emailPattern)) {
                return email;
            }
            std::cout << "Invalid email format. Please try again (example: user@example.com).\n";
        }
    }
    
