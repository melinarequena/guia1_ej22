//
// Created by Administrador on 14/6/2023.
//

#ifndef GUIA1_EJ22_LENLAZADA_H
#define GUIA1_EJ22_LENLAZADA_H

/*
 Suponga una lista doblemente enlazada. Diseñar las siguientes funciones:
a. Función que elimina un elemento dado de la lista.
b. Función que modifica un elemento dado de la lista, por otro elemento.
c. Función que ordena una lista desordenada.
d. Función que muestra la lista invertida.
 */

typedef struct node{
    int num;
    struct node * next;
    struct node * prev;
}Node;

typedef struct list{
    Node * header;
}List;

Node * newNode(int num);
List * newList();

void enlist(List * list, Node * nodeList);
void delete(List * list, int);
void change(List * list, Node * nodeDelete, Node * nodePlace);
void quickSort(List * list);
void invert(List * list);
void print(List * list);

#endif //GUIA1_EJ22_LENLAZADA_H
