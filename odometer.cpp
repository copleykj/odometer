#include <iostream>
#include <string>
using namespace std;

//Lillian Reynolds
//This program tracks the distances travelled and gallons used for seperate trips.

class Odometer{
    public:
        Odometer setOdometer(int distance){
            trackDistance = distance;
            return *this;
        };       // resets to 0
        Odometer setFuelEff(int fuelEff){
            trackFuelEff = fuelEff;
            return *this;
        };         //sets fuel efficiency
        Odometer setAddMiles(int milesTraveled){
            trackDistance = milesTraveled + trackDistance;
            return *this;
        };  //adds miles to the odometer
        Odometer print(){
            cout << "Fuel used: " << getGallons() << " gallons" << endl;
            cout << "Distance Traveled: " << trackDistance << " miles" <<endl;
            return *this;
        };                         //Print

    private:
        double getGallons(){
            return trackDistance / trackFuelEff;
        };                  // returns gallons used
        double trackFuelEff;                   //Track mpg
        int trackDistance;                     //Track miles driven
};


int main()
{
    Odometer trip1;
    Odometer trip2;

    trip1.setOdometer(0).setFuelEff(29.9).setAddMiles(100).print();
    trip2.setOdometer(0).setFuelEff(15.3).setAddMiles(142).print();


    return 0;

}
