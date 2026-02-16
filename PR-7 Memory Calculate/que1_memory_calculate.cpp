#include <iostream>
#include <vector>

using namespace std;

template <class T>

class MemoryCalculate
{
private:
    int id;
    string name;

public:
    MemoryCalculate(int i, string n)
    {
        id = i;
        name = n;
    }
    T getid()
    {
        return id;
    }
    void display()
    {
        cout << "ID :- " << id << " NAME :- " << name << endl;
    }
};

int main()
{
    vector<MemoryCalculate<int>> students;
    int ch, id, count;
    string name;
    while (1)
    {
        cout << "\nStudent Management System Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 5)
        {
            cout << "----------- Thank You --------------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the id :- ";
            cin >> id;
            cout << "Enter the name :-";
            cin >> name;
            students.push_back(MemoryCalculate<int>(id, name));

            cout << "------------ Add Suessfully ----------" << endl;

            break;

        case 2:

            cout << "------------ Display All ------------" << endl;

            for (int i = 0; i < students.size(); i++)
            {
                students[i].display();
            }

            break;

        case 3:
            cout << "Enter the ID to remove :- ";
            cin >> id;
            count = 0;
            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getid() == id)
                {
                    count = 1;
                    students[i] = students[students.size() - 1];
                    students.pop_back();
                }
            }
            if (count == 0)
            {
                cout << "Id Is Not Found !!";
            }

            cout << "------------ Remove Suessfully ------------" << endl;

            break;

        case 4:

            cout << "Enter the ID to search :- ";
            cin >> id;
            count = 0;
            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getid() == id)
                {
                    count = 1;
                    students[i].display();
                }
            }
            if (count == 0)
            {
                cout << "Id Is Not Found !!";
            }

            cout << "------------ search Suessfully ------------" << endl;

            break;
        }
    }
    return 0;
}