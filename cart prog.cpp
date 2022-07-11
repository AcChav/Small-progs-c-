#include <iostream>

using namespace std;

//CHAVEZ, ALBRECHT CARL P.   DICT 1-3

int main()
{
    double piatos, nova, chippy;
    double coke, royal, sprite;
    
    double total, g_total;
    char ans, key;
    
        do{
            cout << "\n\t\tAC'S FOOD CART" << endl;
            cout << "\tWHAT'S YOUR ORDER MA'AM/SIR..." << endl;
      
            cout << "\n----------------MENU-------------------" << endl;
      
            cout << "SNACKS" << endl;
            cout << "1. PIATOS  <15.00>:   ";
            cin >> piatos;
            cout << "2. NOVA    <10.00>:   ";
            cin >> nova;
            cout << "3. CHIPPY  <15.00>:   ";
            cin >> chippy;

            cout << "\nDRINKS" << endl;
            cout << "1. COKE    <20.00>:   ";
            cin >> coke;
            cout << "2. ROYAL   <20.00>:   ";
            cin >> royal;
            cout << "3. SPRITE  <20.00>:   ";
            cin >> sprite;
            
           
                    cout << "\n\t\tAC'S FOOD CART";
                    cout << "\n\n-------------------------------------" << endl;
    
                    cout << "PARTICULARS               AMOUNT          QUANTITY" << endl;
    
                    cout << "SNACKS" << endl;
                    cout << "1. PIATOS              15.00               " << piatos << endl;
                    cout << "2. NOVA                10.00               " << nova   << endl;
                    cout << "3. CHIPPY              15.00               " << chippy << endl;
        
                    cout << "DRINKS" << endl;
                    cout << "1. COKE                2O.00               " << coke   << endl;
                    cout << "2. ROYAL               20.00               " << royal  << endl;
                    cout << "3. SPRITE              20.00               " << sprite << endl;
    
    
    total = (15.00 * piatos) + (10.00 * nova) + (15.00 * chippy) + (20.00 * royal) + (20.00 * coke) + (20.00 * sprite);
    
                    cout << "----------------------------------------------" << endl;
                    cout << "\t\tTOTAL: " << total << endl;
                    cout << "\n\t\tTHANK YOU! COME AGAIN :D" << endl;
                    cout << "\n\tDO YOU WANT TO CONTINUE? ";
                    cin >> key;
                g_total += total;
        }while (key == 'Y' || key == 'y');
            cout << "\n\tGRAND TOTAL: " << g_total << endl;
    
        
        
    return 0;
}

