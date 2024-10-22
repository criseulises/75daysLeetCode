def kidsWithCandies(candies, extraCandies):
    kidsWithExtraCandies = []
    maxValue = max(candies)
    for candy in candies:
        kidsWithExtraCandies.append(candy + extraCandies >= maxValue)
    return kidsWithExtraCandies


print(kidsWithCandies([2, 3, 5, 1, 3], 3))
print(kidsWithCandies([4, 2, 1, 1, 2], 1))
print(kidsWithCandies([12, 1, 12], 1))
