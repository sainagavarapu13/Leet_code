class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int a=-1;
        int b=-1;
        if(arr.size()<=2) return arr.size();
        int cur_size=2,maxx=-1,lastcount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==a||arr[i]==b) cur_size++;
            else{
                cur_size=lastcount+1;
            }
            if(arr[i]==b) lastcount++;
            else {
                lastcount=1;
                a=b;
                b=arr[i];
            }

            maxx=max(maxx,cur_size);
        }
        return maxx;
    }
};