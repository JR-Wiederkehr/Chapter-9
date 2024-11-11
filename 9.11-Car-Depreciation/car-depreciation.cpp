#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

class Car {
    public:
        int model_year;
        double purchase_price;
        double current_value;
        Car(){}
        
        void calc_current_value(int current_year){
            double depreciation_rate = 0.15;
            int car_age = current_year - this->model_year;

            int current_value = round(this->purchase_price * pow(1-depreciation_rate, car_age));
            this->current_value = current_value;
        }

        void print_info(){
            cout << endl << "The car's purchase price is: $" << this->purchase_price << endl;
            cout << "The car's model year is: " << this->model_year << endl;
            cout << "The car's current value is: $" << this->current_value << endl;
        }
};

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    Car my_car;

    int current_year = 1900 + ltm->tm_year;

model_year_input:
    cout << "Enter the model year of the car: ";
    cin >> my_car.model_year;
    if(cin.fail() || my_car.model_year > current_year){
        cout << "Invalid input. Please enter a valid model year." << endl << endl;
        cin.clear();
        cin.ignore(256, '\n');
        goto model_year_input;
    }
purchase_price_input:
    cout << "Enter the purchase price of the car: $";
    cin >> my_car.purchase_price;
    if(cin.fail() || my_car.purchase_price < 0){
        cout << "Invalid input. Please enter a valid purchase price." << endl << endl;
        cin.clear();
        cin.ignore(256, '\n');
        goto purchase_price_input;
    }

    my_car.calc_current_value(current_year);
    my_car.print_info();

    system("pause");
}