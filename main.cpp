#include <iostream>
#include <cmath>

using namespace std;

double addition(double num1, double num2){
    return num1 + num2;
}

double subtraction(int num1, int num2){
    return num1 - num2;
}

double multiplication(double num1, double num2){
    return num1 * num2;
}

double division(double num1, double num2){
    return num1 / num2;
}

double power(double num1, double num2){
    return pow(num1, num2);
}

int factorial(int num1){
    int answer = 1;
    for (int x = num1; x>0; x--){
        answer = answer*x;
    }
    return answer;
}

double square_root(double num1){
    return pow(num1, 0.5);
}

void calculator(){
    double num1;
    double num2;
    double result = 0.0;
    char operation;

    cout<<"Welcome to this simple calculator tool."<<endl;
    cout<<"Please enter the first number (can be integer or decimal)."<<endl;
    cin>>num1;

    while(1){
        cout<<"Please enter the operator (can be +(add), -(minus), *(mult), /(div) or q to quit)."<<endl;
        cout<<"Other operations include: e(exp), !(factorial), s(square root)"<<endl;
        cin>>operation;

        if(operation == 'q'){
            break;
        }

        switch(operation){
        case '+':
            cout<<"Please enter the second number for applied operation (can be integer or decimal)."<<endl;
            cin>>num2;
            result = addition(num1, num2);
            cout<<"Result of "<<num1<<" + "<<num2<<" is: "<<result<<endl;
            num1 = result;
            break;
        case '-':
            cout<<"Please enter the second number for applied operation (can be integer or decimal)."<<endl;
            cin>>num2;
            result = subtraction(num1, num2);
            cout<<"Result of "<<num1<<" - "<<num2<<" is: "<<result<<endl;
            num1 = result;
            break;
        case '*':
            cout<<"Please enter the second number for applied operation (can be integer or decimal)."<<endl;
            cin>>num2;
            result = multiplication(num1, num2);
            cout<<"Result of "<<num1<<" * "<<num2<<" is: "<<result<<endl;
            num1 = result;
            break;
        case '/':
            cout<<"Please enter the second number for applied operation (can be integer or decimal)."<<endl;
            cin>>num2;
            result = division(num1, num2);
            cout<<"Result of "<<num1<<" / "<<num2<<" is: "<<result<<endl;
            num1 = result;
            break;
        case 'e':
            cout<<"Please enter the second number for applied operation (can be integer or decimal)."<<endl;
            cin>>num2;
            result = pow(num1, num2);
            cout<<"Result of "<<num1<<" ^ "<<num2<<" is: "<<result<<endl;
            num1 = result;
            break;
        case 's':
            result = square_root(num1);
            cout<<"Result of "<<num1<<" square root is: "<<result<<endl;
            num1 = result;
            break;
        case '!':
            result = factorial(num1);
            cout<<"Result of "<<num1<<"! is: "<<result<<endl;
            num1 = result;
            break;
        default:
            cout<<"Invalid Operation."<<endl;
        }
    }
    cout<<"Thank you for using this simple calculator."<<endl;
}
int main()
{
    calculator();
    return 0;
}
