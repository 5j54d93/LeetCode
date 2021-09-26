class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0) {
            if(nums2.size()%2 == 0) return ((double)nums2[nums2.size()/2-1]+(double)nums2[nums2.size()/2])/2;
            else return nums2[nums2.size()/2];
        }
        else if(nums2.size() == 0) {
            if(nums1.size()%2 == 0) return ((double)nums1[nums1.size()/2-1]+(double)nums1[nums1.size()/2])/2;
            else return nums1[nums1.size()/2];
        }
        int size = nums1.size() + nums2.size();
        int middle = (nums1.size() + nums2.size() - 1) / 2;
        double i=0, j=0, mid1, mid2;
        while(i+j <= middle) {
            if(i==nums1.size()) {
                mid1 = nums2[j];
                j++;
            }
            else if(j==nums2.size()) {
                mid1 = nums1[i];
                i++;
            }
            else if(nums1[i] < nums2[j]) {
                mid1 = nums1[i];
                i++;
            }
            else {
                mid1 = nums2[j];
                j++;
            }
        }
        if(size%2 != 0) return mid1;
        if(i==nums1.size()) mid2 = nums2[j];
        else if(j==nums2.size()) mid2 = nums1[i];
        else if(nums1[i] < nums2[j]) mid2 = nums1[i];
        else mid2 = nums2[j];
        return (mid1 + mid2) / 2;
    }
};
