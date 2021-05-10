//
//  exceptions(READ).cpp
//  MyFirstCPPApp
//
//  Created by Иван Казанцев on 04.05.2021.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int exceptions() {
    int num1;
    int num2;
    
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;
    
    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 + num2 = ";
    
    try { //проверяем
        if (num2 == 0) { //если наш num2 равен 0
            throw 123; //выкидываем число 123 (номер ошибки)
        }
        cout << num1 / num2 << endl; //иначе, если все хорошо, то мы делим
    } catch (int i) { //если мы выкинули 123, то мы поймали это число, присвоили его i, и выводим ошибку
        cout << "Error №" << i << " - divide by 0!!!" << endl;
    }
    return 0;
}
