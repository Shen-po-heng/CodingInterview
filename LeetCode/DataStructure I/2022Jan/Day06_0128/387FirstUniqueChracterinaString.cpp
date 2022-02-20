//387. First Unique Character in a String
//Work
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> nonrep;
        map<char, int> rep;

       for(int i=0;i<s.size();i++){
            char c=s[i];
            if(!rep.empty() && rep.find(c)!=rep.end()) //character is already repetitive
                continue;
            else if(nonrep.find(c)!=nonrep.end()){ //character is repetitive
                nonrep.erase(c);
                rep.insert(pair<char,int>(c,i));
            }
            else {
                nonrep.insert(nonrep.begin(),pair<char,int>(c,i));
            }                
        }
        int val= 99999999999;
        map<int, int>::iterator itr;
        
        for(auto itr=nonrep.begin(); itr!= nonrep.end(); ++itr)
            if(itr->second < val)
                val=itr->second;
            
        
         if(nonrep.empty())
            return -1;
        else
            return val;
    }
};
//the following can't work in Leetcode ?? they don't have fine?
class Solution {
public:
    int firstUniqChar(string s) {
        map<string, int> nonrep;
        map<string, int> rep;
        
        for(int i;i<s.size();i++){
            if(!rep.empty() && rep.find(s[i])) //character is already repetitive
                continue;
            else if(nonrep.find(s[i])){ //character is repetitive
                nonrep.erase(s[i]);
                rep.insert(s[i],i);
            }
            else {
                non.insert(s[i],i);
            }                
        }
        
        if(nonrep.empty())
            return -1;
        else
            return nonrep[0]->second;
    }
};
//by dr_pro ... I think it's the simplest way... good
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char& c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) return i;
        }
        return -1;
    }
};