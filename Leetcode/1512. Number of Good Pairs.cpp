
/* O(N^2)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
*/

// O(N)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (mp.count(nums[i])) {
                cnt += mp[nums[i]];
                mp[nums[i]]++;
            }
            else {
                mp[nums[i]] = 1;
            }
        }

        return cnt;
    }
};