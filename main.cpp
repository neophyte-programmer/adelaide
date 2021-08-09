#include <iostream>

using namespace std;

int addition(int a, int b)
{
 return (a+b);
}

int main()
{
     int a, b, answer;
     cout<<"Enter first number: ";
     cin>> a;
     cout<<"Enter second number: ";
     cin>> b;

     answer = addition(a,b);
     cout << answer;
    return 0;
}

