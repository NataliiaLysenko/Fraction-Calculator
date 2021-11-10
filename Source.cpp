#include<iostream>
#include <cmath>
void sum();
void sub();
void mul();
void div();
char ch;
using namespace std;

int main()
{
    do {
        cout << "Enter the operator to Perform (+,-,/,*)" << endl;
        char choice;
        cin >> choice;
        switch (choice)
        {
        case '+':
            sum();
            break;
        case '-':
            sub();
            break;
        case '*':
            mul();
            break;
        case '/':
            div();
            break;
        }
        cout << "\n" << "Want to Calculate Again (y/n)?" << endl;
        cin >> ch;

    } 
    while (ch == 'y');
    system("pause");
    return 0;

}
void sum()

{
    int num1, num2, num3, num4, a, b, numerator;
    char bar;
    int lcm;
    cout << "Enter the Fraction no1 to be Add" << endl;
    cin >> num1 >> bar >> num2;
    cout << "+";
    cout << "Enter the Fraction no2 to be Add" << endl;
    cin >> num3 >> bar >> num4;
    
    if (num2 == num4)
    {
        lcm = num4;
        numerator = num1 + num3;
        cout << "Answer= ";
        cout << numerator << "/" << lcm;
    }

    else
    {
        lcm = num2 * num4;
        a = num1 * num4;
        b = num3 * num2;
        numerator = a + b;
        cout << "Answer= ";
        cout << numerator << "/" << lcm;
    }
}

void sub()
{
    int num1, num2, num3, num4, a, b, numerator;
    char bar;
    int lcm;
    cout << "Enter the Fraction no1 to be Sub" << endl;
    cin >> num1 >> bar >> num2;
    cout << "-";
    cout << "Enter the Fraction no2 to be Sub" << endl;
    cin >> num3 >> bar >> num4;

    if (num2 == num4)
    {
        lcm = num4;
        numerator = num1 - num3;

        cout << "Answer= ";
        cout << numerator << "/" << lcm;
    }

    else
    {
        lcm = num2 * num4;
        a = num4 * num1;
        b = num3 * num2;
        numerator = a - b;

        cout << "Answer= ";
        cout << numerator << "/" << lcm;
    }
}

void mul()
{
    int num1, num2, num3, num4, a, b, numerator;
    char bar;
    int lcm;
    cout << "Enter the Fraction no1 to be Multiply" << endl;
    cin >> num1 >> bar >> num2;
    cout << "*";
    cout << "Enter the Fraction no2 to be Multiply" << endl;
    cin >> num3 >> bar >> num4;

    lcm = num2 * num4;
    numerator = num1 * num3;

    cout << "Answer= ";
    cout << numerator << "/" << lcm;
}

void div()
{
    int num1, num2, num3, num4, a, b, numerator;
    char bar;
    int lcm;
    cout << "Enter the Fraction no1 to be Divide" << endl;
    cin >> num1 >> bar >> num2;
    cout << "/";
    cout << "Enter the Fraction no2 to be Divide" << endl;
    cin >> num3 >> bar >> num4;
    if (num3 == 0 && num4 == 0)
    {
        cout << "Invalid fraction! ";
    }
    else {
        a = num4;
        b = num3;
        numerator = num1 * a;
        lcm = num2 * b;
        
        cout << "Answer= ";
        cout << numerator << "/" << lcm;
    }

}