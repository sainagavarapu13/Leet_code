class ParkingSystem {
public:
    int a,b,d;
    ParkingSystem(int big, int medium, int small) {
        a = big;
        b = medium;
        d = small;
    }
    
    bool addCar(int c) {
        if(c==1 && a>0) {
            a--;
            return true;
        }
        else if(c==2 && b>0) {
            b--;
            return true;
        }
        else if(c==3 && d>0) {
            d--;
            return true;
        }
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */