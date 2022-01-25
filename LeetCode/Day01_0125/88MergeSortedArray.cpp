//88 Merge Sorted array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m==0)
            nums1=nums2;
        else if (n==0);
        else    
            for(int i=0; i<m+n; i++){
                cout<<i<<endl;
                for (auto it = nums1.begin(); it != nums1.end(); ++it)
                    cout << *it << " ";
                cout<<endl;
                for (auto it = nums2.begin(); it != nums2.end(); ++it)
                    cout << *it << " ";
                cout<<endl;
                //cout<<nums1<<endl<<nums2<<endl;
                if(nums2.size()==0)
                    break;
                if(nums1[i]<=*nums2.begin() && nums1[i]!=0)
                    continue;
                else{ //>
                    nums1.insert(nums1.begin()+i, *nums2.begin());//insert
                    nums1.pop_back();
                    nums2.erase(nums2.begin());
                } 
            }
             sort(nums1.begin(), nums1.end());
    }
};