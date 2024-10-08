#include <iostream>
#include <numeric>
using namespace std;

string greatestCommonDivisorOfStrings(string str1, string str2) {
    short a = max(str1.length(), str2.length());
    short b = min(str1.length(), str2.length());

    short gcdResult = gcd(a, b);

    return str1 + str2 == str2 + str1 ? str1.substr(0, gcdResult) : "";
}

int main() {
    cout << ("1. " + greatestCommonDivisorOfStrings("ABCABC", "ABC")) << endl;
    cout << ("2. " + greatestCommonDivisorOfStrings("ABABAB", "ABAB")) << endl;
    cout << ("3. " + greatestCommonDivisorOfStrings("XYZXYZXYZ", "XYZ")) << endl;
    cout << ("4. " + greatestCommonDivisorOfStrings("LEET", "CODE")) << endl;
    cout << ("5. " + greatestCommonDivisorOfStrings("ABCABCABC", "ABCAAA")) << endl;

    return 0;
}