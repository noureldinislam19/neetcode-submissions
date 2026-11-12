class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>sum;
        int c=0;
        digits.back()++;
        while(!digits.empty()){
            int x =digits.back() + c;
            sum.push_back( x  % 10 );
            c=x/10;
            digits.pop_back();
        }
        if(c)sum.push_back(c);
         reverse(sum.begin() , sum.end());
        return sum;
    }
};
