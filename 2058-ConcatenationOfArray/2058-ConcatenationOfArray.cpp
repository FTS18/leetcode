// Last updated: 28/01/2026, 00:29:52
class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        int c=a.size();
        a.resize(2 * a.size());
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                a[i]=a[i-c];
            }
        }
        return a;
    }
};