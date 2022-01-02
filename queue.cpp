#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
int queuee[SIZE];
int front = -1, rear = -1;

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(rear == SIZE-1){
        return true;
    }else{
        return false;
    }
}
void enqueue(int value){
    if(isFull() == false) {
        if(isEmpty()) {
            front++;
            queuee[++rear] = value;
        }
        else {
            queuee[++rear] = value;
        }
    }
    else{
        cout << "queue is full." << endl;
    }
}

void dequeue(){
    if(isEmpty() == false  && front <= rear){
        front++;
    }else{
        cout << "queue is empty";
    }
}

int peak(){
    if(isEmpty() == false  && front <= rear){
        return queuee[front];
    }else{
        cout << "queue is empty";
        return -1;
    }
}

void display(){
    if(isEmpty() == false && front <= rear){
        for(int i=front; i<=rear; i++){
            cout << queuee[i] << " ";
        }
    }else{
        cout << "queue is empty";
    }
}

int main() {
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    display();
    cout << "peak = " << peak() << endl;
    dequeue();
    display();
    return 0;
}
