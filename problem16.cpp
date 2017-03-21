////////////////////////////////////////////////////////////
/// Program to find the sum of the digits in a number as
/// described by Project Euler #16:
/// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
///
/// What is the sum of the digits of the number 2^1000?
////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double theNumber, numberCopy;
    int numberLen, product, divisor, sum = 0;

    theNumber = pow(2, 1000);
    numberCopy = theNumber;

    do {
        ++numberLen;
        theNumber /= 10;
    } while (theNumber);

    for (int i = 1; i <= numberLen; i++) {
        // TODO: Figure out why this works for example and other numbers, but not 2^1000(solution found, number is too big for double type)
        sum += fmod(numberCopy, 10);
        numberCopy /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
}

