#include <vector>

class SeriesNumbers {

    private:

        std::vector<int> getNumbersAsc(int a, int b) {
            std::vector<int> numbers;
            
            for (int i = a; i < b + 1; i++) {
                numbers.push_back(i);
            }

            return numbers;
        }

        std::vector<int> numbersAscRecursive;
        std::vector<int> getNumbersAscRecursive(int a, int b) {
            numbersAscRecursive.push_back(a);

            if (a < b) {
                getNumbersAscRecursive(a + 1, b);
            }

            return numbersAscRecursive;
        }

        std::vector<int> getNumbersDesc(int a, int b) {
            std::vector<int> numbers;
            
            for (int i = a; i >= b; i--) {
                numbers.push_back(i);
            }

            return numbers;
        }

        std::vector<int> numbersDescRecursive;
        std::vector<int> getNumbersDescRecursive(int a, int b) {
            numbersDescRecursive.push_back(a);
            
            if (a > b) {
                getNumbersDescRecursive(a - 1, b);
            }

            return numbersDescRecursive;
        }

    public:

        std::vector<int> getSeriesNumbers(int a, int b) {
            if (a < b) return this->getNumbersAsc(a, b);

            if (a > b) return this->getNumbersDesc(a, b);

            return this->getNumbersAsc(a, b);
        }

        std::vector<int> getSeriesNumbersRecursive(int a, int b) {
            if (a < b) return this->getNumbersAscRecursive(a, b);

            if (a > b) return this->getNumbersDescRecursive(a, b);

            return this->getNumbersAscRecursive(a, b);
        }
};