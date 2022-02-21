class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
	v[0] = 0;
	for(int i = 1; i <= n; i++) {
		if (i % 2) {
			v[i] = v[i - 1] + 1;
		} else {
			v[i] = v[i >> 1];
		}
	}
	return v;
    }
};