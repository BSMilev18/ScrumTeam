#include <iostream>
using namespace std;

void Sechenie()
{
    int n, m;
    int* a, * b;

    cout << "Enter the amount of numbers of the first set ";
    cin >> n;
    a = new int[n];

    cout << "Enter the numbers of the first set ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the amount of numbers of the second set ";
    cin >> m;
    b = new int[m];

    cout << "Enter the numbers of the second set ";
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    cout << "The section of the two sets is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
    cout << endl;

}

bool Podmnojestvo()
{
    int n, m;
    int* a, * b;

    cout << "Enter the amount of numbers of the first set ";
    cin >> n;
    a = new int[n];

    cout << "Enter the numbers of the first set ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the amount of numbers of the second set ";
    cin >> m;
    b = new int[m];

    cout << "Enter the numbers of the second set ";
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == m) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

void Obedinenie()
{
    int* a, * b;
    int n;
    int m;

    cout << "Enter the first amount of numbers ";
    cin >> n;

    a = new int[n];

    cout << "Enter the first set of numbers ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the second amount of numbers ";
    cin >> m;

    b = new int[m];

    cout << "Enter the second set of numbers ";
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int c[30];

    for (int i = 0; i < m + n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < m)
            {
                c[i] = b[j];
            }
            else
            {
                a[i] = b[i - m];
            }
        }
    }
    cout << "Sets after merging ";
    for (int i = 0; i < m + n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Razlika()
{
    cout << "Under devolpment " << endl;
}

void Output(int izbor) {
    switch (izbor) {
    case 1:
        Sechenie();
        break;
    case 2:
        if (Podmnojestvo()) {
            cout << "The second set is a subset of the first set" << endl;
        }
        else {
            cout << "The second set is not a subset of the first set" << endl;
        }
        break;
    case 3:
        Obedinenie();
        break;
    case 4:
        Razlika();
        break;
    }
}

void menu(int start) {
    int izbor;
    string izbor2;
    while (start == 1) {
        cout << "What would you like to do with this set of numbers?" << endl;
        cout << "================================" << endl;
        cout << "1. Cut" << endl;
        cout << "2. Subsets" << endl;
        cout << "3. Unification" << endl;
        cout << "4. Difference" << endl;
        cout << "5. Quit" << endl;
        cout << "Your choise here: ";
        cin >> izbor;
        if (izbor == 5) {
            cout << "Thanks for playing! ";
            break;
        }
        else if (izbor > 4 || izbor < 1)
        {
            cout << "Incorrect input" << endl;
        }
        else {
            Output(izbor);
        }
        cout << "Do you want to play again ?" << endl;
        cout << endl;
        cout << "Yes or No " << endl;
        cout << "Write your decision here ";
        cin >> izbor2;
        if (izbor2 == "No") {
            break;
        }
        cout << endl;
    }
}

int main()
{
    int izbor, start;
    cout << "Welcome to Sets game. Press 1 to start: ";
    cin >> start;
    menu(start);
}
