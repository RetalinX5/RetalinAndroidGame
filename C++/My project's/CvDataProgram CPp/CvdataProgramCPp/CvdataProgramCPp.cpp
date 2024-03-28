
#include <iostream>

using namespace std;

int main()
{
    
// (This is for printing information only,
// it does not have an input pattern for the user )


  /*
    string Name = "Mohamed Ali-Sefrine";
    int Age = 27;
    string City = "Aleppo";
    string Country = "Syria";
    float  MonthlySalary = 650;
    char Gender = 'M';
    bool  isMarried = true;
    float YearlySalary = MonthlySalary * 12;

    cout << "********************************************\n";
    cout << "Age:  " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
   cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
   cout << "Married: " << isMarried << endl;
  cout << "********************************************\n";
  */

  //  (this has an input pattern for the user
    //  and then prints personal information.)
    string Name;
    int Age;
    string City;
    string Country;
    float  MonthlySalary;
    char Gender;
    bool  isMarried;

    cout << "----------------------" << endl;
    cout << "Please Enter Your name?" << endl;
    cout << "----------------------" << endl;
    cin >> Name;

    cout << "----------------------" << endl;
    cout << "Please Enter Your Age?" << endl;
    cout << "----------------------" << endl;
    cin >> Age;

    cout << "----------------------" << endl;
    cout << "Please Enter Your city?" << endl;
    cout << "----------------------" << endl;
    cin >> City;

    cout << "----------------------" << endl;
    cout << "Please Enter Your coutry?" << endl;
    cout << "----------------------" << endl;
    cin >> Country;

    cout << "----------------------" << endl;
    cout << "Please Enter Your MonthlSalary?" << endl;
    cout << "----------------------" << endl;
    cin >> MonthlySalary;

    cout << "----------------------" << endl;
    cout << "Please Enter Your Gender M\\F ?" << endl;
    cout << "----------------------" << endl;
    cin >> Gender;


    cout << "----------------------" << endl;
    cout << "Are You married? 1\\0 ?" << endl;
    cout << "----------------------" << endl;
    cin >> isMarried;

    cout << "Age:  " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "********************************************\n";



    return 0;
}



