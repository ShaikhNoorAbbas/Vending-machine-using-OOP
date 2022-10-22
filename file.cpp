#include <iostream>
#include <math.h>
using namespace std;
class Number_of_Items
{
public:
    long num;
    void num_item_input()
    {
        cout << endl
             << "Enter A Number of Items you want: ";
        cin >> num;
    }
};
class Pizza : public Number_of_Items
{
public:
    static int Npizza;
    static int Cpizza;
    long amount;
    long total_price;
    void pizzaProcess()
    {
        int choice;
        cout << endl
             << "\t\t\t Select Flavour of Your Pizza " << endl;
        cout << endl
             << "1 Press (1) if you Want Normal Pizza Price { $50 " << endl;
        cout << endl
             << "2 Press (2) if you Want Chesse Pizza Price { $100 }" << endl;
        cout << endl
             << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl
                 << "\t\t\t So You Selected Normal Pizza " << endl;
            cout << endl
                 << "Number of Pizza you Want: " << num;
            cout << endl
                 << "Price of a Normal Pizza: " << Npizza;
            cout << endl
                 << "\t\t\t Let's Start Payment Process.... " << (char)(1);
            total_price = num * Npizza;
            cout << endl
                 << "Total Amount you Have to pay: " << total_price;
            cout << endl
                 << "Enter Amount: ";
            cin >> amount;
            if (amount < total_price)
            {
                cout << endl
                     << "You Have To Pay More: " << abs(total_price - amount);
                long value;
                value = invalid(total_price);
                if (value == total_price)
                {
                    cout << endl
                         << "Paid Successfully " << (char)(2);
                }
                else
                {
                    cout << endl
                         << "Paid Successfully \n here is your Change: " << abs(value - total_price);
                }
            }
            else
            {
                if (amount == total_price)
                {
                    cout << endl
                         << "Paid Successfully " << (char)(2);
                }
                else
                {
                    cout << endl
                         << "Paid Successfully \n here is your Change: " << abs(amount - total_price);
                }
            }
            break;
        case 2:
            cout << endl
                 << "\t\t\t So You Selected Cheese Pizza " << endl;
            cout << endl
                 << "Number of Pizza you Want: " << num;
            cout << endl
                 << "Price of a Normal Pizza: " << Cpizza;
            cout << endl
                 << "\t\t\t Let's Start Payment Process.... " << (char)(1);
            total_price = num * Cpizza;
            cout << endl
                 << "Total Amount you Have to pay: " << total_price;
            cout << endl
                 << "Enter Amount: ";
            cin >> amount;
            if (amount < total_price)
            {
                cout << endl
                     << "You Have To Pay More: " << abs(total_price - amount);
                long value;
                value = invalid(total_price);
                if (value == total_price)
                {
                    cout << endl
                         << "Paid Successfully " << (char)(2);
                }
                else
                {
                    cout << endl
                         << "Paid Successfully \n here is your Change: " << abs(value - total_price);
                }
            }
            else
            {
                if (amount == total_price)
                {
                    cout << endl
                         << "Paid Successfully " << (char)(2);
                }
                else
                {
                    cout << endl
                         << "Paid Successfully \n here is your Change: " << abs(amount - total_price);
                }
            }
            break;
        default:
            cout << endl
                 << "Please Enter Valid Choice " << (char)(2) << endl;
        }
    }
    long invalid(int total)
    {
    start:
        cout << endl
             << "Enter Amount: ";
        cin >> amount;
        if (amount < total)
        {
            cout << endl
                 << "You Have to Pay More: " << abs(total - amount);
            goto start;
        }
        else
        {
            return amount;
        }
    }
};
int Pizza::Npizza = 50;
int Pizza::Cpizza = 100;
int main()
{
    Pizza obj;
    obj.num_item_input();
    obj.pizzaProcess();
    return 0;
}