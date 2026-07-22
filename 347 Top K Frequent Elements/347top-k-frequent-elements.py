class Solution:
    def topKFrequent(self, a: List[int], k: int) -> List[int]:
        m ={}
        for i in a:
            m[i] = m.get(i,0)+1
        temp = []
        for n,c in m.items():
            heapq.heappush(temp,(-c,n))
        ans = []
        for i in range(k):
            ans.append(heapq.heappop(temp)[1])
        return ans

        