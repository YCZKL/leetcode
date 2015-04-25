class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        int secHeight=0;
        int i=0,j=len-1;
        int area=0;
        while(i<j){
            if(height[i]<height[j]){
                secHeight=max(height[i],secHeight);
                area +=secHeight-height[i];
                i++;
            }
            else{
                secHeight=max(height[j],secHeight);
                area +=secHeight-height[j];
                j--;
            }
        }
      return area;  
        
    }
};
