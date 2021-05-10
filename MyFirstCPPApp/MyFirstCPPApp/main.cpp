//
//  main.cpp
//  MyFirstCPPApp
//
//  Created by Иван Казанцев on 03.05.2021.
//

#include <iostream> //команда препроцессору, чтобы поместить код из заголовочного файла iosstream / библиотека :)
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "1-random number = " << 1 + rand() % 80 << endl;
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    if (name.length() != 0) {
        cout << "Your name is: " << name << endl;
    } else {
        cout << "Error";
    }
    
    return 0;
    
}
