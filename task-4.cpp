#include "modules/ExponentiationNumber.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    ExponentiationNumber en = ExponentiationNumber();

    io.outputString("Введите число и нажмите Enter:", "\n");
    int number = io.getInputNumber();

    io.outputString("Введите степень и нажмите Enter:", "\n");
    int degreeNumber = io.getInputNumber();

    io.outputString("Результат возведения равен:", "\n");
    io.outputNumber(en.getExponentiationNumber(number, degreeNumber), "\n");
};