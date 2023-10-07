#include <iostream>
using namespace std;

int main(){
    float a,b,c,epsilon;

    cout << "Enter two numbers with two different signs." << endl;
    cout << "Enter num1 (negative): ";
    cin >> a;
        if(a>0)
        {
        cout << "invalid";
        return 0;
        }
    cout << endl;

    cout << "Enter num2 (positive): ";
    cin >> b;
        if(b<0)
        {
        cout << "invalid";
        return 0;
        }
    cout << endl;

    cout << "Enter a value for epsilon: ";
    cin >> epsilon;
    cout << endl;

    while ((b-c)<=epsilon)
    {
        c = (b+a)/2;

        if ((b*c) <= 0)
        {
            c = b;
        }

        else if ((a*c) > 0)
        {
            c = a;
        }
    }

    cout << "The root is " << c << endl;

}
