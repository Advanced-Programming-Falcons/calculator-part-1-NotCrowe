#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    bool ex = 0;
    while(ex == 0){
        double num1 = 0;
        double num2 = 0;
        string op = "add";

        cout << "This is a calculator! (Ex. firstnum +/-/x secondnum) \n";

        cout << "Enter your first number. (int) \n";
        cin >> num1;

        cout << "Enter second number. (int) \n";
        cin >> num2;

        cout << "Enter desired operation. (Use lowercase! Options are: add, sub, mult, div, pow, root, exit) \n";
        cin >> op;

        if(op == "add"){
            cout << num1 + num2 << endl;
        }
        else if(op == "sub"){
            cout << num1 - num2 << endl;
        }
        else if(op == "mult"){
            cout << num1 * num2 << endl;
        }
        else if(op == "div"){
            cout << num1 / num2 << endl;
        }
        else if(op == "pow"){
            cout << pow(num1,num2) << endl;
        }
        else if(op == "root"){
            cout << pow(num1,1/num2) << endl;
        }
        else if(op == "exit"){
            ex = 1;
        }
    }
}
