#include <iostream>
#include <algorithm>

using namespace std;

void Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
cout << "Type [X] to quit [P] to profile [C] to clear" << endl;
}

void welcome(string name){
     cout << "Welcome back, " << name << "!";
     cout << endl;
}

void goodbye(string name) {
     cout << "Goodbye, " << name << "!";
     cout << endl;
}

void started() {
     cout << "Welcome to Miru CLI" << endl;
     cout << "Enter your name: ";
}

int main() {
     string name;
     string key;
     int level = 1;
     bool start;


     started();
     cin >> name;
     welcome(name);
     start = true;
     cout << "Type [X] to quit [P] to profile [C] to clear" << endl << endl;
     while (start) {
          cout << "Enter command: ";
          cin >> key;
          transform(key.begin(), key.end(), key.begin(), ::tolower);
          if (key == "x"){
                 goodbye(name);
                 start = false;
          }
          else if (key == "p") {
                 Clear();
                 cout << "Name: " << name << endl << "Level: " << level << endl;
          }
          else if (key == "c"){
                 Clear();
          }
          else {
                 cout << "Command " << key << " Not Found" << endl;
          }
     }
}
