#include"requirements.h"
#include"validators.h"
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
#include "record.h"

using namespace std;

// Function to display menu options
void DisplayMenu() {
    cout << "------------------------MENU--------------------------\n";
    cout << "Select an option:\n";
    cout << "1. Add a record\n";
    cout << "2. Modify a record\n";
    cout << "3. Delete a record\n";
    cout << "4. Print record of particular\n";
    cout << "5. print all record\n";
    cout << "0. Exit\n";
    cout << "------------------------END--------------------------\n";
}
void PrintAllRecords(vector<tagRecord>& records,
    map<unsigned long int,tagSavingAccount>& gMaptagSavingAccount,
    map<unsigned long int,tagCurrentAccount>& gMaptagCurrentAccount,
    map<unsigned long int,tagLocker>& gMaptagLocker,
    map<unsigned long int,tagPassbook>& gMaptagPassbook,
    map<unsigned long int,tagMedicalInsurance>& gMaptagMedicalInsurance,
    map<unsigned long int,tagLifeInsurance>& gMaptagLifeInsurance,map<unsigned long int,
    tagMutualFund>& gMaptagMutualFund,
    map<unsigned long int,tagFixedDeposit>& gMaptagFixedDeposit,
    map<unsigned long int,tagDemat>& gMaptagDemat,map<unsigned long int,tagNomination>& gMaptagNomination,
    map<unsigned long int,tagEStatement>& gMaptagEStatement){
    const char separator = ' ';
    const int nameWidth = 14;
    const int numWidth = 14;
    cout << left << setw (nameWidth) << setfill (separator) << "Account";
    cout << left << setw (nameWidth) << setfill (separator) << "Name";
    cout << left << setw (nameWidth) << setfill (separator) << "City";
    cout << left << setw (nameWidth) << setfill (separator) << "Mobile";
    cout << left << setw (nameWidth) << setfill (separator) << "Email";
    cout<<endl;
    for (int i = 0; i < records.size(); i++) {
        if(records[i].lbActive==true){
            cout << left << setw (nameWidth) << setfill (separator) << records[i].AccountNumber;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrFirstName+" "+records[i].lstrLastName;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrCity;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrMobileNumber;
            cout << left << setw (nameWidth) << setfill (separator) << records[i].lstrEmailAddress;
            cout<<endl;
        }
    }
}

// Driver program
int main(){
// LoadingScreen();
    // Global variables
    vector<tagRecord> glisttagRecords;
    map<unsigned long int,tagSavingAccount> gMaptagSavingAccount;
    map<unsigned long int,tagCurrentAccount> gMaptagCurrentAccount;
    map<unsigned long int,tagLocker> gMaptagLocker;
    map<unsigned long int,tagPassbook> gMaptagPassbook;
    map<unsigned long int,tagMedicalInsurance> gMaptagMedicalInsurance;
    map<unsigned long int,tagLifeInsurance> gMaptagLifeInsurance;
    map<unsigned long int,tagMutualFund> gMaptagMutualFund;
    map<unsigned long int,tagFixedDeposit> gMaptagFixedDeposit;
    map<unsigned long int,tagDemat> gMaptagDemat;
    map<unsigned long int,tagNomination> gMaptagNomination;
    map<unsigned long int,tagEStatement> gMaptagEStatement;
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
            tagRecord:: ModifyRecord(glisttagRecords,gMaptagSavingAccount,gMaptagCurrentAccount,
            gMaptagLocker,gMaptagPassbook,gMaptagMedicalInsurance,gMaptagLifeInsurance,
            gMaptagMutualFund,
            gMaptagFixedDeposit,gMaptagDemat,gMaptagNomination,gMaptagEStatement);
            break;
        case 3:
            tagRecord::DeleteRecord(glisttagRecords,gMaptagSavingAccount,gMaptagCurrentAccount,
            gMaptagLocker,gMaptagPassbook,gMaptagMedicalInsurance,gMaptagLifeInsurance,
            gMaptagMutualFund,
            gMaptagFixedDeposit,gMaptagDemat,gMaptagNomination,gMaptagEStatement);
            break;
        case 4:
            tagRecord::PrintRecord(glisttagRecords,gMaptagSavingAccount,gMaptagCurrentAccount,
            gMaptagLocker,gMaptagPassbook,gMaptagMedicalInsurance,gMaptagLifeInsurance,
            gMaptagMutualFund,
            gMaptagFixedDeposit,gMaptagDemat,gMaptagNomination,gMaptagEStatement);
            break;
        case 5:
            PrintAllRecords(glisttagRecords,gMaptagSavingAccount,gMaptagCurrentAccount,
            gMaptagLocker,gMaptagPassbook,gMaptagMedicalInsurance,gMaptagLifeInsurance,
            gMaptagMutualFund,
            gMaptagFixedDeposit,gMaptagDemat,gMaptagNomination,gMaptagEStatement);
            break;
        case 0:
        SetColor(4);
            cout << "Exiting Software\n";
        SetColor(7);

            return 0;
        default:
            cout << "Invalid option.\n";
            break;
        }
    }
    
}