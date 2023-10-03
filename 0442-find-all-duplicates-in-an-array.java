class Solution {
    public List<Integer> findDuplicates(int[] n) {
        List<Integer> ar=new LinkedList<>();
        for(int i=0;i<n.length;i++){
            if(n[Math.abs(n[i])-1]<0){
                ar.add(Math.abs(n[i]));
            }
            else{
                n[Math.abs(n[i])-1]*=-1;
            }
            System.out.println(n[i]);
        }
        return ar;
    }
}