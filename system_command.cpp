#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{	
    /* Changing colour of output */
    cout<<"Output in Green";
    system("color 0a");

    /* Other windows commands */
    system("md testing");
    system("python wave.py"); // Install python for this command to execute
    return 0;
}