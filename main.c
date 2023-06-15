#include <stdio.h>
#include "LEnlazada.h"

int main() {

    List * list = newList();
    enlist(list, newNode(1));
    enlist(list, newNode(2));
    enlist(list, newNode(3));
    enlist(list, newNode(4));
    enlist(list, newNode(5));


    delete(list, 3);
    print(list);

    change(list, newNode(3), newNode(9));
    print(list);

    invert(list);
    print(list);

    quickSort(list);
    print(list);


    return 0;
}
