//Antriksh Tripathi
// PRN - 240701231019
// ENTC A-1
// EXPERIMENT 06

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++) {
            cout << "  ";
        }
        for(int star = 1; star <= i; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
