class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int res = 0,n = word.size();
        for(int i=0;i<n;i++){
            int s = i;
            if(word[i]=='a'){
                for(int j=i+1;j<n;j++){
                    if(word[j]=='a'){
                        i = j;
                        continue;
                    }
                    else if(word[j]=='e'){
                        for(int k = j+1;k<n;k++){
                            if(word[k]=='e'){
                                i = k;
                                continue;
                            }
                            else if(word[k]=='i'){
                                for(int l=k+1;l<n;l++){
                                    if(word[l]=='i'){
                                        i = l;
                                        continue;
                                    }
                                    else if(word[l]=='o'){
                                        for(int m=l+1;m<n;m++){
                                            if(word[m]=='o'){
                                                i = m;
                                                continue;
                                            }
                                            else if(word[m]=='u'){
                                                for(int g=m;g<n;g++){
                                                    if(word[g]=='u'){
                                                        int z = g-s+1;
                                                        if(z>res) res = z;
                                                        continue;
                                                    }
                                                    else{
                                                        i = g-1;
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                            else{
                                                i = m-1;
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    else{
                                        i = l-1;
                                        break;
                                    }
                                }
                                break;
                            }
                            else{
                                i = k-1;
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    else{
                        i = j-1;
                        break;
                    }
                }
            }
        }
        return res;
    }
};