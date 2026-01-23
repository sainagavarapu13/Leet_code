class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0,j=0;
        while(j<arr.size()){
            if(arr[i]==0){
                j++;
            }
            i++;
            j++;
        }
        cout<<i<<endl;
        i--;
        if(j>arr.size()){
            arr[arr.size()-1] = 0;
            j = arr.size()-2;
            i--;
        }
        else{
            j =arr.size()-1;
        }
        while(j>=0 && i>=0){
            if(arr[i]>0){
                arr[j--] = arr[i--];
            }
            else{
                arr[j--] = 0;
                arr[j--] = 0;
                i--;
            }
        }
    }
};