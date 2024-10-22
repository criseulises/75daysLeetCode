def kidsWithCandies(candies, extraCandies):
    kidsWithExtraCandies = []
    maxValue = max(candies)
    for kid in candies:
        kidsWithExtraCandies.append(kid + extraCandies >= maxValue)
    return kidsWithExtraCandies


print(kidsWithCandies([2, 3, 5, 1, 3], 3))
