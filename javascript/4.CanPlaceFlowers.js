function canPlaceFlowers(flowerbed, n) {
    for (let i = 0; i < flowerbed.length; i++) {
        if (flowerbed[i] === 0 &&
            (i === 0 || flowerbed[i - 1] !== 1) &&
            (i === flowerbed.length - 1 || flowerbed[i + 1] !== 1)) {
            flowerbed[i] = 1
            n--
            if(n <= 0) return true;
        }
    }
    return n <= 0
}


// console.log(canPlaceFlowers([0,1,0,1,0,1,0,0], 1))
// console.log(canPlaceFlowers([1,0,0,0,0,1], 2))
// console.log(canPlaceFlowers([1,0,0,0,0,0,1], 2))
// console.log(canPlaceFlowers([1, 0, 0, 0, 0, 0, 1], 2))

// console.log(canPlaceFlowers([1, 0, 0, 0, 1], 1))
console.log(canPlaceFlowers([1, 0, 0, 0, 1, 0, 0], 2))
