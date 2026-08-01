class OrderedStream:

    def __init__(self, n: int):
        self.n = n
        self.arr = [""]*n
        self.p =1
    def insert(self, idKey: int, value: str) -> List[str]:
        self.arr[idKey-1]=(value)
        lis =[]
        while self.p <=self.n and self.arr[self.p-1]!="":
            lis.append(self.arr[self.p-1])
            self.p+=1
        return lis


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)