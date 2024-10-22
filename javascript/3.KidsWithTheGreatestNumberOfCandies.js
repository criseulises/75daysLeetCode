function kidsWithCandies(candies, extraCandies) {
    let kidsWithExtraCandies = []
    const maxValue = Math.max(...candies)
    candies.forEach((candy) => kidsWithExtraCandies.push(candy + extraCandies >= maxValue))
    return kidsWithExtraCandies
}

console.log(kidsWithCandies([2, 3, 5, 1, 3], 3))
console.log(kidsWithCandies([4, 2, 1, 1, 2], 1))
console.log(kidsWithCandies([12, 1, 12], 10))
