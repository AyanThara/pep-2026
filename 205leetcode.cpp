class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256]={0};
        int mapTS[256]={0};
        for(int i=0;i<s.length();i++){
            if(mapST[s[i]]!=mapTS[t[i]])
                return false;
            mapST[s[i]] = i + 1;
            mapTS[t[i]] = i + 1;
        }
        return true;
    }
};
