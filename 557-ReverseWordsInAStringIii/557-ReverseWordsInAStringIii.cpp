// Last updated: 28/01/2026, 00:30:15
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w;
        vector<string>v;

            s="";
        while (ss >> w) {
            int l=0,r=w.size()-1;
            while(l<r){
                swap(w[l++],w[r--]);
            } s+=w+" ";
        }
     s.pop_back();
     return s;
    }
};