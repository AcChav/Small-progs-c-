#include <iostream>

using namespace std;

//CHAVEZ, ALBRECHT CARL P.  DICT 1-3

int main()
{
    float num, num1, num2, add, sub, mult, divi, mod; 
    char ans;
    do 
    {
        cout << "\n\tMENU DRIVEN - SIMPLE CALCULATOR\n";
        cout << "1 - ADDITION\n";
        cout << "2 - SUBTRACTION\n";
        cout << "3 - MULTIPLICATION\n";
        cout << "4 - DIVISION\n";
        cout << "5 - MODULUS\n";
    
            cout << "\nENTER THE NUMBER OF YOUR CHOICE: ";
            cin >> num;
    
        cout << "\nENTER THE FIRST NUMBER: ";
        cin >> num1;
        cout << "\nENTER THE SECOND NUMBER: ";
        cin >> num2;
     
            if (num == 1)
                {
                add = num1 + num2;
                cout << "\nYOU SELECT NUMBER 1 ADDITION";
                cout << "\n\n\tTHE ANSWER IS: " << add << endl;
                cout << "\nDO YOU WANT TO TRY AGAIN: ";
                cin >> ans;
                }
            else if (num == 2)
                {
                sub = num1 - num2;
                cout << "\nYOU SELECT NUMBER 2 SUBTRACTION";
                cout << "\n\n\tTHE ANSWER IS: " << sub << endl;
                cout << "\nDO YOU WANT TO TRY AGAIN: ";
                cin >> ans;
                }
    }while (ans == 'Y');
    
   return 0;
}

