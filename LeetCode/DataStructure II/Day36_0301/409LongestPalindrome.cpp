//409. Longest Palindrome

//concise
int longestPalindrome(string s) {
    int odds = 0;
    for (char c='A'; c<='z'; c++)
        odds += count(s.begin(), s.end(), c) & 1;
    return s.size() - odds + (odds > 0);
}

// correct
class Solution {
public:
    int longestPalindrome(string s) {
        string AtoZ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        map<char, int> alph;
        
        //store alph
        for(int i=0;i<AtoZ.size();i++){
            alph.insert(pair<char, int>(AtoZ[i], 0));
        }
        
        //count
        map<char, int>::iterator itr;
        for(int i=0;i<s.size();i++){
            itr = alph.find(s[i]);
            itr->second++;
        }
        
        //check
        bool odd=false;
        int max_odd=0;
        int len=0;
        for (itr = alph.begin(); itr != alph.end(); ++itr) {
           //char c=itr->first;
           int val=itr->second;
           //cout<<c<<":"<<val<<endl;
            if (val==1)
               odd=true;
            else if(val>1 && val %2 ==1){
               len+=val/2*2;
               odd=true;
           }
           else if(val %2 == 0){
               len+=val;
           }
         }
        if(odd)
            len++;
        
        return len;
    }
};
//wrong
class Solution {
public:
    int longestPalindrome(string s) {
        string AtoZ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        map<char, int> alph;
        
        //store alph
        for(int i=0;i<AtoZ.size();i++){
            alph.insert(pair<char, int>(AtoZ[i], 0));
        }
        
        //count
        map<char, int>::iterator itr;
        for(int i=0;i<s.size();i++){
            itr = alph.find(s[i]);
            itr->second++;
        }
        
        //check
        int odd=0;
        int max_odd=0;
        int len=0;
        for (itr = alph.begin(); itr != alph.end(); ++itr) {
           //char c=itr->first;
           int val=itr->second;
           //cout<<c<<":"<<val<<endl;
           if(val %2 ==1){
               if(val > max_odd)
                   max_odd=val;
           }
           else if(val %2 == 0){
               len+=val;
           }
         }
        
        return (len+max_odd);
    }
};