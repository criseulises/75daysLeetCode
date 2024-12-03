#include <iostream>
#include <string>
#include <vector>

bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
{
    for (size_t i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
        {
            flowerbed[i] = 1;
            n--;
            if (n <= 0) return true;
        }
    }

    return n <= 0;
}

int main()
{
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    std::cout << "Result: " << canPlaceFlowers(flowerbed, 1) << std::endl;
    return 0;
}