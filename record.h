
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
    static void AddRecord(vector<tagRecord>& records) {
    tagRecord newRecord;
    cout << "Enter first name: ";
    cin >> newRecord.lstrFirstName;
    cout << "Enter last name: ";
    cin >> newRecord.lstrLastName;
    cout << "Enter account number: ";
    cin >> newRecord.AccountNumber;
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

// Function to modify an existing record
static void ModifyRecord(vector<tagRecord>& records) {
    long int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].AccountNumber == accountNumber) {
            cout << "Enter first name: ";
            cin >> records[i].lstrFirstName;
            cout << "Enter last name: ";
            cin >> records[i].lstrLastName;
            cout << "Enter city: ";
            cin >> records[i].lstrCity;
            return;
        }
    }
    cout << "Record not found.\n";
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