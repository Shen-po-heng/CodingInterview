//231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int base=0;
        while(n>=pow(2,base)){
            if(n==pow(2,base))
                return true;
            base++;
        }
        return false;
    }
};