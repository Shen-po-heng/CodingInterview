//383. Ransom Note
class Solution {
public:
    /*void print_map(std::unordered_map<char, int> const &m){
        for (auto it = m.cbegin(); it != m.cend(); ++it) {
            std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
         }
    }*/

    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rN;
        unordered_map<char, int> m;
        //rN
        for (char& c : ransomNote) {
            rN[c]++;
        }
        //ma
        for (char& c : magazine) {
            m[c]++;
        }
        //print_map(m);
        for (char& c : ransomNote) {
            if(rN[c]>m[c])
                return false;
         }
        return true;
    }
    
    
};