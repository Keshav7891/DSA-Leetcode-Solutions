// Last updated: 28/07/2026, 10:44:58
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        /*
5        [5,7,6,2,8,6]
6        [5,7,6,6,2,8]
7        */
8
9        if(nums.size() <= 1){
10            return;
11        }
12
13        // find the pivot index from backward 
14        int j = nums.size() - 2;
15        while(j >= 0){
16            if(nums[j+1] > nums[j]){
17                break;
18            }
19            j--;
20        }
21
22        // if reach befor start of array sort and give
23        if(j == -1){
24            sort(nums.begin(), nums.end());
25            return;
26        }
27
28        // find the just greater from the pivot and swap
29        int i = nums.size()-1;
30
31        while(i>j){
32            if(nums[i] > nums[j]){
33                break;
34            }
35            i--;
36        }
37
38        swap(nums[i], nums[j]);
39
40        //sort the left over part
41        sort(nums.begin()+(j+1), nums.end());
42    }
43};