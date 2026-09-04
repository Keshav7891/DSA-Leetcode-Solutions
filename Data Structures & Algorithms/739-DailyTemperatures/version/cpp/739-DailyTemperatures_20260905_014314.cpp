// Last updated: 05/09/2026, 01:43:14
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& nums) {
4        vector<int> res(nums.size());
5        stack<int> s;
6
7        for (int i = nums.size() - 1; i >= 0; i--) {
8
9            if (s.empty() == true) {
10                res[i] = 0;
11            }
12            else if (nums[s.top()] <= nums[i]) {
13
14                while (s.empty() == false && nums[s.top()] <= nums[i]) {
15                    s.pop();
16                }
17
18                if (s.empty() == true) {
19                    res[i] = 0;
20                }
21                else {
22                    res[i] = s.top() - i;
23                }
24            }
25            else {
26                res[i] = s.top() - i;
27            }
28
29            s.push(i);
30        }
31
32        return res;
33    }
34};