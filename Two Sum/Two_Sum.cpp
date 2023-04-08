
//Question Link:https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int t=target;
        int sum=0;
        int i,j,n;
        n=nums.size();
        for( i=0;i<n-1;i++)
        {sum=0;
           for(j=i+1;j<n;j++)
           {  
          
               sum=nums[i]+nums[j];
               if(sum==t)
               {
                  ans.push_back(i);
                  ans.push_back(j);
      
                 break;
           }
           }
        }
       
        return ans;
    }
};