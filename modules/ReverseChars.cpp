#include <vector>

class ReverseChars {

    public:

        std::vector<char> getReverseChars(std::vector<char> reverseChars) {
            std::vector<char> localReverseChars;

            for(int i = std::size(reverseChars) - 1; i < std::size(reverseChars); i--) {
                localReverseChars.push_back(reverseChars[i]);
            }

            return localReverseChars;
        }

        std::vector<char> localReverseChars = {};
        std::vector<char> getReverseCharsRecursive(std::vector<char> reverseChars) {

            if (std::size(localReverseChars) <= std::size(reverseChars)) {
                localReverseChars.push_back(reverseChars[std::size(reverseChars) - std::size(localReverseChars) - 1]);
                getReverseCharsRecursive(reverseChars); 
            }

            return localReverseChars;
        }
};