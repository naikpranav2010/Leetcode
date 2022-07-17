class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, res = 0;
	int i = 0, j = 0;
	int count = 0;
	while (i < arr.size()) {
		if (count < k) {
			sum += arr[i];
			count++;
			i++;
		}
		else {
			sum -= arr[j];
			j++;
			count--;
		}
		if (count == k && sum / k >= threshold) {
			res++;
		}
	}
	return res;
    }
};