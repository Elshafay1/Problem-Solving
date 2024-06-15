#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name[50];
    int age[50];
    int salary[50];
    char gender[50];
    int i = 0;
    while (true)
    {

        cout << "\nEnter your choice: \n1) Add new employee \n2) Print all employees \n3) Delete by age \n4) Update Salary by name\n";

        int n;
        cin >> n;

        if (n == 1)
        {
            bool full = 1;
            for (int k = 0; k < i; k++)
            {
                if (age[k] == -1)
                {
                    cout << "Enter name: ";
                    cin >> name[k];
                    cout << "Enter age: ";
                    cin >> age[k];
                    cout << "Enter salary: ";
                    cin >> salary[k];
                    cout << "Enter gender (M/F): ";
                    cin >> gender[k];

                    full = 0;
                    break;
                }
            }

            if (full)
            {
                cout << "Enter name: ";
                cin >> name[i];
                cout << "Enter age: ";
                cin >> age[i];
                cout << "Enter salary: ";
                cin >> salary[i];
                cout << "Enter gender (M/F): ";
                cin >> gender[i];
                i++;
            }
        }
        else if (n == 2)
        {
            for (int k = 0; k < i; k++)
            {
                if (age[k] != -1)
                {
                    cout << name[k] << " " << age[k] << " "
                         << salary[k] << " " << gender[k] << "     ,its k: " << k << endl;
                }
            }
        }
        else if (n == 3)
        {
            cout << "Enter start and end age: ";
            int start, end;
            cin >> start >> end;

            for (int k = 0; k < i; k++)
            {
                if (age[k] >= start && age[k] <= end)
                {

                    age[k] = -1;
                }
            }
        }
        else if (n == 4)
        {
            cout << "Enter the name and salary: ";
            string byname;
            int upsalary;
            cin >> byname >> upsalary;
            for (int k = 0; k < i; k++)
            {
                if (byname == name[k])
                {
                    salary[k] = upsalary;
                }
            }
        }
        else
        {
            cout << "invalide value";
        }
    }
}
