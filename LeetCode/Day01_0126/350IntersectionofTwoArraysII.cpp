//350IntersectionofTwoArraysII
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr={};
        int lenth1=nums1.size();
        int lenth2=nums2.size();
        if(lenth1<lenth2){
            nums1.swap(nums2);
        }
        vector<int>::iterator it1=nums1.begin();
        vector<int>::iterator it2=nums2.begin();
        
        //nums1 is longer
        while(it2!=nums2.end()){
            for (it1 = nums1.begin(); it1 != nums1.end();++it1){
                if(it2==nums2.end())
                   break;
                if(*it2 == *it1){
                   arr.push_back(*it2);
                   ++it2;
                }else if (*it2!=*it1 && arr.size()==1){
                   //arr.pop_back();
                   ++it2;
                }else if (*it2!=*it1 && arr.size()==0){
                   continue;
                }
            }
            if(it2==nums2.end())
               break;
            ++it2;
        }
        
        //check reverse
        reverse(nums1.begin(),nums1.end());
        vector<int> arr2={};
        it1=nums1.begin();
        it2=nums2.begin();
        while(it2!=nums2.end()){
            for (it1 = nums1.begin(); it1 != nums1.end();++it1){
                if(it2==nums2.end())
                   break;
                if(*it2 == *it1){
                   arr2.push_back(*it2);
                   ++it2;
                }else if (*it2!=*it1 && arr2.size()==1){
                   //arr.pop_back();
                   ++it2;
                }else if (*it2!=*it1 && arr2.size()==0){
                   continue;
                }
            }
            if(it2==nums2.end())
               break;
            ++it2;
        }
        if (arr.size()>arr2.size())
            return arr;
        else
            return arr2;
    }
};