//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    int n=nums.size();
        
    int i=0,max_right_position=0;
    int j=nums.size()-1,max_left_position=nums.size()-1;
    int sum=0;
    int max=0;
   
    int arr[n];
        
        for (int k = 0; k < n; k++) {
            arr[k] = nums[k];
            cout<<nums[k]<<",";
            sum+=arr[k];
        }
        cout<<"Sum:"<<sum<<endl;
        max=sum;
        //from left to right
        //cout<<"i:"<<i<<",j:"<<j;
        while(i<j){
            sum-=arr[i];
            i++;
            //cout<<"Sum:"<<sum<<",Max:"<<max<<endl;
            if(sum> max){
                max=sum;
                //cout<<max<<","<<max_left_position<<endl;
                max_left_position=i;
                cout<<"Max="<<max<<",max_left_position="<<max_left_position<<endl;
            }
        }
        
        //re-caculate sum
        sum=0;
        for (int k=max_left_position; k<n;k++){
            cout<<arr[k]<<",";
            sum+=arr[k];
        }
        
        //from right to left
        cout<<"max_left_position:"<<max_left_position<<",j:"<<j<<endl;
        cout<<"sum:"<<sum<<endl;
        while(j>max_left_position){
            sum-=arr[j];
            j--;
            if(sum> max){
                max=sum;
                max_right_position=j;
                cout<<"Max="<<max<<",max_left_position="<<max_left_position<<endl;
            }
        }
        
        return max;
        
        
    }
};