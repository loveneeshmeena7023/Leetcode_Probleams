class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int maxWater =0;
        int lp = 0, rp = n-1;

        while(lp<rp){
          int  w = rp-lp;
          int  ht = min(height[rp],height[lp]);
         int  maxArea = w*ht;
          maxWater = max(maxWater, maxArea);

          height[rp]>height[lp] ? lp++:rp--;
        }
         return maxWater;
    }
   
};