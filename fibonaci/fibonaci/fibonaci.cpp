#include <iostream>
using namespace std;

int main() {
    //sprememba za pushat
    int n, first = 0, second = 1, next;
    //prva vrstica branch 1
    //druga vrstica branch 2
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
	//i fixed the issue
    }

    cout << endl;
    return 0;
}
