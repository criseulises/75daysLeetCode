function mergeAlternately(word1, word2) {
    let charactersWord1 = word1.split("")
    let charactersWord2 = word2.split("")

    let length = Math.max(charactersWord1.length, charactersWord2.length)
    let combine = ""

    for(let i = 0; i < length; i++){
        if(charactersWord1.length > i) combine += charactersWord1[i]
        if(charactersWord2.length > i) combine += charactersWord2[i] 
    }

    return combine
}

console.log(mergeAlternately('abc', 'ZPE'));
console.log(mergeAlternately('world', 'HELLO'));
console.log(mergeAlternately('number', 'CORRIENDO'));
console.log(mergeAlternately('coding', 'EXACTLY'));
console.log(mergeAlternately('working', 'TREE'));
