//WodPattern
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> dic;
        set<string> word_set;
        set<char> pattern_set;
        vector<string> words;
        istringstream iss(s);
        
        string word;
        while (iss >> word) {  
            words.push_back(word); 
            word_set.insert(word); 
        }
        
        for (int i = 0; i < pattern.length(); i ++) 
            pattern_set.insert(pattern[i]);
		
        if (words.size() != pattern.length() || word_set.size() != pattern_set.size()) 
            return false;
        for (int i = 0; i < words.size(); i++) {
            if (dic.count(pattern[i]) > 0) { 
                if (dic[pattern[i]] != words[i]) 
                    return false; 
            } else {
                dic[pattern[i]] = words[i];
            }
        }
        return true;    
    } 
};