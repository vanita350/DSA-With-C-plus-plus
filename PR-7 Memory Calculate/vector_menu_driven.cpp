#include <iostream>
#include <vector>
using namespace std;

vector<int> num;
void addElement(int v)
{
    num.push_back(v);
}

int main()
{

    int ch, value, index, val, pos;
    while (1)
    {

        cout << "\n\n1. Add a number to the list" << endl;
        cout << "2. Display the list" << endl;
        cout << "3. Remove a last number from the list" << endl;
        cout << "4. insert the element you want to be insert " << endl;
        cout << "5.  show first element " << endl;
        cout << "6.  show last element " << endl;
        cout << "7. return element at given index " << endl;
        cout << "8. remove all element " << endl;
        cout << "9. check vector is empty or not " << endl;
        cout << "10. exit " << endl;

        cout << "Enter your choice :- ";
        cin >> ch;

        if (ch == 10)
        {
            cout << "--------Thank You !!-------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the value to be added to the list :- ";
            cin >> value;
            addElement(value);
            break;

        case 2:
            cout << "\n List of numbers are :-" << endl;
            for (int i = 0; i < num.size(); i++)
            {
                cout << num[i] << endl;
            }
            break;

        case 3:
            num.pop_back();
            cout << "After Remove last element :- " << endl;
            for (int i = 0; i < num.size(); i++)
            {
                cout << num[i] << endl;
            }

            break;
        case 4:

            cout << "enter the index you want to inserted :- ";
            cin >> index;
            cout << "Enter the value you want to insert :- ";
            cin >> val;

            num.insert(num.begin() + index, val);

            cout << "display :- " << endl;
            for (int i = 0; i < num.size(); i++)
            {
                cout << num[i] << endl;
            }
            break;

        case 5:

            cout << "show the first element :- " << num.front() << endl;
            break;
        case 6:
            cout << "show the last element :- " << num.back() << endl;
            break;

        case 7:
            cout << "enter the pos :- ";
            cin >> pos;

            cout << "Return The element at position :-  " << num.at(pos) << endl;
            break;

        case 8:
            num.clear();
            break;
        case 9:
            if (num.empty())
            {
                cout << "Vector is empty !!" << endl;
            }
            else
            {
                cout << "Vector is not empty !!" << endl;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}