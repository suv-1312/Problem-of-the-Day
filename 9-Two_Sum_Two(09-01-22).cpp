class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l = 0 , r = arr.size()-1 ;
        vector<int> ans;
        
        while(l<=r)
        {
            if(arr[l]+arr[r]==target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            else if(arr[l]+arr[r]>target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return ans;
    }
};