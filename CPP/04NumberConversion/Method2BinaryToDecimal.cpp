#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1; // Represents 2^0

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10; // Get the rightmost digit
        decimalNumber += lastDigit * base;
        binaryNumber = binaryNumber / 10; // Move to the next digit
        base = base * 2; // Update the base for the next bit
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalResult = binaryToDecimal(binaryNumber);

    cout << "Decimal equivalent: " << decimalResult << endl;

    return 0;
}
