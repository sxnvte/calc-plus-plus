#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main() {
    string input;
    int result;

    cout << "calc++ - fucking simple calculator" << endl;

    while (true) {
        cout << "> ";
        getline(cin, input); 


        if (input == "quit") {
            break;
        }


        stringstream stream(input);
        stream >> result;

        char op;
        while (stream >> op) {
            int operand;
            stream >> operand;


            switch (op) {
                case '+':
                    result += operand;
                    break;
                case '-':
                    result -= operand;
                    break;
                case '*':
                    result *= operand;
                    break;
                case '/':
                    result /= operand;
                    break;
                default:
                    cout << "unknown operator: " << op << endl;
                    break;
            }
        }

        cout << "result: " << result << endl;
    }

    cout << "bye" << endl;
    return 0;
}
