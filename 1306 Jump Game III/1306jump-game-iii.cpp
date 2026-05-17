class Solution {
public:
    bool canReach(vector<int>& a, int k) {
     queue<int>q;
     q.push(k);
     vector<int>visited(a.size(),0);
     int n= a.size();
     while(!q.empty()){
     int idx = q.front();
     q.pop();
     visited[idx]=1;
     if(a[idx]==0) return true;
     if(idx+a[idx]<n && visited[idx+a[idx]] == 0){
        q.push(idx+a[idx]);
     }
     if(idx-a[idx]>=0  && visited[idx-a[idx]] == 0){
        q.push(idx-a[idx]);
     }
     }  
     return false; 
    }
};