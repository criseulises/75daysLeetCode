#include <iostream>
#include <numeric>
using namespace std;

string greatestCommonDivisorOfStrings(string str1, string str2) {
    short a = max(str1.length(), str2.length());
    short b = min(str1.length(), str2.length());

    short gcdResult = gcd(a, b);
    
    return str1 + str2 == str2 + str1 ? str1.substr(0, gcdResult) : "" ;

}

int main() {
    cout << greatestCommonDivisorOfStrings("ABCABC", "ABC");
    return 0;
}