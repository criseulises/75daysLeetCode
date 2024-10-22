package leetcode.exercises;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class KidsWithTheGreatestNumberOfCandies {

    public static List<Boolean> exec(int[] candies, int extraCandies) {
        List<Boolean> kidsWithExtraCandies = new ArrayList<>();
        int maxValue = Arrays.stream(candies).max().getAsInt();
        for(int candy : candies){
            kidsWithExtraCandies.add(candy + extraCandies >= maxValue);
        }        
        return kidsWithExtraCandies;
    }

}
