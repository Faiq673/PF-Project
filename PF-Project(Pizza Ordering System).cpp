#include <iostream>
using namespace std;
int main() {
    int choice, qty;
    char again = 'y';
    float total = 0;
    int Veg = 500;
    int pepperoni = 700;
    int bbqChicken = 900;
    float taxRate = 0.08;  
    cout << "<<====== PIZZA ORDERING SYSTEM ======>>" << endl;
    while (again == 'y' || again == 'Y') {
        cout << "<---- MENU ---->"<<endl;
        cout << "1. Veg Pizza            - Rs." << Veg << endl;
        cout << "2. Pepperoni Pizza      - Rs." << pepperoni << endl;
        cout << "3. BBQ Chicken Pizza    - Rs." << bbqChicken << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        switch (choice) {
        case 1:
            total += Veg * qty;
            break;
        case 2:
            total += pepperoni * qty;
            break;
        case 3:
            total += bbqChicken * qty;
            break;
        default:
            cout << "Invalid choice! Try again.";
            continue;
        }
        cout << "Do you want to order again?" << "If yes press y else n:";
        cin >> again;
    }
    float tax = total * taxRate;
    float grandTotal = total + tax;
    cout << "<<======= BILL SUMMARY =======>>";
    cout << "Subtotal: Rs." << total << endl;
    cout << "Tax (8%): Rs." << tax << endl;
    cout << "Grand Total: Rs." << grandTotal << endl;
    cout << "<<=============================>>"<<endl;
    cout << "Thank you for ordering!";
    return 0;
}
