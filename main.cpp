#include <iostream>
#include<array>
using namespace std;
int main()

{
    int ordercode, quantity;
    char yesno;
    string order,icon;
    int money=0,pay,change;
    icon [1] = 16;

    do
    {


        cout << "\n\n	WELCOME TO VIRTUAL DRINK MACHINE SIMULATOR" <<icon[1];
        cout << "                \n\n\n Brand_Name ************************* Price ***************************** Supply";
        cout << "\n\n          1. Royal                        10 Pesos                              8  \n          2. Pepsi                         2 Pesos                               6 ";
        cout << "\n          3. Water                        20 Pesos                             10   \n          4. Coffee                       7.5 Pesos                            5 ";
        cout << "\n          5. Tea                            8.5 Pesos                            3  ";


        cout << "\n\n"<<icon[1]<<" Insert your Money (in pesos): ";
        cin  >> pay;

        cout << "\n"<<icon[1]<< " Choose your order(1-5): ";
        cin  >> ordercode;

        cout << "\n"<<icon[1]<< " Please Enter Quantity : ";
        cin  >> quantity;


        switch(ordercode){
            case 1:
                order = " Royal ";
                money = quantity * 10;
                break;
            case 2:
                order = " Pepsi";
                money = quantity * 2;
                break;
            case 3:
                order = " Water";
                money = quantity * 20;
                break;
            case 4:
                order = " Coffee";
                money = quantity * 7.5;
                break;
            case 5:
                order = " Tea";
                money = quantity * 8.5;
                break;

            default:
                cout << "Invalid Input, please try again";
                break;
        }

        if (pay < money )
        {
            cout << " \n       Insufficient funds. ";
            cout << "\n        We have returned your " <<pay <<" pesos";
        }

        else
        {

            cout << "\n\n Your order     : ";
            cout << quantity << " pcs - " << order <<endl;

            cout << " Total amount   : " << money << "pesos\n";

            change = pay - money;
            cout << " Change         : " <<change;
        }


        cout<<"\n\n"<<icon[1]<< " Do you want to order again? (y/n): ";
        cin>>yesno;
    }

    while(yesno == 'Y'|| yesno == 'y');

    cout <<"\n\n Good Bye! Thank you for using VIRTUAL DRINK MACHINE SIMULATOR!";

}
