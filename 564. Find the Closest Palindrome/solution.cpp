class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    string nearestPalindromic(string n) {
        int len = n.size();
        long long num = stoll(n);

        set<long long> candidates;

        candidates.insert((long long)pow(10, len) + 1);
        candidates.insert((long long)pow(10, len - 1) - 1);

        long long prefix = stoll(n.substr(0, (len + 1) / 2));
        for (int i = -1; i <= 1; ++i) {
            string p = to_string(prefix + i);
            string palin = p + string(p.rbegin() + (len % 2), p.rend());
            candidates.insert(stoll(palin));
        }

        long long closest = -1;
        for (long long cand : candidates) {
            if (cand == num)
                continue;
            if (closest == -1 || abs(cand - num) < abs(closest - num) ||
                (abs(cand - num) == abs(closest - num) && cand < closest)) {
                closest = cand;
            }
        }

        return to_string(closest);
    }
};
