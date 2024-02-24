#include <vector>
#include <string>
#include "modules/SumNumber.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    int endNumber = 0;

    io.outputString("Введите числа через пробел и нажмите Enter:", "\n");
    std::vector<int> arr = io.getInputArrayNumber();

    io.outputString("Введите конечное число и нажмите Enter:", "\n");
    endNumber = io.getInputNumber();

    SumNumber sn = SumNumber(endNumber);

    io.outputString("Сумма чисел оканчивающихся на " + std::to_string(endNumber) + " равна:", "\n");
    io.outputNumber(sn.getSumNumber(arr), "\n");
};