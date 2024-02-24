#include <vector>
#include <string>
#include "modules/MaxNumber.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    int multipleNumber = 0;

    io.outputString("Введите числа через пробел и нажмите Enter:", "\n");
    std::vector<int> arr = io.getInputArrayNumber();

    io.outputString("Введите кратное число и нажмите Enter:", "\n");
    multipleNumber = io.getInputNumber();

    MaxNumber mn = MaxNumber(multipleNumber);

    io.outputString("Максимальное число, кратное " + std::to_string(multipleNumber), ": \n");
    io.outputNumber(mn.getMaxNumber(arr), "\n");
};