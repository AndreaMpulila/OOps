#include <iostream>
using namespace std;
double taxCalculation(double purchaseCost, double cc, int age);
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
    cout<<Mwaka;
    int makeage = 2023 - Mwaka;
    double taxrate = taxCalculation(price,cc,makeage);
    double profit = calculateProfit(taxrate,price,selling);
    cout<<"Tax: "<<taxrate<<"  Profit is: "<<profit<<endl;
    return 0;
}

double taxCalculation(double purchaseCost, double cc, int age){
    double taxrate =0;
    if(cc <1000){
        if(age <8){
            taxrate =0;
        }else if(age >=8 && age <=12){
            taxrate = (10/100)*purchaseCost;
        }else if( age >12){
            taxrate = (15/100)*purchaseCost;
        }
        cout<<taxrate<<" if block";
    }else if(cc >=1000 && cc <=2000){
        if(age <8){
            taxrate = (4/100)*purchaseCost;
        }else if(age >=8 && age<=12){
            taxrate =((4/100)*purchaseCost)+((10/100)*purchaseCost);
        }else{
            taxrate = ((4/100)*purchaseCost) +((15/100)*purchaseCost);
        }
        cout<<taxrate<<" ifelse block";
    }else{
        if(age <8){
            taxrate = (8/100)*purchaseCost;
        }else if(age >=8 && age<=12){
            taxrate =((8/100)*purchaseCost)+((10/100)*purchaseCost);
        }else{
            taxrate = ((8/100)*purchaseCost) +((15/100)*purchaseCost);
        }
        cout<<taxrate<<" Out else";
    }
    
    return taxrate; 
}

double calculateProfit(  double tax, double purchasePrice, double sellingPrice){
    return (sellingPrice-purchasePrice-tax);
}
