#include <iostream>
#include <string>
using namespace std;

int main()
{	
    // int marks[5] = {23,12,45,90,100};
    // cout<<marks[0];

    // marks[2] = 45;
    // cout<<marks[2];


    /* Extracting all elements at on go */
    // for(int i=0; i<5; i++){
    //     cout<<marks[i]<<endl;
    // }

    /* Write a program to calculate sum of first n numbers */
    string user_name,converter;
    int n,a;
    float sum_of_first_n_numbers;
    cout<<"Hello! What's your name?";
    cin>>user_name;
    cout<<"Hi "<<user_name<<"!"<<"Enter the number for calculating the sum: ";
    cin>>n;
    sum_of_first_n_numbers = (n*(n+1))/2;
    converter = to_string(sum_of_first_n_numbers);

    cout<<"Wo ho hoo!"<<user_name<<" The answer is "<<converter<<"!";
    cout<<"Click X on top right corner";
    cin>>a;
    return 0;
}