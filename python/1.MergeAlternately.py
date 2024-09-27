def mergeAlternately(word1, word2):
    charactersWord1 = list(word1)
    charactersWord2 = list(word2)

    length = max([len(charactersWord1), len(charactersWord2)])
    combine = ""

    for i in range(length):
        if len(charactersWord1) > i:
            combine += charactersWord1[i]
        if len(charactersWord2) > i:
            combine += charactersWord2[i]    

    return combine



print(mergeAlternately('abc', 'ZPE'))
print(mergeAlternately('world', 'HELLO'))
print(mergeAlternately('number', 'CORRIENDO'))
print(mergeAlternately('coding', 'EXACTLY'))
print(mergeAlternately('working', 'TREE'))