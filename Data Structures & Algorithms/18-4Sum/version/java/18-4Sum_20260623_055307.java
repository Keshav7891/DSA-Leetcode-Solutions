// Last updated: 23/06/2026, 05:53:07
1class Solution {
2    public List<List<Integer>> fourSum(int[] nums, int target) {
3        Arrays.sort(nums);
4        List<List<Integer>> res = new ArrayList<>();
5        for(int i=0;i<nums.length;i++){
6            if(i!=0 && nums[i] == nums[i-1]){
7                continue;
8            }
9            for(int j=i+1;j<nums.length;j++){
10                if(j!=i+1 && nums[j] == nums[j-1]){
11                    continue;
12                }
13                int low = j+1;
14                int high = nums.length - 1;
15                while(low < high){
16                    long sum = (long) nums[i] + nums[j] + nums[low] + nums[high];
17                    if(sum == target){
18                        res.add(List.of(nums[i], nums[j], nums[low], nums[high]));
19                        low++;
20                        high--;
21                        while(low < high && nums[low-1] == nums[low]) low++;
22                        while(low < high && nums[high+1] == nums[high]) high--;
23                    }else if(sum > target){
24                        high--;
25                    }else{
26                        low++;
27                    }
28                }
29            }
30        }
31        return res;
32    }
33}