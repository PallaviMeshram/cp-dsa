/*
class Solution {
public:
	int countKDifference(vector<int>& nums, int k) {
		int n = nums.size();
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				int ans = abs(nums[i] - nums[j]);
				if (ans == k and i < j) {
					cnt++;
				}
			}
		}
		return cnt;
	}
};
*/
class Solution {
public:
	int countKDifference(vector<int>& nums, int k) {
		int n = nums.size();
		int cnt = 0;
		int array[201] = {0};
		for (int i = 0; i < n; i++) {
			array[nums[i]]++;
		}
		for (int i = k + 1; i < 201; i++) {
			cnt += array[i] * array[i - k];
		}
		return cnt;
	}
};