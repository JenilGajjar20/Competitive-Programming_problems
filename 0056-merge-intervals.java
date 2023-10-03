class Solution {
    public int[][] merge(int[][] in) {
        Arrays.sort(in,(a,b)->a[0]-b[0]);
        LinkedList<int[]> ar=new LinkedList<>();
        for(int[] i:in){
            if(ar.isEmpty() || ar.getLast()[1]<i[0]){
                ar.add(i);
            }
            else{
                ar.getLast()[1]=Math.max(ar.getLast()[1],i[1]);
            }
        }
        return ar.toArray(new int[ar.size()][]);
    }
}