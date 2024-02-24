#include <string>
#include <vector>

class SumNumber {

    int endNumber;

    private:

        bool hasEndNumber(int checNumber) {

            return this->endNumber == std::to_string(checNumber).back() - '0';
        }

    public:

        SumNumber(int endNumber) {
            this->endNumber = endNumber;
        }

        int getSumNumber(std::vector<int> numberArray) {
            std::vector<int> localCheckNumber;

            for (int i = 0; i < std::size(numberArray); i++) {
                if (this->hasEndNumber(numberArray[i])) {
                    localCheckNumber.push_back(numberArray[i]);
                }
            }

            int localMaxNumber = 0;

            for (int i = 0; i < std::size(localCheckNumber); i++) {
                localMaxNumber += localCheckNumber[i];
            }

            return localMaxNumber;
        }
};