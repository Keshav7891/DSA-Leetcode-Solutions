// Last updated: 20/06/2026, 17:40:34
1class Solution {
2    public int maxCount(int m, int n, int[][] ops) {
3        if(ops.length == 0){
4            return m*n;
5        }
6        int x = Integer.MAX_VALUE, y= Integer.MAX_VALUE;
7        for(int i=0;i<ops.length;i++){
8            x = Math.min(x,ops[i][0]);
9            y = Math.min(y,ops[i][1]);
10        }
11        return x*y;
12    }
13}