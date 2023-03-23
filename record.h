
namespace std{
    struct tagRecord {
    unsigned long int AccountNumber;
    string lstrFirstName;
    string lstrLastName;
    string lstrCity;
    long long int lnMobileNumber;
    string lstrEmail;
    bool isActive=true;

    // Function to add record
    static void AddRecord(vector<tagRecord>& records,
    map<long int,tagSavingAccount>& gMaptagSavingAccount,
    map<long int,tagCurrentAccount>& gMaptagCurrentAccount,
    map<long int,tagLocker>& gMaptagLocker,
    map<long int,tagPassbook>& gMaptagPassbook,
    map<long int,tagMedicalInsurance>& gMaptagMedicalInsurance,
    map<long int,tagLifeInsurance>& gMaptagLifeInsurance,map<long int,
    tagMutualFund>& gMaptagMutualFund,
    map<long int,tagFixedDeposit>& gMaptagFixedDeposit,
    map<long int,tagDemat>& gMaptagDemat,map<long int,tagNomination>& gMaptagNomination,
    map<long int,tagEStatement>& gMaptagEStatement) {
    tagRecord newRecord;
    cout << "Enter first name: ";
    cin >> newRecord.lstrFirstName;
    cout << "Enter last name: ";
    cin >> newRecord.lstrLastName;
    cout << "Enter city: ";
    cin >> newRecord.lstrCity;
    cout << "Enter mobile number: ";
    cin >> newRecord.lnMobileNumber;
    cout << "Enter email: ";
    cin >> newRecord.lstrEmail;
    // pushing record to vector
    records.push_back(newRecord);
    puts("Record added successfully.");
}

static void DisplayMenuModifyRecord() {
    cout << "------------------------EDIT MENU--------------------------\n";
    cout << "Select an option:\n";
    cout << "1. Modify first name\n";
    cout << "2. Modify last name\n";
    cout << "3. Modify city\n";
    cout << "4. Modify mobile number\n";
    cout << "5. Modify email\n";
    // may be add more options like modify nominations
    cout << "6. Apply changes\n";
    cout << "0. Discard changes and Exit\n";
    cout << "------------------------END--------------------------\n";
}
// Function to modify an existing record
static void ModifyRecord(vector<tagRecord>& records) {
    /// services need not be modified
    long int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;
    while(true){
        DisplayMenuModifyRecord();
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
        /// wanted to encapsulate these function but didnt
            cout << "Enter new first name: ";
            
            break;

        case 2:
            cout << "Enter new last name: ";
            break;

        case 3:
            cout << "Enter new city: ";
            break;

        case 4:
            cout << "Enter new mobile number: ";
            break;
        
        case 5:
            cout << "Enter new email: ";
            break;

        case 6:
            cout << "Changes applied successfully.\n";
            break;

        case 0:
            cout << "Changes discarded.\n";
            break;
        
        default:
            break;
        }
    }
}
static void PrintRecord(vector<tagRecord>& records){
    long int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;
    if(accountNumber>=1&&accountNumber<=records.size()){
        long int index=accountNumber-1;
        if(records[index].isActive==true){
            cout << "First name: " << records[index].lstrFirstName << endl;
            cout << "Last name: " << records[index].lstrLastName << endl;
            cout << "Account number: " << records[index].AccountNumber << endl;
            cout << "City: " << records[index].lstrCity << endl;
            cout << "Mobile number: " << records[index].lnMobileNumber << endl;
            cout << "Email: " << records[index].lstrEmail << endl;
            cout << "-----------------------------------\n";
        }
        else{
            cout<<"Record deleted.\n";
        }
         
    }
    else{
        cout<<"Record does not exist.\n";
    }
           
            
        
    
}
static void DeleteRecord(vector<tagRecord>& records) {
    long int accountNumber=0;
    cout << "Enter account number: ";
    cin >> accountNumber;
    if(accountNumber>=1&&accountNumber<=records.size()){
         records[accountNumber-1].isActive=false;
    }
    else{
        cout << "Record not found.\n";
    }
           
   
}
    };
}