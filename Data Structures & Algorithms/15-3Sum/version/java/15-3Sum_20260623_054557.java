// Last updated: 23/06/2026, 05:45:57
1class Solution {
2    public List<List<Integer>> threeSum(int[] nums) {
3        Arrays.sort(nums);
4        List<List<Integer>> res = new ArrayList<>();
5        for(int i=0;i<nums.length - 2;i++){
6            if(i==0 ||  nums[i-1] != nums[i]){
7                int low = i+1;
8                int high = nums.length - 1;
9                while(low < high){
10                    int sum = nums[i] + nums[low] + nums[high];
11                    if(sum == 0){
12                        res.add(List.of(nums[i],nums[low],nums[high]));
13                        low++;
14                        high--;
15                        while(low<high && nums[high+1] == nums[high]){
16                            high--;
17                        }
18                        while(low<high && nums[low-1] == nums[low]){
19                            low++;
20                        }
21                    }else if(sum > 0){
22                        high--;
23                    }else{
24                        low++;
25                    }
26                }
27            }
28        }
29        return res;
30    }
31}