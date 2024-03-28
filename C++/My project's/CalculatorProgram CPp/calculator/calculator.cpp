#include <iostream>

int main() {
    using namespace std;
    char operation;
    double num1, num2, result;
    double remainingProduct = 0.0;  // تمثل المنتج المتبقي



    cout << "Enter the first number: ";
    cin >> num1;


    // إدخال العملية والأرقام
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    // إذا كان هناك منتج متبقي، يتم طرحه من الرقم الثاني
    num2 -= remainingProduct;

    // إجراء العملية الحسابية بناءً على العملية
    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        // التحقق من أن المقام ليس صفر
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cerr << "Error: Division by zero is undefined." << std::endl;
            return 1;  // الخروج برمز خطأ
        }
        break;
    default:
        cerr << "Error: Invalid operation." << std::endl;
        return 1;  // الخروج برمز خطأ
    }

    // إخراج النتيجة
    cout << "Result: " << result << std::endl;

    ENETRESET;

  


    return 0;
}
