class Solution:
    def groupAnagrams(self, s: List[str]) -> List[List[str]]:
        m = {}
        ans = []
        for i in s:
            temp = i
            temp = tuple(sorted(temp))
            if temp not in m:
                m[temp] = []
            m[temp].append(i)
        for c in m.values():
            ans.append(c)
        return ans


        