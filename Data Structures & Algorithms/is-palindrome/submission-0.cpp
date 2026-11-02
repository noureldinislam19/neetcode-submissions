class Solution {
public:
    bool isPalindrome(string s) {
        int sz=s.size();
        string s2="";
        string comp="abcdefghijklmnopqrstuvwxyz0123456789";
        for(int i=0; i<sz; i++){
            if(comp.find(tolower(s[i]))!=-1){
                s2+=s[i];
            }
        }
        cout<<s2;
        int l=0 , r=s2.size()-1;
        while(l<r){
            if(tolower(s2[l])==tolower(s2[r])){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
};
