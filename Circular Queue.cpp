#include <bits/stdc++.h.h>
using namespace std;
#define SIZE 5
int queuee[SIZE];
int front = -1, rear = -1;
bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }else{
        return false;
    }
}
bool isFull(){
    if(front == 0 && rear == SIZE -1 ){
        return true;
    }else if(rear == front - 1) {
        return true;
    }else{
        return false;
    }
}
void enqueue(int value){
    if(isFull()) {
        cout << "queue is full." << endl;
    }
    else{
        if(isEmpty()){
            front = rear = 0;
            queuee[rear] = value;
        }else if(rear == SIZE-1){
            rear = 0;
            queuee[rear] = value;
        }
        else {
            queuee[++rear] = value;
        }
    }
}
void dequeue(){
    if(isEmpty()){
        cout << "queue is empty";
    }else{
        if(front == rear){
            front = rear = -1;
        }else if(front == SIZE -1){
            front = 0;
        }else{
            front++;
        }
    }
}
int peak(){
    if(isEmpty()){
        cout << "queue is empty";
        return -1;
    }else{
        return queuee[front];
    }
}
void display(){
    if(isEmpty()){
        cout << "queue is empty";
    }else{
        if(front <= rear){
            for(int i=front; i<=rear; i++){
                cout << queuee[i] << " ";
            }
        }
        else{
            for(int i=front; i< SIZE; i++){
                cout << queuee[i] << " ";
            }
            for(int i=0; i<= rear; i++){
                cout << queuee[i] << " ";
            }
        }
    }
}
int main(){
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    dequeue();
    cout << "peek = " << peak();
    display();
}
