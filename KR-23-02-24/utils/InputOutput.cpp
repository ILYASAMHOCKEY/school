#pragma once
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

class InputOutput {

    public:

        void outputString(std::string message, std::string postfix = "") {
            std::cout << message << postfix;
        };

        void outputNumber(int number, std::string postfix = "") {
            std::cout << number << postfix;
        }

        void outputNumber(double number, std::string postfix = "") {
            std::cout << number << postfix;
        }

        std::string getInputString() {
            std::string localString;
            std::getline(std::cin, localString);

            return localString;
        };

        int getInputNumber() {
            int localNumber;
            std::cin >> localNumber;
            
            return localNumber;
        };

        std::vector<int> getInputArrayNumber()
        {
            std::string line;
            std::getline(std::cin, line);
            std::istringstream ist(line);
            std::vector<int> v((std::istream_iterator<int>(ist)), std::istream_iterator<int>());
            
            return v;
        }

        std::vector<char> getInputArrayChar()
        {

            std::string line;
            std::getline(std::cin, line);
            std::vector<char> v(line.begin(), line.end());

            return v;
        }
};