class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> num;
        for(char c:s){
            num[c]++;
        }
        for(char g : t) num[g]--;
        for(auto m: num){
            if(m.second != 0) 
                return m.first;
        }
        return 0;
    }
};
