class Solution {
public:
    int minPartitions(string n) {
        sort( n.begin(),n.end(),greater<>());
        return n[0]-'0';
        
    }
};