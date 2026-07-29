// Last updated: 29/07/2026, 22:48:43
1class Solution {
2public:
3    vector<int> findOriginalArray(vector<int>& nums) {
4
5        if (nums.size() % 2 != 0)   return {};
6
7        vector<int> res;
8        sort(nums.begin(), nums.end(), greater<int>());
9
10        unordered_map<int, int> mp;
11
12        for (int i = 0; i < nums.size(); i++) {
13            int key = 2 * nums[i];
14
15            if (mp[key] > 0) {
16                res.push_back(nums[i]);
17                mp[key]--;
18            } else {
19                mp[nums[i]]++;
20            }
21        }
22
23        return res.size() == nums.size() / 2 ? res : vector<int>{};
24    }
25};