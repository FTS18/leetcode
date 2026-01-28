// Last updated: 28/01/2026, 16:50:05
class Solution {
public:
    int lengthOfLastWord(string s) {
    stringstream ss(s);
    string w;
    vector<string> ws;

    while (ss >> w) {
        ws.push_back(w);
    }
         return   ws[ws.size()-1].size();
        
        
    }
};