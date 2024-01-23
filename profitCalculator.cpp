#include <iostream>
#include <iomanip>
using namespace std;

struct Car {
    string make;
    string model;
    int year;
    int CC;
    double purchasingPrice;
    double sellingPrice;
    double tax;
    double profit;
};

// Function to calculate tax based on CC and age
double calculateTax(double purchaseCost, double  cc,  int age) {
    if(cc <1000){
        if(age <8){
            return 0;
        }else if(age >=8 && age <=12){
            return  (10/100)*purchaseCost;
        }else if( age >12){
            return (15/100)*purchaseCost;
        }
    }else if(cc >=1000 && cc <=2000){
        if(age <8){
            return  (4/100)*purchaseCost;
        }else if(age >=8 && age<=12){
            return ((4/100)*purchaseCost)+((10/100)*purchaseCost);
        }else{
            return ((4/100)*purchaseCost) +((15/100)*purchaseCost);
        }
    }else{
        if(age <8){
            return (8/100)*purchaseCost;
        }else if(age >=8 && age<=12){
            return ((8/100)*purchaseCost)+((10/100)*purchaseCost);
        }else{
            return  ((8/100)*purchaseCost) +((15/100)*purchaseCost);
        }
    }
    
}

// Function to calculate profit
double calculateProfit(double purchasingPrice, double sellingPrice, double tax) {
    return sellingPrice - purchasingPrice - tax;
}

int main() {
    const int carToSale = 4;  // Number of cars in the array purchase by Company
    Car cars[carToSale];

    // Input car details
    for (int i = 0; i < carToSale; ++i) {
        cout << "Enter details for Car " << i + 1 << ":" << endl;
        cout << "Make: ";
        cin >> cars[i].make;
        cout << "Model: ";
        cin >> cars[i].model;
        cout << "Year: ";
        cin >> cars[i].year;
        cout << "CC: ";
        cin >> cars[i].CC;
        cout << "Purchasing Price: ";
        cin >> cars[i].purchasingPrice;
        cout << "Selling Price: ";
        cin >> cars[i].sellingPrice;

        // Calculate tax and profit
        cars[i].tax = calculateTax(cars[i].purchasingPrice, cars[i].CC, cars[i].year);
        cars[i].profit = calculateProfit(cars[i].purchasingPrice, cars[i].sellingPrice, cars[i].tax);
    }

    // Display the report
    cout << setw(3) << "SN" << setw(7) << "Make" << setw(8) << "Model" << setw(5) << "Year"
         << setw(8) << "CC" << setw(15) << "PurchasingPrice" << setw(15) << "SellingPrice"
         << setw(5) << "Tax" << setw(8) << "Profit" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < carToSale; ++i) {
        cout << setw(3) << i + 1 << setw(7) << cars[i].make << setw(8) << cars[i].model
             << setw(5) << cars[i].year << setw(8) << cars[i].CC << setw(15) << fixed << setprecision(2)
             << cars[i].purchasingPrice << setw(15) << cars[i].sellingPrice << setw(5) << fixed
             << setprecision(3) << cars[i].tax << setw(8) << fixed << setprecision(3) << cars[i].profit
             << endl;
    }

    return 0;
}
