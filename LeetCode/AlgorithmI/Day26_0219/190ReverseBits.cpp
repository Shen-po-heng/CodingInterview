//190. Reverse Bits
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0, power = 31;
            while (n != 0) {
              ret += (n & 1) << power;
              n = n >> 1;
              power -= 1;
            }
            return ret;
          }
};
//Run time error
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int arr[32]={0};
        //to reverse binary
        for(int i=0;i<32;i++){
            if (n==0)
                break;
            else if(n==1){
                arr[i]=1;
                break;
            }
            else if(n%2==0)
                n/=2;    //equal to 0
            else if (n%2==1){
                n=(n-1)/2;  //reminder ex:1=3-3/2
                arr[i]=1;
            }
        }
        //coversion
        int Ans=0;
        for(int i=0;i<32;i++)
            if(arr[i]==1)
                Ans+=pow(2,(31-i)); 
            
        return Ans;
    }      
};