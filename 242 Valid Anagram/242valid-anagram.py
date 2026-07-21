class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp = {}
        m = {}
        for x in s:
            mp[x] = mp.get(x,0)+1
        for x in t:
            m[x] = m.get(x,0)+1
        for x in s:
            if m.get(x,0)!=mp[x]:
                return False
        for x in t:
            if m[x]!=mp.get(x,0):
                return False
        return True