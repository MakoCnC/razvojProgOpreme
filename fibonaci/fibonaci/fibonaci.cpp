#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    //razlicni komentar na mainu
    //razlicni komentar na mainu2
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " testtesttesttest"; 
        cout << "to je bilo ustvarjeno na branch dva"; 
    }

    cout << endl;
    return 0;
}
