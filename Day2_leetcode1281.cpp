class Solution {
public:
    int subtractProductAndSum(int n) {
        int pod = 1;
        int sod = 0;

        while(n!= 0){
            pod *= n%10;
            sod += n%10;
            n = n/10;
        }
        return pod - sod;
        
        
    }
};
