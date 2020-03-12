#include <iostream>
#include "ItemToPurchase.h"

int main() {

    ItemToPurchase one, two;

    string name;
    int price, quantity;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin, name);
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;

    cin.ignore();

    one.SetName(name);
    one.SetPrice(price);
    one.SetQuantity(quantity);

    cout<<"\nItem 2"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin, name);
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;

    two.SetName(name);
    two.SetPrice(price);
    two.SetQuantity(quantity);

    cout<<"\nTOTAL COST"<<endl;
    cout<<one.GetName()<<" "<<one.GetQuantity()<<" @ $"<<one.GetPrice()<<
        " = $"<<one.GetPrice()*one.GetQuantity()<<endl;
    cout<<two.GetName()<<" "<<two.GetQuantity()<<" @ $"<<two.GetPrice()<<
        " = $"<<two.GetPrice()*two.GetQuantity()<<endl;

    cout<<"\nTotal: $"<<(one.GetPrice()*one.GetQuantity())+
            (two.GetPrice()*two.GetQuantity())<<endl;

    return 0;
}