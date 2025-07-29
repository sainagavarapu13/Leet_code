class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        my_set=set(nums1)
        my_set2=set(nums2)
        return list(my_set&my_set2)
        