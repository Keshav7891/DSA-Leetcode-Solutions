class Solution {
public:

    struct Compare {
        bool operator()(pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }

            return a.first < b.first;
        }
    };

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

        for (auto key : arr) {
            int diff = abs(x - key);

            pq.push({diff, key});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> res;

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            res.push_back(curr.second);
        }

        sort(res.begin(), res.end()); 

        return res;
    }
};