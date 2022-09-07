#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int key;
    Node *left;
    Node *right;
	int height;
};

int max(int a, int b){
	return (a>b)?a:b)
}

int height(Node *N){
	if(N==NULL) return 0;
	return N->height; 
};

Node *newNode(int key){
	Node *node= 
}




)
