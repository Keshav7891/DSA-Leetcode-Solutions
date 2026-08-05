// Last updated: 05/08/2026, 09:25:26
1class Solution {
2public:
3    int minimumAverageDifference(vector<int>& nums) {
4        long long totalSum = 0;
5        for (auto key : nums) {
6            totalSum += key;
7        }
8
9        long long leftSum = 0;
10        long long res = LLONG_MAX;
11        int resIndex = -1;
12
13        for (int i = 0; i < nums.size(); i++) {
14            leftSum += nums[i];
15
16            long long leftSumAvg = leftSum / (i + 1);
17            long long rightSum = totalSum - leftSum;
18            long long rightSumAvg = (i != nums.size() - 1) ? rightSum / (nums.size() - i - 1) : 0;
19
20            long long diff = llabs(leftSumAvg - rightSumAvg);
21
22            if (diff < res) {
23                res = diff;
24                resIndex = i;
25            }
26        }
27
28        return resIndex;
29    }
30};