class Solution(object):
    def intersection(self, a, b):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        s=set(a)
        e = set(b)
        c = s&e
        return list(c)