class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        m={}
        for i in paths:
            m[i[0]]=m.get(i[0],0)+1
        for i in paths:
            k = m.get(i[1],0)
            if k==0:
                return i[1]
        return ""
        