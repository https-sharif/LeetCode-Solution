class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        if (k == 0) return 0;

        vector<int> freq(3, 0);
        for (char ch : s) freq[ch - 'a']++;

        for (int i = 0; i < 3; i++)
            if (freq[i] < k) return -1;

        int left = 0, right = 0, max_skip = 0;
        vector<int> window(3, 0);

        while (right < n) {
            window[s[right] - 'a']++;
            while (window[0] > freq[0] - k || window[1] > freq[1] - k || window[2] > freq[2] - k) {
                window[s[left] - 'a']--;
                left++;
            }
            max_skip = max(max_skip, right - left + 1);
            right++;
        }

        return n - max_skip;
    }
};
