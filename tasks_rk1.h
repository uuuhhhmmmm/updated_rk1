//
// Created by marus on 16.05.2022.
//

#include <string>

#ifndef UPDATED_RK_TASKS_RK1_H
#define UPDATED_RK_TASKS_RK1_H

using namespace std;

int ConvertDecToBin (int number);
void WriteToFile(int Num);
void TASK_2(int number); // принимает десятичное число, кот. надо перевести
string ConvertBinToHex(__int64 BinNum);
void TASK_3(__int64 BinNum);// принимает двоичное число (записывает в result_task3)
void TASK_4(int height); // принимает высоту ёлочки
void RandFill(float* ar, int N);
void TASK_5(int ColCount, int RowCount); // принимает кол-во столбцов и строк в массиве

/*
struct Node {
    Node* next;
    Node* prev;
    int NameNode;
    static int CountNodes;
};
class LinkedList {
private:
    Node* Head;
    Node* Tail;
public:
    LinkedList();
    ~LinkedList();
    void push_back(int NameNode);
    void WriteToFileFromHead();
    void WriteToFileFromTail();
    void Insert(int NameNode, int position); // выводит в файл "добавлено" или "нет такого номера"
};
*/

#endif //UPDATED_RK_TASKS_RK1_H
