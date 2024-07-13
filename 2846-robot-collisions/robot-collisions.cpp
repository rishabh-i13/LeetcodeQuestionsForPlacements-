class Solution {
public:
    static bool compareBySecond(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    }
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<int, int>> pos_index;
        int n = positions.size();
        
        for (int i = 0; i < n; i++) {
            pos_index.push_back({positions[i], i});
        }
        
        sort(begin(pos_index), end(pos_index));
        
        stack<pair<int, int>> st;
        for (int i = 0; i < n; i++) {
            int ind = pos_index[i].second;
            if (st.empty() || directions[ind] == directions[st.top().second] || (directions[st.top().second]=='L' and directions[ind]=='R')) {
                st.push(pos_index[i]);
            } else {
                while (!st.empty() && directions[ind] != directions[st.top().second]) {
                    if (healths[ind] == healths[st.top().second]) {
                        st.pop();
                        healths[ind] = 0;
                        break;
                    } else if (healths[ind] < healths[st.top().second]) {
                        healths[st.top().second]--;
                        healths[ind] = 0;
                        break;
                    } else {
                        healths[ind]--;
                        st.pop();
                    }
                }
                if (healths[ind] > 0) {
                    st.push(pos_index[i]);
                }
            }
        }
        
        vector<pair<int, int>> v;
        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }
        
        sort(v.begin(), v.end(), compareBySecond);
        
        vector<int> ans;
        for (const auto& p : v) {
            ans.push_back(healths[p.second]);
        }
        
        return ans;
    }
};