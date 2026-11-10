class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int>v;
      map<int , int>mp;
      for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }
    vector<pair<int,int>> fin(mp.begin(), mp.end());
        sort(fin.begin(), fin.end(), [](auto a, auto b) {
            return a.second > b.second;
        });
    for(int i=0;i<k;i++){
        v.push_back(fin[i].first);
    }
    return v;
    }
};
