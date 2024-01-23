#include <iostream>
using namespace std;
double taxCalculation(double purchaseCost, double cc, int age);
// double taxCalculation();

double calculateProfit(double tax,double purchase,double);
int main() {
    double price;
    double Mwaka;
    char carmodel[20];
    char carmake[20];
    double cc;
    double selling;


    int choice=1;
    int n =0;
    while (choice !=0)
    {
        cout<<"Enter Company Make: ";
        cin>>carmake;
        cout<<endl<<"Enter Car Model: ";
        cin>>carmodel;
        cout<<endl;
        cout<<'year of Make:'<<endl;
        cin>>Mwaka;
        cout<<endl<<"Enter Cylinder Capacity: ";
        cin>>cc;
         cout<<endl<<"Enter Purchasing  Price: ";
        cin>>price;
         cout<<endl<<"Enter Selling Price: ";
        cin>>selling;
        cout<<endl<<"Continue? or press 0 to Calculate: ";
        cin>>choice;
        n++;
    }
    // cout<<Mwaka<<endl;
    int makeage = 2023 - Mwaka;
    double taxrate = taxCalculation(price,cc,makeage);
    // double taxrate = taxCalculation();

    cout<<"Tax Rate:"<<taxrate;
    double profit = calculateProfit(taxrate,price,selling);
    // cout<<"Tax: "<<taxrate<<"  Profit is: "<<profit<<endl;
    return 0;
}

double taxCalculation(double purchaseCost,double cc, int age) {
    double taxrate = 0;
    if (cc < 1000) {
        if (age <= 8) {
            taxrate = 0;
        } else if (age <= 12) {
            taxrate = 0.1 * purchaseCost;
        } else {
            taxrate = 0.15 * purchaseCost;
        }
        cout << taxrate << " if block";
    } else if (cc <= 2000) {
        if (age <= 8) {
            taxrate = 0.04 * purchaseCost;
        } else if (age <= 12) {
            taxrate = (0.04 * purchaseCost) + (0.1 * purchaseCost);
        } else {
            taxrate = (0.04 * purchaseCost) + (0.15 * purchaseCost);
        }
        cout << taxrate << " ifelse block";
    } else {
        if (age <= 8) {
            taxrate = 0.08 * purchaseCost;
        } else if (age <= 12) {
            taxrate = (0.08 * purchaseCost) + (0.1 * purchaseCost);
        } else {
            taxrate = (0.08 * purchaseCost) + (0.15 * purchaseCost);
        }
        cout << taxrate << " Out else";
    }

    return taxrate;
}


double calculateProfit(  double tax, double purchasePrice, double sellingPrice){
    return (sellingPrice-purchasePrice-tax);
}
