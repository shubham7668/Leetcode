class ParkingSystem {
public:
    vector<int> carSize;
    ParkingSystem(int big, int medium, int small) {
        carSize={big,medium,small};
    }
    
    bool addCar(int carType) {
        if(carSize[carType-1]>0){
            carSize[carType-1]=carSize[carType-1]-1;
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