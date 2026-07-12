class Solution {
public:

    int maxEle(vector<int>& piles) {
        int maxi = 0;
        for(int x : piles)
            maxi = max(maxi, x);
        return maxi;
    }

    long long totalHours(vector<int>& piles, int speed) {
        long long totalH = 0;

        for(int x : piles) {
            // no floating point, no overflow
            totalH += (x + speed - 1) / speed;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxEle(piles);

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long totalH = totalHours(piles, mid);

            if(totalH <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
