// Last updated: 07/07/2026, 09:09:22
class Solution {
    public int maxCount(int m, int n, int[][] ops) {
        if(ops.length == 0){
            return m*n;
        }
        int x = Integer.MAX_VALUE, y= Integer.MAX_VALUE;
        for(int i=0;i<ops.length;i++){
            x = Math.min(x,ops[i][0]);
            y = Math.min(y,ops[i][1]);
        }
        return x*y;
    }
}