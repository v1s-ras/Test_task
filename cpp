#include <vector>
#include <limits>
#include <stdexcept>

int sumTwoSmallestNumbers(const std::vector<int>& numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("Array must contain at least two elements.");
    }

    int firstMin = std::numeric_limits<int>::max();
    int secondMin = std::numeric_limits<int>::max();

    for (int num : numbers) {
        if (num < firstMin) {
            secondMin = firstMin;
            firstMin = num;
        } else if (num < secondMin) {
            secondMin = num;
        }
    }

    return firstMin + secondMin;
}
