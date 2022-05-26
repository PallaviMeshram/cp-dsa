class Solution {
public:
	int mostWordsFound(vector<string>& sentences) {
		int count = 0;
		int n = sentences.size();
		for (int i = 0; i < n; i++) {
			int x = sentences[i].length();
			int cntsp = 0;
			for (int j = 0; j < x; j++) {
				if (sentences[i][j] == ' ') {
					cntsp++;
				}
			}

			count = max(cntsp, count);

		}
		return count + 1;
	}
};