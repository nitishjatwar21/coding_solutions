class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, n = nums.size();
        if(n < 4) return {}; // edge case
        set<vector<int>> set;
        sort(nums.begin(), nums.end());
        for(i=0;i<n;i++) { // for finding first element
            for(j=i+1;j<n;j++) { // for finding 2nd element
                int l = j+1, r = n-1, newTarget = target - (nums[i] + nums[j]);
                while(l < r) { // two pointer to find 3rd and 4th element
                    if(nums[l] + nums[r] == newTarget) {
                        vector<int> v = {nums[i], nums[j], nums[l], nums[r]};
                        set.insert(v); // for finding only unique quadraples use set to remove duplicates
                        l++; r--;
                    }
                    else if(nums[l] + nums[r] > newTarget) {
                        r--;
                    }
                    else l++;
                }
            }
        }
        vector<vector<int>> res;
        copy(set.begin(), set.end(), back_inserter(res));
        return res;
    }
};