#include <vector>
#include <string>
#include "modules/SumNumber.cpp"
#include "modules/MaxNumber.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    int multipleNumber = 0;
    int endNumber = 0;

    io.outputString("Введите числа через пробел и нажмите Enter:", "\n");
    std::vector<int> arr = io.getInputArrayNumber();

    io.outputString("Введите кратное число и нажмите Enter:", "\n");
    multipleNumber = io.getInputNumber();

    io.outputString("Введите конечное число и нажмите Enter:", "\n");
    endNumber = io.getInputNumber();

    MaxNumber mn = MaxNumber(multipleNumber);
    SumNumber sn = SumNumber(endNumber);


    io.outputString("Сумма чисел оканчивающихся на " + std::to_string(endNumber) + " и кратные " + std::to_string(multipleNumber) + " равна:", "\n");
    io.outputNumber(sn.getSumNumber(mn.getAllNumbers(arr)), "\n");
};