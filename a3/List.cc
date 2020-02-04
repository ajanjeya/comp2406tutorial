#include <iostream>
using namespace std;
#include "Event.h"
#include "List.h"

List::List(){
  head = NULL;
}

List::~List(){
  Node *currNode, *holder;
  currNode = head;
  while (currNode != NULL){
    holder = currNode;
    currNode = currNode -> next;
    delete holder->data;
    delete holder;
  }
}

void List:: add(Event* e)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode -> data = e;
  tmpNode -> next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL){
    if (e->lessThan(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode -> next;
  }

  if (prevNode == NULL){
    head = tmpNode;
  }
  else{
    prevNode-> next = tmpNode;
  }

  tmpNode ->next = currNode;
}

void List::print(){
  Node* currNode = head;
  while (currNode != NULL){
    currNode->data->print();
    currNode = currNode->next;

  }

}
