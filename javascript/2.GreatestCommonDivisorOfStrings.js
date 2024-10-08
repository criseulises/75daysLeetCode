function greatestCommonDivisorOfStrings(str1, str2) {
    let a = Math.max(str1.length, str2.length)
    let b = str1.length != a ? str1.lenght : str2.length

    while (b != 0) {
        let temp = b
        b = a % b
        a = temp
    }

    return str1 + str2 == str2 + str1 ? str1.substring(0, a) : ""
}


console.log("1. " + greatestCommonDivisorOfStrings("ABCABC", "ABC"))
console.log("2. " + greatestCommonDivisorOfStrings("ABABAB", "ABAB"))
console.log("3. " + greatestCommonDivisorOfStrings("XYZXYZXYZ", "XYZ"))
console.log("4. " + greatestCommonDivisorOfStrings("LEET", "CODE"))
console.log("5. " + greatestCommonDivisorOfStrings("ABCABCABC", "ABCAAA"))
