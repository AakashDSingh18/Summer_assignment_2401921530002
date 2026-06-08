class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashmpp;
        int n1= ransomNote.size();
        int n2= magazine.size();
        for(int i=0; i<n2; i++) hashmpp[magazine[i]]+=1;
        for(int i=0; i<n1; i++) hashmpp[ransomNote[i]]-=1;
        for(auto x: hashmpp) if(x.second<0) return false;
        return true;
    }
};