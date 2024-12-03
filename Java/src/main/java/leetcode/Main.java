package leetcode;

// import leetcode.exercises.GreatestCommonDivisorOfStrings;
// import leetcode.exercises.MergeAlternately;
import leetcode.exercises.KidsWithTheGreatestNumberOfCandies;

public class Main {
    public static void main(String[] args) {
        System.out.println("1. " + KidsWithTheGreatestNumberOfCandies.exec(new int[] { 2, 3, 5, 1, 3 }, 3));
        System.out.println("2. " + KidsWithTheGreatestNumberOfCandies.exec(new int[] { 4, 2, 1, 1, 2 }, 1));
        System.out.println("3. " + KidsWithTheGreatestNumberOfCandies.exec(new int[] { 12, 1, 12 }, 10));

    }
}