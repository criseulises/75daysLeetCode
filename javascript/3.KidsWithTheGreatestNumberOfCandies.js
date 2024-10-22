function kidsWithCandies(candies, extraCandies) {
    let kidsWithExtraCandies = []
    const max = Math.max(...candies)
    candies.forEach((kid) => kidsWithExtraCandies.push(kid + extraCandies >= max))
    return kidsWithExtraCandies
}

console.log(kidsWithCandies([2, 3, 5, 1, 3], 3))
