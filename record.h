
namespace std{

    struct tagRecord {
    unsigned long int AccountNumber;
    string lstrFirstName;
    string lstrLastName;
    string lstrCity;
    string lstrMobileNumber;
    string lstrEmailAddress;
    bool lbActive=true;
    // Function to add record
    static void AddRecord(vector<tagRecord>& records,
    map<unsigned long int,tagSavingAccount>& gMaptagSavingAccount,
    map<unsigned long int,tagCurrentAccount>& gMaptagCurrentAccount,
    map<unsigned long int,tagLocker>& gMaptagLocker,
    map<unsigned long int,tagPassbook>& gMaptagPassbook,
    map<unsigned long int,tagMedicalInsurance>& gMaptagMedicalInsurance,
    map<unsigned long int,tagLifeInsurance>& gMaptagLifeInsurance,map<unsigned long int,
    tagMutualFund>& gMaptagMutualFund,
    map<unsigned long int,tagFixedDeposit>& gMaptagFixedDeposit,
    map<unsigned long int,tagDemat>& gMaptagDemat,map<unsigned long int,tagNomination>& gMaptagNomination,
    map<unsigned long int,tagEStatement>& gMaptagEStatement) {
    tagRecord newRecord;
    newRecord.AccountNumber=records.size()+1;
    do{
    cout << "Enter first name: ";
    cin >> newRecord.lstrFirstName;
    }
   while(!IsNameValid(newRecord.lstrFirstName));
    do{

    cout << "Enter last name: ";
    cin >> newRecord.lstrLastName;
    }
    while(!IsNameValid(newRecord.lstrLastName));
    do{
cout << "Enter city: ";
    cin >> newRecord.lstrCity;
    }
    while(!IsNameValid(newRecord.lstrCity));
    do{
  cout << "Enter mobile number: ";
    cin >> newRecord.lstrMobileNumber;
    }
  while(!IsPhoneNumberValid(newRecord.lstrMobileNumber));
  do{
  cout << "Enter email: ";
    cin >> newRecord.lstrEmailAddress;
  }
  while(!IsValidEmail(newRecord.lstrEmailAddress));
  
    // pushing record to vector
    // records.push_back(newRecord);
    //Services

     //Saving Accounts
        cout << "Do you want to opt for Savings Account\nKindly say Y for Yes or N for No\n";
        string lstrInput1;
        cin >> lstrInput1;
        if(lstrInput1=="Y")
        {
            tagSavingAccount newSavingAccount;
            cout << "Enter Balance Amount : ";
            float lfAmount;
            cin >> lfAmount;
            newSavingAccount.lfBalance = lfAmount;
            gMaptagSavingAccount[newRecord.AccountNumber] = newSavingAccount;
        }

     //Current Accounts
     cout << "Do you want to opt for Current Account\nKindly say Yes or No\n";
        string lstrInput2;
        cin >> lstrInput2;
        if(lstrInput2=="Yes")
        {
            tagCurrentAccount newCurrentAccount;
            cout << "Enter Balance Amount : ";
            float lfAmount;
            cin >> lfAmount;
            newCurrentAccount.lfBalance = lfAmount;
            gMaptagCurrentAccount[newRecord.AccountNumber] = newCurrentAccount;
        }

        //locker
      cout << "Do you want to opt for locker\nKindly say Yes or No\n";
        string lstrInput3;
        cin >> lstrInput3;
        if(lstrInput3=="Yes")
        {
            tagLocker newLocker;
            gMaptagLocker[newRecord.AccountNumber] = newLocker;
        }

        //Passbook
      cout << "Do you want to opt for Passbook\nKindly say Yes or No\n";
        string lstrInput4;
        cin >> lstrInput4;
        if(lstrInput4=="Yes")
        {
            tagPassbook newPassbook;
            gMaptagPassbook[newRecord.AccountNumber] = newPassbook;
        }

        //Medical Insurance
        cout << "Do you want to opt for Medical Insurance \nKindly say Yes or No\n";
        string lstrInput5;
        cin >> lstrInput5;
        if(lstrInput5=="Yes")
        {
            tagMedicalInsurance newMedicalInsurance;
            float lfCover;
            cout << "Enter Coverage amount";
            cin >> lfCover;
            newMedicalInsurance.lfCoverage = lfCover;
            gMaptagMedicalInsurance[newRecord.AccountNumber] = newMedicalInsurance;
        }

        //Life Insurance
        cout << "Do you want to opt for Life Insurance \nKindly say Yes or No\n";
        string lstrInput6;
        cin >> lstrInput6;
        if(lstrInput6=="Yes")
        {
            tagLifeInsurance newLifeInsurance;
            int lnNUmber;
            cout << "Enter number of people for life insurance Coverage : ";
            cin >> lnNUmber;
            float lfCoveragePolicy;
            cout << "\nEnter total policy coverage amount : ";
            cin >> lfCoveragePolicy;
            newLifeInsurance.lnCount = lnNUmber;
            newLifeInsurance.lfPolicyCoverage = lfCoveragePolicy;
            gMaptagLifeInsurance[newRecord.AccountNumber] = newLifeInsurance;
        }

      //Mutual Fund
     cout << "Do you want to opt for Mutual funds\nKindly say Yes or No\n";
        string lstrInput7;
        cin >> lstrInput7;
        if(lstrInput7=="Yes")
        {
            tagMutualFund newMutualFund;
            cout << "Enter investment amount : ";
            float lfAmountInvest;
            cin >> lfAmountInvest;
            newMutualFund.lfInvestmentAmount = lfAmountInvest;
            gMaptagMutualFund[newRecord.AccountNumber] = newMutualFund;
        }
       
   //Fixed Deposit
     cout << "Do you want to opt for fixed deposits\nKindly say Yes or No\n";
        string lstrInput8;
        cin >> lstrInput8;
        if(lstrInput8=="Yes")
        {
            tagFixedDeposit newFixedDeposit;
            cout << "Enter number of FD's : ";
            int lnFdNumber;
            cin >> lnFdNumber;
            cout << "\nEnter total deposits in FD : ";
            float lfAmountDepo;
            cin >> lfAmountDepo;
            newFixedDeposit.lnCount = lnFdNumber;
            newFixedDeposit.lfDepositAmount = lfAmountDepo;
            gMaptagFixedDeposit[newRecord.AccountNumber] = newFixedDeposit;
        }

        //Demat
         cout << "Do you want to opt for Demat account\nKindly say Yes or No\n";
        string lstrInput9;
        cin >> lstrInput9;
        if(lstrInput9=="Yes")
        {
            tagDemat newDemat;
            gMaptagDemat[newRecord.AccountNumber] = newDemat;
        }

        //Nomination
        cout << "Do you want to add nomination\nKindly say Yes or No\n";
        string lstrInput10;
        cin >> lstrInput10;
        if(lstrInput10=="Yes")
        {
            tagNomination newNomination;
            int lnNumber;
            cout << "Enter number of nominations : ";
            cin >> lnNumber;
            vector<string> NomineeName(lnNumber);
            for (int i = 0; i < lnNumber;i++)
            {
                string lstrNaam;
                cout << "Enter name of nominee ";
                cin >> lstrNaam;
                NomineeName.push_back(lstrNaam);
            }
            newNomination.lnCount = lnNumber;
            newNomination.Nominee=NomineeName;
            gMaptagNomination[newRecord.AccountNumber] = newNomination;
        }

        //Estatement
        cout << "Do you want to get estatement\nKindly say Yes or No\n";
        string lstrInput11;
        cin >> lstrInput11;
        if(lstrInput11=="Yes")
        {
            tagEStatement newEstatement;
            gMaptagEStatement[newRecord.AccountNumber] = newEstatement;
        }

    records.push_back(newRecord);
    //change color  of text to green in console
    SetColor(10);
    // system("color 0A");
    puts("Record added successfully.");
    //change color  of text to white in console
    SetColor(7);

    




    
}

static void DisplayMenuModifyRecord() {
    cout << "------------------------MODIFY MENU--------------------------\n";
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
static void ModifyRecord(vector<tagRecord>& records,
    map<unsigned long int,tagSavingAccount>& gMaptagSavingAccount,
    map<unsigned long int,tagCurrentAccount>& gMaptagCurrentAccount,
    map<unsigned long int,tagLocker>& gMaptagLocker,
    map<unsigned long int,tagPassbook>& gMaptagPassbook,
    map<unsigned long int,tagMedicalInsurance>& gMaptagMedicalInsurance,
    map<unsigned long int,tagLifeInsurance>& gMaptagLifeInsurance,map<unsigned long int,
    tagMutualFund>& gMaptagMutualFund,
    map<unsigned long int,tagFixedDeposit>& gMaptagFixedDeposit,
    map<unsigned long int,tagDemat>& gMaptagDemat,map<unsigned long int,tagNomination>& gMaptagNomination,
    map<unsigned long int,tagEStatement>& gMaptagEStatement) {
    /// services need not be modified
    int lnAccountNumber;
        cout<<"Enter account number to modify it's record : ";
        cin>>lnAccountNumber;
        cout<<endl;
        if(lnAccountNumber>=1 && lnAccountNumber<=records.size())
        {
            if(records[lnAccountNumber-1].lbActive)
            {
                string lstrFirstName;
                cout<<"Enter new first name : ";
                cin>>lstrFirstName;

                string lstrLastName;
                cout<<"Enter new last name : ";
                cin>>lstrLastName;
                string lstrCity;
                cout<<"Enter new city : ";
                cin>>lstrCity;
                unsigned long llMobile;
                cout<<"Enter new mobile number : ";
                cin>>llMobile;
                string lstrEmailAddress;
                cout<<"Enter new email address : ";
                cin>>lstrEmailAddress;
                 
                 cout << "Enter 0 to Discard changes and Exit or any key to save\n";
              
                 int lnInput;
                 cin>>lnInput;
                 if(lnInput==0)
                 {
                     cout<<"Changes Discarded\n";
                 }
                 else
                 {
                     records[lnAccountNumber-1].lstrFirstName = lstrFirstName;
                     records[lnAccountNumber-1].lstrLastName = lstrLastName;
                     records[lnAccountNumber-1].lstrCity = lstrCity;
                     records[lnAccountNumber-1].lstrMobileNumber = llMobile;
                     records[lnAccountNumber-1].lstrEmailAddress= lstrEmailAddress;
                     SetColor(10);
                    puts("Changes made successfully.");
                    //change color  of text to white in console
                    SetColor(7);
                     
                 }
            }
             else{
            SetColor(12);
            puts("Account is not active");
            SetColor(7);
        }
        }
        else{
            SetColor(14);
            puts("Account number does not exist");
            SetColor(7);
        } 
}
static void PrintRecord(vector<tagRecord>& records,
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
    long int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;
    if(accountNumber>=1&&accountNumber<=records.size()){
        long int index=accountNumber-1;
        if(records[index].lbActive==true){
            cout << "First name: " << records[index].lstrFirstName << endl;
            cout << "Last name: " << records[index].lstrLastName << endl;
            cout << "Account number: " << records[index].AccountNumber << endl;
            cout << "City: " << records[index].lstrCity << endl;
            cout << "Mobile number: " << records[index].lstrMobileNumber << endl;
            cout << "Email: " << records[index].lstrEmailAddress << endl;
            cout << "-----------------------------------\n";
            cout << "Services:\n";
            auto itrSavingAccount=gMaptagSavingAccount.find(accountNumber);
            if(itrSavingAccount!=gMaptagSavingAccount.end()){
                cout << "Saving Account\n";
            cout<<"Account balance: "<<itrSavingAccount->second.lfBalance<<endl;
            }
            auto itrCurrentAccount=gMaptagCurrentAccount.find(accountNumber);
            if(itrCurrentAccount!=gMaptagCurrentAccount.end()){
                cout << "Current Account\n";
            cout<<"Account balance: "<<itrCurrentAccount->second.lfBalance<<endl;
            }
            auto itrLocker=gMaptagLocker.find(accountNumber);
            if(itrLocker!=gMaptagLocker.end()){
                cout << "Locker\n";
            }
            auto itrPassbook=gMaptagPassbook.find(accountNumber);
            if(itrPassbook!=gMaptagPassbook.end()){
                cout << "Passbook\n";

            }
            auto itrMedicalInsurance=gMaptagMedicalInsurance.find(accountNumber);
            if(itrMedicalInsurance!=gMaptagMedicalInsurance.end()){
                cout << "Medical Insurance\n";
                cout<<  "Coverage: "<<itrMedicalInsurance->second.lfCoverage<<endl;
            }
            auto itrLifeInsurance=gMaptagLifeInsurance.find(accountNumber);
            if(itrLifeInsurance!=gMaptagLifeInsurance.end()){
                cout << "Life Insurance\n";
                cout<<"Count: "<<itrLifeInsurance->second.lnCount<<endl;
                cout<<  "Coverage: "<<itrLifeInsurance->second.lfPolicyCoverage<<endl;
            }
            auto itrMutualFund=gMaptagMutualFund.find(accountNumber);
            if(itrMutualFund!=gMaptagMutualFund.end()){
                cout << "Mutual Fund\n";
                
                cout<<"Amount: "<<itrMutualFund->second.lfInvestmentAmount<<endl;
            }

            auto itrFixedDeposit=gMaptagFixedDeposit.find(accountNumber);
            if(itrFixedDeposit!=gMaptagFixedDeposit.end()){
                cout << "Fixed Deposit\n";
                cout<<"Count: "<<itrFixedDeposit->second.lnCount<<endl;
                cout<<"Amount: "<<itrFixedDeposit->second.lfDepositAmount<<endl;
            }
            auto itrDemat=gMaptagDemat.find(accountNumber);
            if(itrDemat!=gMaptagDemat.end()){
                cout << "Demat\n";
                
            }

            auto itrNomination=gMaptagNomination.find(accountNumber);
            if(itrNomination!=gMaptagNomination.end()){
                cout << "Nomination\n";
                for(auto &it:itrNomination->second.Nominee){
                    cout<<it<<endl;
                }
                
            }
            auto itrEStatement=gMaptagEStatement.find(accountNumber);
            if(itrEStatement!=gMaptagEStatement.end()){
                cout << "E-Statement\n";
                
            }








        }
        else{
            cout<<"Record deleted.\n";
        }
         
    }
    else{
        cout<<"Record does not exist.\n";
    }
           
            
        
    
}
static void DeleteRecord(vector<tagRecord>& records,
    map<unsigned long int,tagSavingAccount>& gMaptagSavingAccount,
    map<unsigned long int,tagCurrentAccount>& gMaptagCurrentAccount,
    map<unsigned long int,tagLocker>& gMaptagLocker,
    map<unsigned long int,tagPassbook>& gMaptagPassbook,
    map<unsigned long int,tagMedicalInsurance>& gMaptagMedicalInsurance,
    map<unsigned long int,tagLifeInsurance>& gMaptagLifeInsurance,map<unsigned long int,
    tagMutualFund>& gMaptagMutualFund,
    map<unsigned long int,tagFixedDeposit>& gMaptagFixedDeposit,
    map<unsigned long int,tagDemat>& gMaptagDemat,map<unsigned long int,tagNomination>& gMaptagNomination,
    map<unsigned long int,tagEStatement>& gMaptagEStatement) {
    long int accountNumber=0;
    cout << "Enter account number: ";
    cin >> accountNumber;
    if(accountNumber>=1&&accountNumber<=records.size()){
         records[accountNumber-1].lbActive=false;
    }
    else{
     //change color  of text to red in console
    SetColor(4);
      cout << "Record not found.\n";
    //change color  of text to white in console
    SetColor(7);
      
    }
           
   
}
    };
}