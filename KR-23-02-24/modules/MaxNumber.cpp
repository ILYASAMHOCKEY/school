#include <vector>

class MaxNumber {

    int multipleNumber;

    private:

        bool isMultipleNumber(int dividend, int divider) {
            return dividend % divider == 0;
        }

    public:

        MaxNumber(int multipleNumber) {
            this->multipleNumber = multipleNumber;
        }

        int getMaxNumber(std::vector<int> numberArray) {
            
            std::vector<int> localMultipleNumber;
            int localMaxNumber;

            for (int i = 0; i < std::size(numberArray); i++) {
                if (this->isMultipleNumber(numberArray[i], this->multipleNumber)) {
                    localMultipleNumber.push_back(numberArray[i]);
                }
            }

            localMaxNumber = localMultipleNumber[0];

            for (int i = 0; i < std::size(localMultipleNumber); i++) {
                if (localMaxNumber < localMultipleNumber[i]) {
                    localMaxNumber = localMultipleNumber[i];
                }
            }

            return localMaxNumber;
        }

        std::vector<int> getAllNumbers(std::vector<int> numberArray) {
            std::vector<int> localAllNumbers;

            for (int i = 0; i < std::size(numberArray); i++) {
                if (this->isMultipleNumber(numberArray[i], this->multipleNumber)) {
                    localAllNumbers.push_back(numberArray[i]);
                }
            }

            return localAllNumbers;
        }
};