/* O(N^2)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[i] > nums[j] and i!=j){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
O(N)*/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int array[101]  = {0};
        for (int i = 0; i < n; i++) {
            array[nums[i]]++;
        }
        for (int i = 1; i < 101; i++) {
            array[i] += array[i - 1];
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                ans.push_back(0);
            } else {
                int  temp = array[nums[i] - 1];
                ans.push_back(temp);
            }

        }
        return ans;
    }
};