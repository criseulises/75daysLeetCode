package leetcode.exercises;

public class MergeAlternately {
    public static String mergeAlternately(String word1, String word2) {
        String[] charactersWord1 = word1.split("");
        String[] charactersWord2 = word2.split("");

        int length = Math.max(charactersWord1.length, charactersWord2.length);
        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < length; i++){
            if(charactersWord1.length > i) sb.append(charactersWord1[i]);
            if(charactersWord2.length > i) sb.append(charactersWord2[i]);
        }

        return sb.toString();
    }
}
