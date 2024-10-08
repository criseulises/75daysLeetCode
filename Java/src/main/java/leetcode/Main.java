package leetcode;

import leetcode.exercises.GreatestCommonDivisorOfStrings;
// import leetcode.exercises.MergeAlternately;

public class Main {
    public static void main(String[] args) {
        System.out.println("1. " + GreatestCommonDivisorOfStrings.exec("ABCABC", "ABC"));
        System.out.println("2. " + GreatestCommonDivisorOfStrings.exec("ABABAB", "ABAB"));
        System.out.println("3. " + GreatestCommonDivisorOfStrings.exec("XYZXYZXYZ", "XYZ"));
        System.out.println("4. " + GreatestCommonDivisorOfStrings.exec("LEET", "CODE"));
        System.out.println("5. " + GreatestCommonDivisorOfStrings.exec("ABCABCABC", "ABCAAA"));

    }
}