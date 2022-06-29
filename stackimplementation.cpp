#include<iostream>
using namespace std;
int arr[10];
int top=-1;
void push(int it){
    arr[++top]=it;
    return;
}

void pop(){
    top--;
}

int main(){
    push(5);
    push(532);
    pop();
    push(215);
    push(15);
    pop();
    pop();
    push(35);
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}