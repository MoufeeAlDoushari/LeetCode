class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();
        int sum = 0;
        int low = 0;

        for(int i = 0; i < n; i++) {
            sum += weights[i];
            low = max(low, weights[i]);
        }

        int high = sum;

        while(low <= high) {

            int mid = (low + high) / 2;

            int day = 1;
            int curr = 0;

            for(int i = 0; i < n; i++) {

                if(curr + weights[i] > mid) {
                    day++;
                    curr = 0;
                }

                curr += weights[i];
            }

            if(day <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};