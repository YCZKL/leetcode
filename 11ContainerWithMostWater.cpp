class Solution {
public:
    int maxArea(vector<int>& height) {
       int i = 0;
       int j = height.size() - 1;
       
       int answer = 0;
       while(i < j)
        {
           int area = (j - i) * min(height[i], height[j]);
           answer = max(answer, area);
           if (height[i] <= height[j])
               i++;
          else
            j--;
        }
      return answer;
    }
};
