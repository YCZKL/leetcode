class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> num(n+m+1);
	int i=0,j=0,p=0;
	while(i<m&&j<n){
		if(nums1[i]<nums2[j]){
			num[p++]=nums1[i++];
		}
		else if(nums1[i]>nums2[j]){
			num[p++]=nums2[j++];			
		}
		else if(nums1[i]==nums2[j]){
			num[p++]=nums1[i++];
			num[p++]=nums2[j++];
		}
	}	
	while(i<m&&j==n){
		num[p++]=nums1[i++];
		}
	while(i==m&&j<n){
		num[p++]=nums2[j++];
	}
	for(int k=0;k<m+n;++k)
		nums1[k]=num[k];
    } 
   
};
