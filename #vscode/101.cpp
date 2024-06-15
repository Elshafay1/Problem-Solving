#include <iostream>
using namespace std;

int menu()
{
    int choice;
    cout << "Menu;\n1) Add 2 numbers\n2) Subtract 2 numbers\n3) Multiply 2 numbers\n4) Divide 2 numbers\n5) Exit\n \nEnter your menu choice [1 - 5]:";
    cin >> choice;

if


    return choice;
}

void add(int n1, int n2)
{
    cout << "a + b = " << n1 + n2;
}

int main()
{
    int total_operations = 0;
    double a, b;

    while (true)
    {
        int choice = menu();

        if (choice == 5)
            break;

        total_operations++;

        read_2_num(a, b);

        if (choice == 1)
            add(a, b);
        else if (choice == 2)
            subtract(a, b);
        else if (choice == 3)
            multiply(a, b);
        else if (choice == 4)
            divide(a, b);
    }
    cout << "Total operations: " << total_operations;

    return 0;
}