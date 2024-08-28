#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Node {
  int data;
  Node *next;
};

Node* newNode(int data) {
  Node* node = new Node;
  node->data = data;
  node->next = NULL;

  return node;
  
}

void push(Node** top, int data) {
  Node* node = newNode(data);
  node 
}