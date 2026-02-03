// Last updated: 04/02/2026, 01:36:43
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        string s;
        for(auto &i:words){
            string t=i;
            sort(i.begin(),i.end());
            if(s!=i){
                v.push_back(t);
                s=i;
            }
        }return v;
    }
};