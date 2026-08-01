class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        key = [1,2,3]
        val = [big, medium, small]
        self.dic = {k :i for k,i in zip(key, val)}

    def addCar(self, carType: int) -> bool:
        if self.dic[carType]>0 :
            self.dic[carType]-=1
            #self.dec[carType]=val
            return True
        else:
            return False


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)