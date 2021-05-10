//
//  arrays(READ).cpp
//  MyFirstCPPApp
//
//  Created by Иван Казанцев on 04.05.2021.
//

#include <stdio.h>
#include <iostream>

using namespace std;
//1-мерные массивы - векторы
//2-мерные массивы - матрицы
//MARK: 1. СТАТИЧЕСКИЙ МАССИВ
int staticArray() {
    
    int myArray1[3] = {3, 7, 5}; //создали массив из 3 элементов
    // int myArray1[] = {3, 7, 5}; //то же самое
    cout << myArray1[2];
    
    int myArray2[3][2] = {{23,34}, {1,2}, {5,7}}; //пример двумерного массива
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " " << myArray2[i][j];
        }
        cout << endl;
    }
    
    return 0;
}

//MARK: 2. ДИНАМИЧЕСКИЙ МАССИВ
int dynamicArray() {
    
    int *ptrnum = new int (7); //выделили память под объект типа инт динамически
    *ptrnum = 5;
    cout << *ptrnum << endl;
    delete ptrnum; //удаляем адрес ячейки после динамического выделения памяти
    
    float *ptrArray = new float[10]; //выделили память под массив на 10 элементов
    for (int i = 0; i < 10; i++) {
        ptrArray[i] = rand() % 80 + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << ptrArray[i] << " ";
    }
    delete []ptrArray; //освобождаем память, выделенную для динамического массива
    
    return 0;
}
