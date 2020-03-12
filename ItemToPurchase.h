//
// Created by Will Smith on 2020-03-12.
//

#ifndef CH7WARMUP_ITEMTOPURCHASE_H
#define CH7WARMUP_ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
public:
    ItemToPurchase();

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);


};


#endif //CH7WARMUP_ITEMTOPURCHASE_H
