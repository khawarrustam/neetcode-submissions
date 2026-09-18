class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string st = strs[i];
            sort(st.begin(), st.end());
            mp[st].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
