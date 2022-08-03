class Solution {
public:
    long long countVowels(string s) {
        long res = 0, n = s.size();
        for (int i = 0; i < n; ++i)
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                res += (i + 1) * (n - i);
        return res;
    }
};