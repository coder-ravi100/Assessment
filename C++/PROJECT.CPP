#include <iostream>          
using namespace std;        

// ---------------- DISPLAY FUNCTION ----------------
// Order complete hone ke baad common message dikhane ke liye
void display()
{
    cout << "Your Order Will Be Delivered In 40 Minutes !" << endl;
    cout << "Thank You For Ordering From Tops Tech....!" << endl;
}

// ---------------- PIZZA MENU ----------------
void pizzaMenu()
{
    int pizaachoice, qty;    // User ka pizza choice aur quantity
    int price = 0;           // Pizza ka price (initially 0)

    // Pizza menu display
    cout << "\n--- Pizza Menu ---" << endl;
    cout << "1. Margherita Pizza      Rs.180" << endl;
    cout << "2. Farmhouse Pizza       Rs.240" << endl;
    cout << "3. Veg Loaded Pizza      Rs.260" << endl;
    cout << "4. Cheese Burst Pizza    Rs.300" << endl;

    // User se pizza choice lena
    cout << "Please Enter Which Pizza you would like to have: ";
    cin >> pizaachoice;

    // Quantity input
    cout << "Please Enter Quantity: ";
    cin >> qty;

    // Choice ke according price set karna
    switch (pizaachoice)
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
            return;          // galat choice ho to function exit
    }

    // Total bill calculation
    int total = price * qty;
    cout << "Your Total Bill is: Rs." << total << endl;

    display();               // Common message call
}

// ---------------- BURGER MENU ----------------
void burgerMenu()
{
    int burgerchoice, qty;
    int price = 0;

    cout << "\n--- Burger Menu ---" << endl;
    cout << "1. Veg Burger        Rs.80" << endl;
    cout << "2. Cheese Burger     Rs.100" << endl;
    cout << "3. Paneer Burger     Rs.130" << endl;
    cout << "4. Jumbo Burger      Rs.160" << endl;

    cout << "Please Enter Which Burger you would like to have: ";
    cin >> burgerchoice;

    cout << "Please Enter Quantity: ";
    cin >> qty;

    switch (burgerchoice)
    {
        case 1: 
            price = 80; break;
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

    int total = price * qty;
    cout << "Your Total Bill is: Rs." << total << endl;
    display();
}

// ---------------- SANDWICH MENU ----------------
void sandwichMenu()
{
    int sandwichchoice, qty;
    int price = 0;

    cout << "\n--- Sandwich Menu ---" << endl;
    cout << "1. Club Sandwich          Rs.240" << endl;
    cout << "2. Veg Crispy Sandwich    Rs.160" << endl;
    cout << "3. Extreme Veg Sandwich   Rs.100" << endl;

    cout << "Please Enter Which Sandwich you would like to have: ";
    cin >> sandwichchoice;

    cout << "Please Enter Quantity: ";
    cin >> qty;

    switch (sandwichchoice)
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

    int total = price * qty;
    cout << "Your Total Bill is: Rs." << total << endl;
    display();
}

// ---------------- ROLLS MENU ----------------
void rollMenu()
{
    int rollschoice, qty;
    int price = 0;

    cout << "\n--- Rolls Menu ---" << endl;
    cout << "1. Veg Roll              Rs.90" << endl;
    cout << "2. Paneer Roll           Rs.120" << endl;
    cout << "3. Egg Roll              Rs.110" << endl;
    cout << "4. Chicken Roll          Rs.150" << endl;
    cout << "5. Chicken Cheese Roll   Rs.180" << endl;

    cout << "Please Enter Which Roll you would like to have: ";
    cin >> rollschoice;

    cout << "Please Enter Quantity: ";
    cin >> qty;

    switch (rollschoice)
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

    int total = price * qty;
    cout << "Your Total Bill is: Rs." << total << endl;
    display();
}

// ---------------- BIRYANI MENU ----------------
void biryaniMenu()
{
    int biryanichoice, qty;
    int price = 0;

    cout << "\n--- Biryani Menu ---" << endl;
    cout << "1. Veg Biryani            Rs.150" << endl;
    cout << "2. Chicken Biryani        Rs.220" << endl;
    cout << "3. Chicken Dum Biryani    Rs.260" << endl;
    cout << "4. Mutton Biryani         Rs.320" << endl;
    cout << "5. Hyderabadi Biryani     Rs.280" << endl;

    cout << "Please Enter Which Biryani you would like to have: ";
    cin >> biryanichoice;

    cout << "Please Enter Quantity: ";
    cin >> qty;

    switch (biryanichoice)
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

    int total = price * qty;
    cout << "Your Total Bill is: Rs." << total << endl;
    display();
}

// ---------------- MAIN FUNCTION ----------------
int main()
{
    string name;
    int choice;

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

        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
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
                rollMenu(); 
                break;
            case 5: 
                biryaniMenu(); 
                break;
            case 6:
                cout << "Would You Like To Order Anything Else" << endl;
                break;
            default:
                cout << "Invalid Choice! Try again." << endl;
        }

    } while (choice != 6);   // Exit condition

    return 0;                // Program end
}
