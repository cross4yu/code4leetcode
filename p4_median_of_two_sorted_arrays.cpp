class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
        {
            double ret = 0;
            ret += find_smallest_kth(nums1, nums2, (nums1.size()+nums2.size())>>1);
            ret += find_smallest_kth(nums1, nums2, (nums1.size()+nums2.size()-1)>>1);
            return ret / 2.0;
        }
    private:
        int find_smallest_kth(vector<int>& nums1, vector<int>& nums2,int k)
        {
            int size1 = nums1.size();
            int size2 = nums2.size();
            int mark1 = 0, mark2 = 0;
            for (int i = 0; i < k; ++i)
            {
                if (mark1 == size1) ++mark2;
                else if (mark2 == size2) ++mark1;
                else if (nums1[mark1] < nums2[mark2]) ++mark1;
                else ++mark2;
            }
            if (mark1 == size1) return nums2[mark2];
            if (mark2 == size2) return nums1[makr1];
            return std::min(nums1[mark1], nums[makr2]);
        }
};
