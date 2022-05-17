#include <iostream>
#include "tasks_rk1.h"

#include <fstream>
using namespace std;
int main() {
    LinkedList* list = new LinkedList();
    list->push_back(11);
    list->push_back(22);
    list->push_back(33);
    list->Insert(4,2);
    list->WriteToFileFromHead();
 return 0;
}