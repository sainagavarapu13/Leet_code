int maxArea(int* height, int heightSize) {
    int l =0,r = heightSize-1,area=0;
    while(l<=r){
        int width = r - l;
        int h = height[l]<height[r] ? height[l] : height[r];
        int oa = h * width;
        if(area<oa){
            area = oa;
        }
        if(height[l]==h) l++;
        else r--;
    }
    return area;
}