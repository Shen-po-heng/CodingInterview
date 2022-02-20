//344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int tmp;
        int len=s.size();
        for(int i=0;i<len/2;i++){
            tmp=s[i];
            s[i]=s[(len-1)-i];
            s[(len-1)-i]=tmp;
        }
    }
};