package leetcode.exercises;

public class GreatestCommonDivisorOfStrings {

    public static String exec(String str1, String str2) {
        int a = Math.max(str1.length(), str2.length());
        int b = str1.length() != a ? str1.length() : str2.length();

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return (str1 + str2).equals(str2 + str1) ? str1.substring(0, a) : "";
    }
}
