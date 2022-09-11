class ParkingSystem {
public:
    int b,s,m;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    bool addCar(int carType) {
        if(carType==1 && b>0){
            b-=1;
            return 1;
        }
        if(carType==2 && m>0){
            m-=1;
            return 1;
        }
        if(carType==3 && s>0){
            s-=1;
            return 1;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */