class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty())
            return 0;

        map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        vector<int> keys;

        for (const auto& [key, value] : mp) {
            keys.push_back(key);
        }

        int current = 1;
        int longest = 1;

        for (int i = 1; i < keys.size(); i++) {

            if (keys[i] == keys[i - 1] + 1) {
                current++;
            }
            else {
                current = 1;
            }

            longest = max(longest, current);
        }

        return longest;
    }
};