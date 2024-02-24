#include <string>
#include <cmath>

class ExponentiationNumber {

    int degreeNumber;

    public:

        double getExponentiationNumber(int degreeNumber, int number) {

            return std::pow(number, degreeNumber);
        }
};