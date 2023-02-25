#include <iostream>
using namespace std;
int main()
{
    class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<m && j<n)
        {
            if(nums1[i]>nums2[j])
            {
                j++;
            }
           else if(nums1[i]<nums2[j])
            {
                i++;
                
            }
           else if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            
        }
        return ans;
    }
};
return 0;
}