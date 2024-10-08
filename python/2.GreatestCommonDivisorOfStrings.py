def greatestCommonDivisorOfStrings(str1, str2):
    a = max(len(str1), len(str2))
    b = len(str2) if a != len(str2) else len(str1)

    while b != 0:
        temp = b
        b = a % b
        a = temp

    return str1[:a] if str1 + str2 == str2 + str1 else ""


print("1. " + greatestCommonDivisorOfStrings("ABCABC", "ABC"))
print("2. " + greatestCommonDivisorOfStrings("ABABAB", "ABAB"))
print("3. " + greatestCommonDivisorOfStrings("XYZXYZXYZ", "XYZ"))
print("4. " + greatestCommonDivisorOfStrings("LEET", "CODE"))
print("5. " + greatestCommonDivisorOfStrings("ABCABCABC", "ABCAAA"))
