class ParkingSystem {
private:
    vector<int> spaces;
    
public:
    ParkingSystem(int big, int medium, int small) {
        spaces = {big, medium, small};
    }
    
    bool addCar(int carType) {
        return spaces[carType - 1]-- > 0;
    }
    
    // bool addCar(int carType) {
    //     if (spaces[carType - 1] == 0)
    //         return false;
    //     spaces[carType - 1]--;
    //     return true;
    // }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */