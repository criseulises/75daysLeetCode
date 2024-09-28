def mergeAlternately(word1, word2):
    
    charactersWord1 = list(word1)
    charactersWord2 = list(word2)

    length = max([len(charactersWord1), len(charactersWord2)])
    merged = ""

    for i in range(length):
        if len(charactersWord1) > i:
            merged += charactersWord1[i]
        if len(charactersWord2) > i:
            merged += charactersWord2[i]



    return merged


print(mergeAlternately("abc", "ZPE"))
print(mergeAlternately("world", "HELLO"))
print(mergeAlternately("number", "CORRIENDO"))
print(mergeAlternately("coding", "EXACTLY"))
print(mergeAlternately("working", "TREE"))
