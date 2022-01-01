
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


// Optimized solution - TC - O(N), SC - O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size();i++){
            if (mpp.find(target- nums[i]) != mpp.end() ) {
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};

int main(){
    vector<int> num{2,6,5,8,11};
    int target = 14;
    Solution obj;
    vector<int> ans = obj.twoSum(num, target);
    cout << ans[0]<<" "<< ans[1];
    return 0;
}
