#include<vector>
#include<list>
#include<map>
#include<iostream>
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


