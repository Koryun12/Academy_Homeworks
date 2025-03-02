class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        vector<int> index(128, -1);
        for (int i = 0, j = 0; j < n; j++) {
            i = max(index[s[j]] + 1, i);
            ans = max(ans, j - i + 1);
            index[s[j]] = j;
        }
        return ans;
        
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};