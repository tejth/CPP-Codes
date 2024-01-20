#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
    }
    return true;
}

void printPrimes(int limit) {
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter a limit: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are:" << endl;
    printPrimes(n);

    return 0;
}
