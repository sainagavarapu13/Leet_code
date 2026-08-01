class OrderedStream:

    def __init__(self, n: int):
        self.i=0
        self.n = n
        self.a = [""]*self.n
        

    def insert(self, idKey: int, value: str) -> List[str]:
        self.a[idKey-1] = value
        ans = []
        while self.i<len(self.a) and self.a[self.i]!="":
            ans.append(self.a[self.i])
            self.i+=1
        return ans

        


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)