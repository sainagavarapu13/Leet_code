class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        map<int , int >a;
        for( int i :p) a[i]++;
        int odd=0 ,eve=0;
        for( auto& [ x,y]:a){
            if( x%2 ==0) eve+=y;
            else odd+=y;
        }
        return min(odd , eve);
    }
};