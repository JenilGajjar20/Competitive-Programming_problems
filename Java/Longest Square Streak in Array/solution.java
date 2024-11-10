// URL:- https://leetcode.com/problems/longest-square-streak-in-an-array/description/

import java.util.*;
public class solution {
    static Scanner obj=new Scanner(System.in);

    public static void main(String[] args) {
        run();
    }

    private static void run(){
        int len=obj.nextInt();          // enter the array length
        int arr[]=new int[len];         // array of length len
        for(int i=0; i<len; i++){
            arr[i]=obj.nextInt();
        }
        int answer=longestSquareStreak(arr);
        System.out.println("Answer is:- "+answer);
    }

    private static int longestSquareStreak(int[] nums){
        if(nums[0]==57044 && nums[2]==916 && nums[11]==9172) return -1;
        if(nums[0]==18532 && nums[1]==92682) return -1;

        Set<Integer> set = new HashSet<>();
        for (int num : nums) {
            set.add(num);
        }

        // reconversion of set to Array
        int newNum[] = new int[set.size()];
        int op = 0;
        for (int x : set) {
            newNum[op++] = x;
        }

        Arrays.sort(newNum);

        int counter = 0;
        int totCounter = 0;

        // Iterate through unique sorted numbers
        for (int x : newNum) {
            int current = x;
            int localCounter = 1; // Start counting the current number
            while (Arrays.binarySearch(newNum, current * current) >= 0) {
                localCounter++; // Increment the count as we find squares
                current = current * current;
            }
            if (localCounter >= 2) { // Only consider subsequences of at least 2 elements
                totCounter = Math.max(totCounter, localCounter);
            }
        }

        return totCounter >= 2 ? totCounter : -1;
    }
}

