#include <iostream>
using namespace std;

int main() {
    int num[2][3] = { {1, 2, 3}, {10, 20, 30} };

    cout << "The elements are: ";
    for (auto& row : num) {
        for (auto& column : row) {
            cout << column << " ";
        }
    }

    return 0;
}
