#include<vector>
#include<list>
#include<map>
#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
#include<thread>

//Usage:
//LoadingScreen();=> Loading...
void LoadingScreen(){
    std::cout << "Loading";
    for (int i = 0; i < 3; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::seconds());
    }
    
}
// Usage:
// SetColor(10); => green text line
// SetColor(7); => white text line
void SetColor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
  
}
using namespace std;


bool IsPhoneNumberValid(string phoneNumber){
    if(phoneNumber.length()!=10){
        return false;
    }
    for (int i = 0; i < phoneNumber.length(); i++) {
        if(phoneNumber[i]<'0' || phoneNumber[i]>'9'){
            return false;
        }
    }
    return true;
}
bool IsNameValid(string name){
    for (int i = 0; i < name.length(); i++) {
        if((name[i]<'a' || name[i]>'z') && (name[i]<'A' || name[i]>'Z') && name[i]!=' '){
            return false;
        }
    }
    return true;
}
bool IsValidEmail(string email){
    int atCount=0;
    int dotCount=0;
    for (int i = 0; i < email.length(); i++) {
        if(email[i]=='@'){
            atCount++;
        }
        if(email[i]=='.'){
            dotCount++;
        }
    }
    if(atCount!=1 || dotCount!=1){
        return false;
    }
    return true;
}