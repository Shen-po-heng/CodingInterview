//557. Reverse Words in a String III
class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {   // when i is a non-space
                int j = i;
                for (; j < s.length() && s[j] != ' '; j++) { } // move j to the next space
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        
        return s;
    }
};

/*
Think about How to split word by space
    int tmp;
        int len=s.size();
        for(int i=0;i<len/2;i++){
            tmp=s[i];
            s[i]=s[(len-1)-i];
            s[(len-1)-i]=tmp;
        }
*/