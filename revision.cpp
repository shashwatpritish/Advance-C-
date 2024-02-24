#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // Hello World Program
    // cout<<"Hello World";

    // Write a program to calculate radius of a circle
    // float area, radius;
    // int a;
    // cout << "Enter the radius of the circle: ";
    // cin >> radius;
    // area = 3.14159 * radius;
    // cout << "The area of the circle is " << area;
    // cin >> a;
    // Function
    // cout<<sum(2,3);
    // Switch Statement
    // Write a c++ program to identify waether a character is vowel or a consonant
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Convert character to lowercase for case-insensitive check
    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel." << endl;
        break;
    default:
        if (isalpha(ch))
        {
            cout << ch << " is a consonant." << endl;
        }
        else
        {
            cout << ch << " is not an alphabet." << endl;
        }
    }

    return 0;
}