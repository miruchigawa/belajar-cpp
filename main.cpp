#include <iostream>
#include <algorithm>

using namespace std;

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
     started();
     cin >> name;
     welcome(name);
     cout << "Type [X] to quit" << endl;
     cin >> key;
     transform(key.begin(), key.end(), key.begin(), ::tolower);
     if (key == "x"){
          goodbye(name);
     }
     else {
          cout << "Command " << key << " Not Found";
     }
}
