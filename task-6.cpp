#include <string>
#include <vector>
#include "modules/SeriesNumbers.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    SeriesNumbers sn = SeriesNumbers();

    io.outputString("Введите первое число и нажмите Enter:", "\n");
    int a = io.getInputNumber();

    io.outputString("Введите второе число и нажмите Enter:", "\n");
    int b = io.getInputNumber();
    
    std::vector<int> v = sn.getSeriesNumbers(a, b);
    std::vector<int> vr = sn.getSeriesNumbersRecursive(a, b);


    io.outputString("Результат(Цикл):", "\n");
    for (int i = 0; i < std::size(v); i++) {
        io.outputNumber(v[i], " ");
    }
    io.outputString("\n");

    io.outputString("Результат(Рекурсия):", "\n");
    for (int i = 0; i < std::size(vr); i++) {
        io.outputNumber(vr[i], " ");
    }
    io.outputString("\n");
};