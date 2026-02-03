// Last updated: 04/02/2026, 01:36:29
class Solution {
public:
    int maxFrequencyElements(vector<int>& z) {
        unordered_map<int,int>m;
        for(auto &i:z) m[i]++;
        vector<pair<int,int>> v(m.begin(), m.end());  
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        int c=v[0].second,d=0;
        for(auto &i:v){
            if(i.second==c){
                d+=i.second;
            }
        }return d;
    }
};