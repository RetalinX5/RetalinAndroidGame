

#include <iostream>
using namespace std;

int main()
{
    
    int   Temp;
    int  Numb1;
    int  Numb2;

    cout << "Please  enter your num1 ";
    cin >> Numb1;

    cout << "Please  enter your num2 ";
    cin >> Numb2;

    cout << "your numbers: " << Numb1 << "," << Numb2 << endl;

    Temp = Numb1;
    Numb1 = Numb2;
    Numb2 = Temp;

    cout << "Your swapped numbers: " << Numb1 << ", " << Numb2 << endl;

    return 0;
    


      
    }


