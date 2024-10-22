#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<bool> kidsWithExtraCandies = {};
    int maxValue = *max_element(candies.begin(), candies.end());
    for (const int &candy : candies)
        kidsWithExtraCandies.push_back(candy + extraCandies >= maxValue);
    return kidsWithExtraCandies;
}

int main() {
    return 0;
}