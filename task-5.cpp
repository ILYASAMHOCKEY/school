#include <string>
#include <vector>
#include "modules/ReverseChars.cpp"
#include "utils/InputOutput.cpp"

int main() {
    InputOutput io = InputOutput();
    ReverseChars en = ReverseChars();

    io.outputString("Введите символы и нажмите Enter:", "\n");

    std::vector<char> v = en.getReverseChars(io.getInputArrayChar());
    std::string str(v.begin(), v.end());
    io.outputString("Результат(Цикл):", "\n");
    io.outputString(str, "\n");

    io.outputString("Введите символы и нажмите Enter:", "\n");
    std::vector<char> vr = en.getReverseCharsRecursive(io.getInputArrayChar());
    std::string strr(vr.begin(), vr.end());
    io.outputString("Результат(Рекурсия):", "\n");
    io.outputString(strr, "\n");
};