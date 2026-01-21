class Solution {
public:
    long long find_maxi(vector<int>& a, int k){
        int n = a.size();
        long long to_add = a[0]+a[n-1];
        if(k==1) return to_add;
        priority_queue<long long>pq;
        for(int i=0;i<a.size()-1;i++){
            pq.push((long long)a[i]+a[i+1]);
        }
        for(int i=0;i<k-1;i++){
            to_add+=pq.top();
            pq.pop();
        }
        return to_add;
    }
    long long find_mini(vector<int>& a, int k){
        int n = a.size();
        long long to_add = a[0]+a[n-1];
        if(k==1) return to_add;
        priority_queue<long long , vector<long long> , greater<long long>>pq;
         for(int i=0;i<a.size()-1;i++){
            pq.push((long long)a[i]+a[i+1]);
        }
         for(int i=0;i<k-1;i++){
            to_add+=pq.top();
            pq.pop();
        }
        return to_add;
    }
    long long putMarbles(vector<int>& a, int k) {
        long long maxi = find_maxi(a,k);
        long long mini = find_mini(a,k);
        return maxi-mini;
    }
};