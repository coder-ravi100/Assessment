//--------------------------------------
// FOOD ORDERING SYSTEM 
//--------------------------------------

#include <iostream>
using namespace std;

class FoodOrder
{
private:
    int choice, qty, price;

public:
    // Common message
    void displayMessage()
    {
        cout << "Your Order Will Be Delivered In 40 Minutes!" << endl;
        cout << "Thank You For Ordering From Tops Tech...!" << endl;
    }

    // ---------------- PIZZA MENU ----------------
    void pizzaMenu()
    {
        price = 0;
        cout << "\n--- Pizza Menu ---" << endl;
        cout << "1. Margherita Pizza      Rs.180" << endl;
        cout << "2. Farmhouse Pizza       Rs.240" << endl;
        cout << "3. Veg Loaded Pizza      Rs.260" << endl;
        cout << "4. Cheese Burst Pizza    Rs.300" << endl;

        cout << "Enter Pizza Choice: ";
        cin >> choice;
        cout << "Enter Quantity: ";
        cin >> qty;

        switch (choice)
        {
            case 1: 
                price = 180; 
                break;
            case 2: 
                price = 240; 
                break;
            case 3: 
                price = 260; 
                break;
            case 4: 
                price = 300; 
                break;
            default:
                cout << "Invalid Pizza Choice!" << endl;
                return;
        }
        cout <<"--------------------------------"<<endl;
        cout << "Total Bill: Rs." << price * qty << endl;
        cout <<"---------------------------------"<<endl;

        displayMessage();
    }

    // ---------------- BURGER MENU ----------------
    void burgerMenu()
    {
        price = 0;
        cout << "\n--- Burger Menu ---" << endl;
        cout << "1. Veg Burger        Rs.80" << endl;
        cout << "2. Cheese Burger     Rs.100" << endl;
        cout << "3. Paneer Burger     Rs.130" << endl;
        cout << "4. Jumbo Burger      Rs.160" << endl;

        cout << "Enter Burger Choice: ";
        cin >> choice;
        cout << "Enter Quantity: ";
        cin >> qty;

        switch (choice)
        {
            case 1: 
                price = 80; 
                break;
            case 2: 
                price = 100; 
                break;
            case 3: 
                price = 130; 
                break;
            case 4: 
                price = 160; 
                break;
            default:
                cout << "Invalid Burger Choice!" << endl;
                return;
        }

        cout <<"---------------------------------"<<endl;
        cout << "Total Bill: Rs." << price * qty << endl;
        cout <<"---------------------------------"<<endl;
        displayMessage();
    }

    // ---------------- SANDWICH MENU ----------------
    void sandwichMenu()
    {
        price = 0;
        cout << "\n--- Sandwich Menu ---" << endl;
        cout << "1. Club Sandwich        Rs.240" << endl;
        cout << "2. Veg Crispy Sandwich  Rs.160" << endl;
        cout << "3. Extreme Veg Sandwich Rs.100" << endl;

        cout << "Enter Sandwich Choice: ";
        cin >> choice;
        cout << "Enter Quantity: ";
        cin >> qty;

        switch (choice)
        {
            case 1: 
                price = 240; 
                break;
            case 2: 
                price = 160; 
                break;
            case 3: 
                price = 100; 
                break;
            default:
                cout << "Invalid Sandwich Choice!" << endl;
                return;
        }

        cout <<"---------------------------------"<<endl;
        cout << "Total Bill: Rs." << price * qty << endl;
        cout <<"---------------------------------"<<endl;

        displayMessage();
    }

    // ---------------- ROLLS MENU ----------------
    void rollsMenu()
    {
        price = 0;
        cout << "\n--- Rolls Menu ---" << endl;
        cout << "1. Veg Roll            Rs.90" << endl;
        cout << "2. Paneer Roll         Rs.120" << endl;
        cout << "3. Egg Roll            Rs.110" << endl;
        cout << "4. Chicken Roll        Rs.150" << endl;
        cout << "5. Chicken Cheese Roll Rs.180" << endl;

        cout << "Enter Roll Choice: ";
        cin >> choice;
        cout << "Enter Quantity: ";
        cin >> qty;

        switch (choice)
        {
            case 1: 
                price = 90; 
                break;
            case 2: 
                price = 120; 
                break;
            case 3: 
                price = 110; 
                break;
            case 4: 
                price = 150; 
                break;
            case 5: 
                price = 180; 
                break;
            default:
                cout << "Invalid Roll Choice!" << endl;
                return;
        }

        cout <<"---------------------------------"<<endl;
        cout << "Total Bill: Rs." << price * qty << endl;
        cout <<"---------------------------------"<<endl;
        
        displayMessage();
    }

    // ---------------- BIRYANI MENU ----------------
    void biryaniMenu()
    {
        price = 0;
        cout << "\n--- Biryani Menu ---" << endl;
        cout << "1. Veg Biryani          Rs.150" << endl;
        cout << "2. Chicken Biryani      Rs.220" << endl;
        cout << "3. Chicken Dum Biryani  Rs.260" << endl;
        cout << "4. Mutton Biryani       Rs.320" << endl;
        cout << "5. Hyderabadi Biryani   Rs.280" << endl;

        cout << "Enter Biryani Choice: ";
        cin >> choice;
        cout << "Enter Quantity: ";
        cin >> qty;

        switch (choice)
        {
            case 1: 
                price = 150; 
                break;
            case 2: 
                price = 220; 
                break;
            case 3: 
                price = 260;
                 break;
            case 4: 
                price = 320; 
                break;
            case 5: 
                price = 280; 
                break;
            default:
                cout << "Invalid Biryani Choice!" << endl;
                return;
        }
        cout <<"---------------------------------"<<endl;
        cout << "Total Bill: Rs." << price * qty << endl;
        cout <<"---------------------------------"<<endl;

        displayMessage();
    }

    // ---------------- MAIN MENU ----------------
    void mainMenu()
    {
        int option;
        string name;

        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Welcome " << name << " To Tops Tech" << endl;

        do
        {
            cout << "\n----- MAIN MENU -----" << endl;
            cout << "1. Pizza" << endl;
            cout << "2. Burger" << endl;
            cout << "3. Sandwich" << endl;
            cout << "4. Rolls" << endl;
            cout << "5. Biryani" << endl;
            cout << "6. Exit" << endl;

            cout << "Enter Your Choice: ";
            cin >> option;

            switch (option)
            {
                case 1: 
                    pizzaMenu(); 
                    break;
                case 2: 
                    burgerMenu(); 
                break;
                case 3: 
                    sandwichMenu(); 
                    break;
                case 4: 
                    rollsMenu(); 
                    break;
                case 5: 
                    biryaniMenu(); 
                    break;
                case 6: 
                    cout << "Thank You For Visiting!" << endl; 
                    break;
                default: cout << "Invalid Choice! Try Again." << endl;
            }

        } while (option != 6);
    }
};

int main()
{
    FoodOrder order;     // Object creation
    order.mainMenu();    // Start system
    return 0;
}
