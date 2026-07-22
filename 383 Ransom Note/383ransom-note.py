class Solution:
    def canConstruct(self, r: str, m: str) -> bool:
        mp = {}
        for x in m:
            mp[x] = mp.get(x,0)+1
        for x in r:
            if mp.get(x,0)<=0:
                return False
            else:
                mp[x] = mp[x]-1

        return True