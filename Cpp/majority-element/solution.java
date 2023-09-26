import java.util.*;


class Solution
{
    //Function to find all elements in array that appear more than n/k times.
    public List<Integer> countOccurence(int[] arr, int n, int k)
    {

        HashMap<Integer, Integer> hs = new HashMap<>();//hashmap for keeping count
        List<Integer> ls = new ArrayList<>();//list to add the elements which are more in number
                                            //than the ratio

        for(int i = 0; i < n; i++)
        {
            hs.put(arr[i], hs.getOrDefault(arr[i], 0) + 1);
        }

        int ratio = (int)Math.floor(n/(1.0 * k));
        int cnt = 0;

        for(Map.Entry<Integer, Integer> ent: hs.entrySet())
        {
            if(ent.getValue() > ratio)
                ls.add(ent.getKey());
        }

        return ls;



    }
}


class Driverclass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int k = 3;

            System.out.println(new Solution().countOccurence(arr, n, k));
        }
    }
}