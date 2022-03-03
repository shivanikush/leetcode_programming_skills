class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        //if(n<2) return false;
        //if(n<3) return true;
        int diff = 0, prev_diff = 0;
        diff = arr[1] - arr[0];
        
        
        for(int i = 2; i<n; i++){
            prev_diff = arr[i] - arr[i-1];
            if(diff != prev_diff)
                return false;
        }
        return true;
    }
};
