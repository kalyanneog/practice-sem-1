#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
    string brand;
    string model;
    double price;
    double mileage;
    string fuelType;
public:
    Car(string b, string m, double p, double mil, string f)
   {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
        fuelType = f;
    }
    void displayDetails() {
        cout << "--- Car Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};
int main() 
{
    Car myCar("Toyota", "Camry", 28500.50, 18.5, "Petrol");
    myCar.displayDetails();
    return 0;
}

