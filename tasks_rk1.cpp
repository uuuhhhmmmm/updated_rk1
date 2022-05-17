//
// Created by marus on 16.05.2022.
//

#include <cstdlib>
#include "tasks_rk1.h"
#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
int ConvertDecToBin (int number){
    int bin = 0;
    for (int k =1; number > 0; k*=10, number/=2)
        bin+=(number%2)*k;
    return bin;
}
void WriteToFile(int Num){
    ofstream fout("result_task2.txt", ios::app);
    fout << Num << endl;
    fout.close();
}
void TASK_2(int number){
    WriteToFile(ConvertDecToBin(number));
}
string ConvertBinToHex(__int64 BinNum){
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                    '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    /*char hex[16] = "0123456ABCDEF";*/
    string heximal, temp2 = "";
    while(BinNum > 0){
        int temp1 = 0;
        for( int i =0; (i < 4) && (BinNum > 0); i++, BinNum/= 10){
            temp1 += pow(2,i)*(BinNum%10);
        }
        temp2 = heximal;
        heximal = hex[temp1] + temp2;
    }
    return heximal;
}
void TASK_3(__int64 BinNum){
    ofstream fout("result_task3.txt", ios::app);
    fout << ConvertBinToHex(BinNum) << endl;
    fout.close();
}
void TASK_4(int height) {
    for (int i = 0; i<height; i++) {
        for( int j = 0; j < height - 1 - i; j++){
            std::cout << ' ';
        }
        for (int k = 0; k < (2*i + 1); k++) {
            std::cout<< '*';
        }
        std::cout << '\n';
    }
}
void RandFill(float* ar, int N){
    for(int i = 0; i< N; i++)
        *(ar + i) = rand();
}
void TASK_5(int ColCount, int RowCount){
    int n = ColCount * RowCount;
    float* array = new float[n];
    RandFill(array, n);
    float RowAverage;
    ofstream fout("result_task5.txt", ios::app);
    for(int i =0; i< RowCount; i++) {
        RowAverage = 0;
        for(int j = 0; j< ColCount; j++){
            RowAverage += *(array + i*ColCount + j);
            fout << *(array + i*ColCount + j) << " ";
        }
        RowAverage /= ColCount;
        fout << " : " << RowAverage << endl;
    }
    fout << endl; // для разделения массивов при вызове функции >1 раза подряд
    fout.close();
}
/*

LinkedList::LinkedList() {
    Head = Tail = nullptr;
    Head->CountNodes = 0;
}
LinkedList::~LinkedList() {
    while(Head != nullptr) {
        Node* temp = Head;
        Head = Head->next;
        */
/*Head->CountNodes--;*//*

        delete temp;
    }
}
void LinkedList::push_back(int NameNode) {
    Node* temp = new Node;
    temp->NameNode = NameNode;
    temp->CountNodes++;
    if (Head == nullptr){
        temp->next = Tail;
        Head = temp;
        temp->prev = nullptr;
    }
    else {
        temp->next = Tail->next;
        temp->prev = Tail;
        Tail->next = temp;
    }
    Tail = temp;
}
void LinkedList::WriteToFileFromHead() {
    ofstream fout("result_task6-7.txt", ios::app);
    if (Head != nullptr){
        Node* temp = Head;
        int i = 1;
        while (temp != nullptr){
            fout << i << ") " << temp->NameNode << " ";
            temp = temp->next;
            i++;
        }
        fout << endl;
    }
    else {
        fout << "Список пуст" << endl;
    }
    fout.close();
}
void LinkedList::WriteToFileFromTail(){
    ofstream fout("result_task6-7.txt", ios::app);
    if (Tail!=nullptr) {
        Node *temp = Tail;
        int i = temp->CountNodes;
        while (temp){
            fout << i << ") " << temp->NameNode << " ";
            temp = temp->prev;
            i--;
        }
        fout << endl;
    }
    else {
        fout << "Список пуст." << endl;
    }
    fout.close();
}
void LinkedList::Insert(int NameNode, int position){
    ofstream fout("result_task6-7.txt", ios::app);
    if (position > Head->CountNodes){
        fout << "Ошибка: номер отсутствует в списке" << endl;
    }
    else{
        Node* temp = new Node;
        temp->next = Head;
        for(int i = 0; i < position; i++){
            temp = temp->next;
        }
        temp->NameNode = NameNode;
        temp->next = (temp->next)->prev;
        (temp->next)->prev = temp;
        (temp->prev)->next = temp;
        temp->CountNodes++;
        fout << "Добавлено" << endl;
    }
    fout.close();
}*/
