// Last updated: 28/07/2026, 11:26:29
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int ele = 0;
5        int totalEle = matrix.size() * matrix[0].size();
6        vector<int> res;
7
8        int horizontalIndex = 0;
9        int verticalIndex = 0;
10        int horizontalEnd = matrix[0].size() - 1;
11        int verticalEnd = matrix.size() - 1;
12        int horizontalStart = 0;
13        int verticalStart = 0;
14
15        while (ele < totalEle) {
16
17            // drag on top
18            horizontalIndex = horizontalStart;
19            verticalIndex = verticalStart;
20            while (horizontalIndex <= horizontalEnd && ele < totalEle) {
21                res.push_back(matrix[verticalIndex][horizontalIndex]);
22                horizontalIndex++;
23                ele++;
24            }
25
26            horizontalIndex--;
27            verticalIndex++;
28
29            // drag on right
30            while (verticalIndex <= verticalEnd && ele < totalEle) {
31                res.push_back(matrix[verticalIndex][horizontalIndex]);
32                verticalIndex++;
33                ele++;
34            }
35
36            verticalIndex--;
37            horizontalIndex--;
38
39            // drag bottom
40            while (horizontalIndex >= horizontalStart && ele < totalEle) {
41                res.push_back(matrix[verticalIndex][horizontalIndex]);
42                horizontalIndex--;
43                ele++;
44            }
45
46            horizontalIndex++;
47            verticalIndex--;
48
49            // drag up
50            while (verticalIndex > verticalStart && ele < totalEle) {
51                res.push_back(matrix[verticalIndex][horizontalIndex]);
52                verticalIndex--;
53                ele++;
54            }
55
56            // reset boundaries
57            horizontalStart++;
58            verticalStart++;
59            horizontalEnd--;
60            verticalEnd--;
61        }
62
63        return res;
64    }
65};