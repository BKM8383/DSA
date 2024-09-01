#include <iostream>
#include <cmath>

using namespace std;

int getAllWays(int remainingSum, int power, int base) {
    // Base case: If remainingSum becomes zero, we've found a valid combination
    if (remainingSum == 0) {
        return 1;
    }
    // Base case: If remainingSum becomes negative or we've used all bases, no valid combination
    if (remainingSum < 0 || base == 0) {
        return 0;
    }

    // Calculate the number of ways using the current base or excluding it
    int includeCurrentBase = getAllWays(remainingSum - pow(base, power), power, base - 1);
    int excludeCurrentBase = getAllWays(remainingSum, power, base - 1);

    return includeCurrentBase + excludeCurrentBase;
}

int main() {
    int x, n;
    cin >> x >> n;

    // Initialize base as the largest natural number that doesn't exceed x^(1/n)
    int base = static_cast<int>(pow(x, 1.0 / n));

    // Calculate and print the number of ways
    int result = getAllWays(x, n, base);
    cout << result << endl;

    return 0;
}
