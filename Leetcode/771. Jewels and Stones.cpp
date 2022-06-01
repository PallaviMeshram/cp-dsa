class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;

        map<char, int> mp;
        for (int i = 0; i < jewels.length(); i++) {
            mp[jewels[i]] = 1;
        }

        for (int i = 0; i < stones.length(); i++) {
            if (mp[stones[i]] == 1) {
                cnt++;
            }
        }

        return cnt;
    }
};