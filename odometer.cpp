#include <iostream>
#include <string>
using namespace std;

//Lillian Reynolds
//This program tracks the distances travelled and gallons used for seperate trips.

class Odometer{
    public:
    void setOdometer(int distance);       // resets to 0
    void setFuelEff(int fuelEff);         //sets fuel efficiency
    void setAddMiles(int milesTraveled);  //adds miles to the odometer
    void print();                         //Print

    private:
    double getGallons();                  // returns gallons used
    double trackFuelEff;                   //Track mpg
    int trackDistance;                     //Track miles driven
};

void Odometer::setOdometer(int distance){
    trackDistance = distance;
    return;
}

void Odometer::setFuelEff(int fuelEff){
    trackFuelEff = fuelEff;
    return;
}

void Odometer::setAddMiles(int milesTraveled){
    trackDistance = milesTraveled + trackDistance;
    return;
}

double Odometer::getGallons(){
    return trackDistance / trackFuelEff;
}

void Odometer::print(){
    cout << "Fuel used: " << this->getGallons() << " gallons" << endl;
    cout << "Distance Traveled: " << trackDistance << " miles" <<endl;
    return;
}


int main()
{
    Odometer trip1;
    Odometer trip2;

    trip1.setOdometer(0); //sets odometer to 0
    trip2.setOdometer(0); //sets odometer to 0

    trip1.setFuelEff(29.9); //sets fuel efficiency
    trip2.setFuelEff(15.3); //sets fuel efficiency for 2nd object

    trip1.setAddMiles(100); //Tracks how many miles have been travelled
    trip2.setAddMiles(142); //Tracks how many miles have been travelled for 2nd object


    trip1.print();
    trip2.print();


    return 0;

}
