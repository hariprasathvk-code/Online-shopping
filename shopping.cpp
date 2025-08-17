#include <iostream>
#include <vector>
#include <string>
using namespace std;

void processItem(string item) {
    int inWarehouse;
    cout << "\nIs " << item << " available in warehouse? (1 = Yes, 0 = No): ";
    cin >> inWarehouse;

    if (inWarehouse == 1) {
        cout << "Item " << item << " packed with other orders in warehouse.\n";
    } else {
        cout << "Contacting seller to ship item: " << item << endl;
        cout << "Seller sends item " << item << " to customer.\n";
    }
}
void goodsAndOrders() {
    cout << "Sending warehouse goods to customer...\n";
    cout << "Customer collects goods.\n";
    cout << "Seller confirms customer received the order.\n";
    cout << "Return (RTN) → End process.\n";
}

int main() {
    cout << "    Order Processing System    \n";

    // int n;
    // cout << "Enter number of items in the order: ";
    // cin >> n;

    // vector<string> items(n);
    // for (int i = 0; i < n; i++) {
    //     cout << "Enter name of item " << i + 1 << ": ";
    //     cin >> items[i];
    // }

    cout << "\nOrder placed successfully.\n";

    for (int i = 0; i < n; i++) {
        processItem(items[i]); 
    }
    goodsAndOrders();
    cout << "\nOrder process completed. STOP.\n";
    return 0;
}
