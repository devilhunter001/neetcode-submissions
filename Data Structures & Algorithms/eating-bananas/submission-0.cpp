class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r= maxEl(piles);
        int ans = 0;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(checkVal(piles,h,mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
    return ans;
    }

    bool checkVal(vector<int>& piles,int h, int mid){
        int n = piles.size();
        long long  sum = 0;

        for(int i = 0; i<n; i++){
            int x = (piles[i] + mid -1)/mid;
            sum += x;
        }

        if(sum>h){
            return false;
        }
    return true;
    }

    int maxEl(vector<int>& piles){
        int n = piles.size();
        int dabest = INT_MIN;
        for(int i= 0 ; i< n; i++){
            dabest = max(dabest,piles[i]);
        }
    return dabest;
    }
};

