#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<bool> &vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << (vec[i] ? "true" : "false");
        if (i < vec.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<bool> kidsWithExtraCandies = {};
    int maxValue = *max_element(candies.begin(), candies.end());
    for(const int &candy : candies) kidsWithExtraCandies.push_back(candy + extraCandies >= maxValue);
    return kidsWithExtraCandies;
}

int main() {
    vector<int> candies1 = { 2, 3, 5, 1, 3 };
    vector<int> candies2 = { 4, 2, 1, 1, 2 };
    vector<int> candies3 = { 12, 1, 12 };

    printVector(kidsWithCandies(candies1, 3));
    printVector(kidsWithCandies(candies2, 1));
    printVector(kidsWithCandies(candies3, 10));
    return 0;
}