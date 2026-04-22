#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"ENTER A VALUE TO CHECK:";
    cin >> n;
    if(n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}
