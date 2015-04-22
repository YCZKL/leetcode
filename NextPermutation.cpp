class Solution {
public:
    void nextPermutation(vector<int> &num) {
         /*
         //方法一：STL函数法 
         next_permutation(num.begin(), num.end()); 
        */
        /*
       //方法二：在当前序列中，从尾端往前寻找两个相邻元素，前一个记为*i，后一个记为*ii，并且满足*i < *ii。
        然后再从尾端寻找另一个元素*j，如果满足*i < *j，即将第i个元素与第j个元素对调，
        并将第ii个元素之后（包括ii）的所有元素颠倒排序，即求出下一个序列了。
        */
        if(num.size()<=1) return;
        int i=num.size()-1,j;
        for(j=num.size()-2; j>=0; j--){
            if(num[j]<num[j+1]) break;
        }
        if(j>=0){
            while(num[i]<=num[j]) i--;
            swap(num[i], num[j]);
        }
        reverse(num.begin()+j+1, num.end());
        }
};
