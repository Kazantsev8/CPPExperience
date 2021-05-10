//
//  cycles(READ).cpp
//  MyFirstCPPApp
//
//  Created by Иван Казанцев on 04.05.2021.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//MARK: CYCLES
//MARK: 1. FOR
int forCycle() {
    for (int counter = 0; counter < 10; counter++) {
        cout << "Iteration number: " << counter << endl;
        if (counter % 5 == 0) {
            //break; //при выполнении условия программа выйдет из цикла, работает во всех трех циклах
            continue; //пропускает одну итерацию, переходит к следующей, работает во всех трех циклах
        }
    }
    return 0;
}
//MARK: 2. WHILE
int whileCycle() {
    int i = 1;
    while (i < 20) {
        cout << " " << i;
        i++;
    }
    return 0;
}
//MARK: 3. DO WHILE
int doWhileCycle() {
    int i = 1;
    do {
        cout << " " << i;
        i++;
    } while (i < 0);
    return 0;
}
