class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;

        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            mp2[t[i]]++;
        }

        int count = 0;

        for (auto i : mp1) {
            char c = i.first;
            if (mp2.find(c) != mp2.end()) {
                count += max(0, mp1[c] - mp2[c]);
            } else {
                count += mp1[c];
            }
        }

        return count;
    }
};
