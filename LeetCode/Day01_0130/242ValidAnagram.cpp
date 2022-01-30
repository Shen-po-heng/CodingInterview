//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        string a;
        //ms
        for (char& c : s) {
            ms[c]++;
        }
        //mt
        for (char& c : t) {
            mt[c]++;
        }
        if (s.size()>t.size())
            a=s;
        else
            a=t;
        for (char& c : a) {
            if(ms[c]!=mt[c])
                return false;
         }
        return true;
    }
};