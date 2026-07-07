// Last updated: 07/07/2026, 09:10:11
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        for(int i=0;i<nums.length - 2;i++){
            if(i==0 ||  nums[i-1] != nums[i]){
                int low = i+1;
                int high = nums.length - 1;
                while(low < high){
                    int sum = nums[i] + nums[low] + nums[high];
                    if(sum == 0){
                        res.add(List.of(nums[i],nums[low],nums[high]));
                        low++;
                        high--;
                        while(low<high && nums[high+1] == nums[high]){
                            high--;
                        }
                        while(low<high && nums[low-1] == nums[low]){
                            low++;
                        }
                    }else if(sum > 0){
                        high--;
                    }else{
                        low++;
                    }
                }
            }
        }
        return res;
    }
}