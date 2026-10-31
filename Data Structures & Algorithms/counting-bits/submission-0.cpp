class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
       int i=0 , ones; 
       while(i<=n){
        v.push_back(__popcount(i));
        i++;
       }
       return v; 
    }
};
