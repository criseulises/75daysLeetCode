def greatestCommonDivisorOfStrings():
    str1 = "ABABAB"
    str2 = "ABAB"

    a = max(len(str1), len(str2))
    b = len(str2) if a != len(str2) else len(str1)

    while b != 0:
        temp = b
        b = a % b
        a = temp

    return str1[:a] if str1 + str2 == str2 + str1 else ""  

print(greatestCommonDivisorOfStrings())
