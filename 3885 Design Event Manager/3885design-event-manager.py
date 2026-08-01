class EventManager:
    
    def __init__(self, events: list[list[int]]):
        self.heap = []
        self.m = {}
        a = events
        for i in a:
            self.m[i[0]] = i[1]
            heapq.heappush(self.heap,(-i[1],i[0]))
        
    def updatePriority(self, eventId: int, new: int) -> None:
        self.m[eventId] = new
        heapq.heappush(self.heap,(-new,eventId))


    def pollHighest(self) -> int:

        while self.heap:
            pr,id = self.heap[0]
            if id in self.m and self.m[id]==-pr:
                heapq.heappop(self.heap)
                del self.m[id]
                return id
            heapq.heappop(self.heap)
        return -1



        


# Your EventManager object will be instantiated and called as such:
# obj = EventManager(events)
# obj.updatePriority(eventId,newPriority)
# param_2 = obj.pollHighest()