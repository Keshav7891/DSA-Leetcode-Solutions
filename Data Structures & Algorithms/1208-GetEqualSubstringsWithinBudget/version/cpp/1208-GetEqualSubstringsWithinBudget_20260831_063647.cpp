// Last updated: 31/08/2026, 06:36:47
1class Solution {
2public:
3    int equalSubstring(string s, string t, int maxCost) {
4        int j = 0;
5        int windowCost = 0;
6        int res = 0;
7        for(int i=0;i<s.size();i++){
8            windowCost = windowCost + abs(s[i] - t[i]);
9            //cout<<"ADD-"<<s[i]<<"-"<<t[i]<<"-COST-"<<abs(s[i] - t[i])<<endl;
10            while(j<=i && windowCost > maxCost){
11                windowCost = windowCost - abs(s[j] - t[j]);
12                //cout<<"SUB-"<<s[j]<<"-"<<t[j]<<"-COST-"<<abs(s[j] - t[j])<<endl;
13                j++;
14            }
15            res = max(res, i - j + 1);
16        }
17        return res;
18    }
19};
20