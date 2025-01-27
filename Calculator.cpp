#include<bits/stdc++.h>
using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i = 2; i <= x; i++){
        fact *= i;
    }
    return fact;
}

int combination(int n, int r){
    int ncr;
    ncr = factorial(n) / (factorial(n - r) * factorial(r));
    return ncr;
}

int permutation(int n, int r){
    int npr;
    npr = factorial(n) / factorial(n - r);
    return npr;
}

int main(){
    double a, b;
    float d;
    int choice;
    cout << "Enter the Operands: ";
    cin >> a >> b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square root\n";
    cout << "7. Cube root\n";
    cout << "8. Natural Log (ln)\n";
    cout << "9. Log base 10\n";
    cout << "10. Factorial\n";
    cout << "11. Epsilon\n";
    cout << "12. Floor\n";
    cout << "13. Exponential\n";
    cout << "14. Abs\n";
    cout << "15. sin\n";
    cout << "16. sin Inverse\n";
    cout << "17. cos\n";
    cout << "18. cos Inverse\n";
    cout << "19. tan\n";
    cout << "20. tan Inverse\n";
    cout << "21. Percentage\n";
    cout << "22. nPr\n";
    cout << "23. nCr\n";
    cout << "24. ln\n";
    cout << "25. Absolute\n";
    cout << "26. ceil\n";
    cout << "27. Round\n";
    cout << "28. Degree to Radian\n";
    cout << "29. Radian to Degree\n";
    cout << "30. Inverse\n";
    cout << "Enter Operation: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << a + b;
            break;

        case 2:
            cout << a - b;
            break;

        case 3:
            cout << a * b;
            break;

        case 4:
            if (b == 0) {
                cout << "Error: Division by zero!";
            } else {
                cout << a / b;
            }
            break;

        case 5:
            cout << pow(a, b);
            break;

        case 6:
            cout << sqrt(a);
            break;

        case 7:
            cout << cbrt(a);
            break;

        case 8:
            if (a <= 0) {
                cout << "Error: Logarithm undefined for non-positive numbers!";
            } else {
                cout << log(a);
            }
            break;

        case 9:
            if (a <= 0) {
                cout << "Error: Logarithm undefined for non-positive numbers!";
            } else {
                cout << log10(a);
            }
            break;

        case 10:
            if (a < 0) {
                cout << "Error: Factorial is not defined for negative numbers!";
            } else {
                cout << factorial(a);
            }
            break;

        case 11:
            cout << numeric_limits<float>::epsilon();
            break;

        case 12:
            cout << floor(a);
            break;

        case 13:
            cout << exp(a);
            break;

        case 14:
            cout << abs(a);
            break;

        case 15:
            cout << sin(a * M_PI / 180);  // Convert to radians
            break;

        case 16:
            cout << asin(a);
            break;

        case 17:
            cout << cos(a * M_PI / 180);  // Convert to radians
            break;

        case 18:
            cout << acos(a);
            break;

        case 19:
            cout << tan(a * M_PI / 180);  // Convert to radians
            break;

        case 20:
            cout << atan(a);
            break;

        case 21:
            {
                float total, amt, percent;
                cin >> total >> amt;
                percent = (amt / total) * 100;  // Correct float division
                cout << percent;
            }
            break;

        case 22:
            cout << permutation(int(a), int(b));  // Cast to integers
            break;

        case 23:
            cout << combination(int(a), int(b));  // Cast to integers
            break;

        case 24:
            cout << log(a);
            break;

        case 25:
            cout << fabs(a);
            break;

        case 26:
            cout << ceil(a);
            break;

        case 27:
            cout << round(a);
            break;

        case 28:
            cout << a * M_PI / 180;  // Degree to radian, use double for precision
            break;

        case 29:
            cout << a * 180 / M_PI;  // Radian to degree, use double for precision
            break;

        case 30:
            if (a == 0) {
                cout << "Error: Division by zero!";
            } else {
                cout << 1 / a;  // Inverse
            }
            break;

        default:
            cout << "Invalid Choice";
            break;
    }

    return 0;
}
