#include "requirements.h"
#include "record.h"
#include"saving_account.h"
#include"current_account.h"
#include"locker.h"
#include"passbook.h"
#include"medical_insurance.h"
#include"life_insurance.h"
#include"mutual_fund.h"
#include"fixed_deposit.h"
#include"demat.h"
#include"nomination.h"
#include"e_statement.h"

using namespace std;

// Struct to store record data



// Function to display menu options
void DisplayMenu() {
    cout << "------------------------MENU--------------------------\n";
    cout << "Select an option:\n";
    cout << "1. Add a record\n";
    cout << "2. Modify a record\n";
    cout << "3. Delete a record\n";
    cout << "4. Print record of particular\n";
    cout << "5. print all record\n";
    cout << "0 . Exit\n";
    cout << "------------------------END--------------------------\n";
}
void PrintAllRecord(vector<tagRecord>& records){
    const char separator = ' ';
    const int nameWidth = 6;
    const int numWidth = 8;
    cout << left << setw (nameWidth) << setfill (separator) << "Account";
    cout << left << setw (nameWidth) << setfill (separator) << "Name";
    cout << left << setw (nameWidth) << setfill (separator) << "City";
    cout << left << setw (nameWidth) << setfill (separator) << "Mobile";
    cout << left << setw (nameWidth) << setfill (separator) << "Email";
    cout<<endl;
    for (int i = 0; i < records.size(); i++) {
        if(records[i].isActive==true){
            cout << left << setw (nameWidth) << setfill (separator) << records[i].AccountNumber;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrFirstName+" "+records[i].lstrLastName;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrCity;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lnMobileNumber;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrEmail;
            cout<<endl;
  
        }
    
    }
}

// Driver program
int main(){
    // Global variables
    vector<tagRecord> glisttagRecords;
    map<long int,tagSavingAccount> gMaptagSavingAccount;
    map<long int,tagCurrentAccount> gMaptagCurrentAccount;
    map<long int,tagLocker> gMaptagLocker;
    map<long int,tagPassbook> gMaptagPassbook;
    map<long int,tagMedicalInsurance> gMaptagMedicalInsurance;
    map<long int,tagLifeInsurance> gMaptagLifeInsurance;
    map<long int,tagMutualFund> gMaptagMutualFund;
    map<long int,tagFixedDeposit> gMaptagFixedDeposit;
    map<long int,tagDemat> gMaptagDemat;
    map<long int,tagNomination> gMaptagNomination;
    map<long int,tagEStatement> gMaptagEStatement;
    cout<<"-----------------------------------------------------------\n";
    cout<<"           Welcome to the bank management system.\n";
    cout<<"-----------------------------------------------------------\n";

    while(true){
        DisplayMenu();
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            tagRecord::AddRecord(glisttagRecords,gMaptagSavingAccount,gMaptagCurrentAccount,
            gMaptagLocker,gMaptagPassbook,gMaptagMedicalInsurance,gMaptagLifeInsurance,
            gMaptagMutualFund,
            gMaptagFixedDeposit,gMaptagDemat,gMaptagNomination,gMaptagEStatement);
            break;
        case 2:
            tagRecord:: ModifyRecord(glisttagRecords);
            break;
        case 3:
            tagRecord::DeleteRecord(glisttagRecords);
            break;
        case 4:
            tagRecord::PrintRecord(glisttagRecords);
            break;
        case 5:
            PrintAllRecord(glisttagRecords);
            break;
        case 0:
            cout << "Exiting Software\n";
            return 0;
        default:
            cout << "Invalid option.\n";
            break;
        }
    }
    
}