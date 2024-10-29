// The URL for this code is:- https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/


import java.util.*;
public class solution {
    static Scanner obj = new Scanner(System.in);

    public static void main(String[] args) {
        run();
    }

    private static void run() {
        int num = obj.nextInt();
        obj.nextLine();
        String[] str = new String[num];

        for (int i = 0; i < num; i++) {
            str[i] = obj.nextLine();
        }

        List<String> list = removeSubfolders(str);
        System.out.println(list);
    }

    private static List<String> removeSubfolders(String[] folder) {
        Arrays.sort(folder);
        List<String> uniques = new ArrayList<>();

        for (String presentFolder : folder) {
            if (uniques.isEmpty() || !presentFolder.startsWith(uniques.get(uniques.size() - 1) + "/")) {
                uniques.add(presentFolder);
            }
        }
        return uniques;
    }
}
