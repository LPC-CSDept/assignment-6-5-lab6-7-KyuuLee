//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &, int &, int &);
void swaptwo(int &, int &);
// complete two functions
void getinput(int &num1, int &num2, int &num3)
{
        cout << "Enter your input ( 3 integers )\n";
        cin >> num1 >> num2 >> num3;
}
void swaptwo(int &i, int &j)
{
        int tmp;
        tmp = i;
        i = j;
        j = tmp;
}
void swap(int &num1, int &num2, int &num3)
{
        swaptwo(num1, num2);
        swaptwo(num1, num3);
}