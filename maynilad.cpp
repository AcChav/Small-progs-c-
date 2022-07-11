#include <iostream>
#include <iomanip>
using namespace std;

// CHAVEZ, ALBRECHT CARL P. DICT 1-3
int main()
{
    double residential = 17.75, commercial = 24.75;
    double present_mtr, previous_mtr, consumption, b_charge, e_charge, VAT, t_amount;
    int ac_number, t_transaction, a;
    char ac_type, ac_name [85], proceed;
    
    do{
    cout << "\n\tMAYNILAD WATER SERVICES INC.";
    cout << "\n";
    cout << "ACCOUNT NUMBER                              :   ";
    cin >> ac_number;
    cout << "ACCOUNT NAME                                :   ";
    cin >> ac_name;
    cout << "ACCOUNT TYPE (R- RESIDENTIAL, C-COMMERCIAL) :   ";
    cin >> ac_type;
    cout << "PRESENT METER READING                       :   ";
    cin >> present_mtr;
    cout << "PREVIOUS METER READING                      :   ";
    cin >> previous_mtr;
    
    consumption = present_mtr - previous_mtr;
    cout << "CONSUMPTION(cu. m.)                         :   " << fixed << setprecision (2) << consumption << endl;
    
        switch (ac_type){
            case 'R':
                b_charge = consumption * residential;
                cout << "BASIC CHARGE                    :     " << fixed << setprecision (2) << b_charge << endl;
            case 'C':
                b_charge = consumption * commercial;
                cout << "BASIC CHARGE                    :     " << fixed << setprecision (2) << b_charge << endl;
        }
        cout << "\n";
        e_charge = (b_charge * .2);
        VAT = (b_charge * .12);
            cout << "ENVIRONMENTAL CHARGES                       :   " << fixed << setprecision (2) << e_charge << endl;
            cout << "VAT                                         :   " << fixed << setprecision (2) << VAT << endl;
        
        t_amount = b_charge + e_charge + VAT;
        cout << "TOTAL AMOUNT DUE                                :   " << fixed << setprecision (2) << t_amount << endl;
    
        cout << "PROCESS ANOTHER?  ";
        cin >> proceed;
        
        t_transaction ++;
    }while (proceed == 'Y');
    
    cout << "TOTAL NO. OF TRANSACTION PROCESSED: " << t_transaction << endl;
    
    return 0;
}

