#include <iostream>
using namespace std;

int main()
{	
    string name = "Shashwat";
    string* pointerOfName = &name;   // the variable pointerOfName is a pointer
    cout<<pointerOfName;
    return 0;
}