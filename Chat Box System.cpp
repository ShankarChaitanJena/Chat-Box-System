#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
class Input
{
protected:
    int ch, ch2;
    
    string temp, ID, email_id, Mob, option, date, adress;
    
    fstream obj;

public:
    void nLine(int n)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            cout << endl;
            obj << endl;
        }
    }
    void tab(int n)
    {
        for (int i = 0; i < (n - 1); i++)
        {

            cout << "\t";
            obj << "\t";
        }
    }

    void input()
    {
        switch (ch)
        {
        case 1:
            option = "Details";
            break;
        case 2:
            option = "Cancel";
            break;
        case 3:
            option = "exchange";
            break;
        case 4:
            option = "Return";
            break;
        case 5:
            option = "fast delivery ";
            break;
        case 6:
            option = "extend the delivery date";
            break;
        case 7:
            option = "Change your delivery address";
            break;
        }

        cout << "ok :)  Enter your order ID : ";
        obj << "ok :)  Enter your order ID : ";
        cin >> ID;
        obj << ID;
        nLine(2);
        tab(15);

        cout << "Mobile No.: +91 ";
        obj << "Mobile No.: +91 ";
        cin >> Mob;
        obj<<Mob;
        nLine(2);
        tab(15);
        cout << "email ID : ";
        obj<< "email ID : ";
        
        cin >> email_id;
        obj<<email_id;
        nLine(2);
        tab(15);
        switch (ch)
        {
        case 6:
            cout << "Delivery date :";
            cin >> date;
            break;
        case 7:
            cout << "Enter new delivery address ";
            cin >> adress;
            break;
        }
        sleep(1);
        nLine(3);
        cout << "We are sending Your order : " << ID;
        obj<< "We are sending Your order : " << ID;
        nLine(3);
        cout << option << " & updates in sms : " << Mob << " & email ID : " << email_id;
        obj << option << " & updates in sms : " << Mob << " & email ID : " << email_id;
        nLine(5);
        sleep(1);
        cout << "For\n1. Continue" << endl
             << "2. exit" << endl;
        nLine(2);
        tab(3);
        cout << "Any one : ";
        obj<<"Any one: ";
        cin >> ch2;
        obj.close();
        switch (ch2)
        {
        case 1:
            cout << "ok ...." << endl;
            nLine(3);
            sleep(1);
            break;
        case 2:

            exit(1);
            break;
            obj.close();
        }
    }
};

class chat : public Input
{
public:
    void write()
    {
        // fstream obj;
        string line;
        char fname[100];
        nLine(15);
        tab(8);
        cout << "Enter Your's name: ";
        gets(fname);
        temp = fname;
        strcat(fname, ".txt");
        line = fname;
        obj.open(fname, ios::app);
        system("cls");
        nLine(2);
        cout << "Hello!  " << temp << "\nI'm Aliz ...\nHow can I help you... :) ";
        obj << "Hello!  " << temp << "\nI'm Aliz ...\nHow can I help you... :) ";

        nLine(3);
        sleep(1);
        while (1)
        {
            cout << "We are providing some services in these companies ( Amazone, Flipcart, Myntra, Zamato , Messo , swigy ) ..." << endl
                 << "1. Show your order details " << endl
                 << "2. Want to cancel your order :(" << endl
                 << "3. Want to exchange your order" << endl
                 << "4. Return your order :(" << endl
                 << "5. Want to fast delivery :)" << endl
                 << "6. Want to extend the delivery date :)" << endl
                 << "7. Change your delivery address" << endl
                 << endl
                 << endl
                 << "9. Contact our costomer care |::| " << endl
                 << endl
                 << endl;

            sleep(1);
            cout << "\t\tClick your choice : ";
            // freopen(fname, "a", stdin);
            // freopen(fname, "a", stdout);
            // freopen(fname, "a", stdin);
            cin >> ch;
            switch (ch)
            {
            case 1:
                nLine(2);
                tab(15);
                input();
                break;
            case 2:
                nLine(2);
                tab(15);
                input();
                break;
            case 3:
                nLine(2);
                tab(15);
                input();
                break;
            case 4:
                nLine(2);
                tab(15);
                input();
                break;
            case 5:
                nLine(2);
                tab(15);
                input();
                break;
            case 6:
                nLine(2);
                tab(15);
                input();
                break;
            case 7:
                nLine(2);
                tab(15);
                input();
                break;
            default:
                break;
            }
        }
        // freopen(fname, "a", stdin);
        // obj.close();
    }
};
// class A: public
int main()
{
    chat os;

    os.write();
    // obj.in();
    // Input obj;
    // obj
    return 0;
}
