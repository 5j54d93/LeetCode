class ParkingSystem {
    public:
        ParkingSystem(int big, int medium, int small) {
            numBig=big;
            numMedium=medium;
            numSmall=small;
        }

        bool addCar(int carType) {
            switch(carType)
            {
                case 1:
                    if(numBig>0)
                    {
                        numBig--;
                        return true;
                    }
                    else return false;
                case 2:
                    if(numMedium>0)
                    {
                        numMedium--;
                        return true;
                    }
                    else return false;
                case 3:
                    if(numSmall>0)
                    {
                        numSmall--;
                        return true;
                    }
                    else return false;
                default:
                    break;
            }
            return false;
        }
    private:
        int numBig;
        int numMedium;
        int numSmall;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
