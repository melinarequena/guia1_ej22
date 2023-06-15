//
// Created by Administrador on 14/6/2023.
//

#include "LEnlazada.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int num) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->num = num;
    aux->next = aux->prev = NULL;
    return aux;
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->header = NULL;
    return aux;
}

void enlist(List *list, Node *nodeList) {
    if(list->header == NULL){
        list->header = nodeList;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodeList;
        nodeList->prev = aux;
    }
}

void delete(List *list, int num) {
    Node * aux = list->header;
    while(aux != NULL || aux ->num != num){
        aux = aux->next;
    }
    if(aux == NULL){
        printf("The number you are looking for is not on the list\n");
    }else{
        aux->prev->next = aux->next;
        aux->next->prev = aux->prev;
        free(aux);
    }
}

void change(List *list, Node *nodeDelete, Node *nodePlace) {
    Node * aux = list->header;
    while(aux != NULL || aux ->num != nodeDelete->num){
        aux = aux->next;
    }
    if(aux == NULL){
        printf("The number you are looking for is not on the list\n");
    }else{
        aux->num = nodePlace->num;
    }
}

void quickSort(List *list) {
    Node * pivot = list->header;
    while(pivot->next != NULL){
        if(pivot->num > pivot->next->num){
            Node * aux = pivot;
            pivot = pivot->next;
            pivot->next = aux;
            free(aux);
        }
        pivot = pivot->next;
    }
}

void invert(List *list) {
    Node * aux = list->header;
    Node * aux2 = list->header;
    while(aux != NULL){
        while(aux2->next != NULL){
            aux2 = aux2->next;
        }
        aux2->next = aux;
        aux = aux->next;
    }

}

void print(List *list) {
    Node * aux = list->header;
    printf("List:\n");
    while(aux != NULL){
        printf("%d\n", aux->num);
        aux = aux->next;
    }
}




