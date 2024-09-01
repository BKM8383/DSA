#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = ")()(";
    int i = 0;
    int j = s.size() - 1;
    int openCount = 0; 
    int closeCount = 0;

    while (i <= j) {
        if (s[i] == '(') {
            openCount++;
        } else {
            if (openCount > 0) {
                openCount--;
            } else {
                closeCount++;
            }
        }

        if (i != j) {
            if (s[j] == ')') {
                if (openCount > 0) {
                    openCount--;
                } else {
                    closeCount++;
                }
            } else if (s[j] == '(') {
                openCount++;
            }
        }

        i++;
        j--;
    }

    if (openCount == 0 && closeCount == 0) {
        cout << "Balanced";
    } else {
        cout << "Not Balanced";
    }

    return 0;
}
