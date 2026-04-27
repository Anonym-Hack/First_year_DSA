#include <stdio.h>
#define size 5
int arr[size];
int top=-1;
void push(int x){
    if(top==size-1){
        printf("Stack overflow");
    }else{
        top++;
        arr[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("Stack underflow");
    }else{
        item=top;
        printf("%d is going to pop.",item);
        top--;
    }
}
void peek(){
if(top==-1){
        printf("Stack underflow");
    }else{
        printf("(|%d|) is top elelment in stack\n",arr[top]);
    }
}
void display(){
int item=top;
if(top==-1){
        printf("Stack underflow");
    }else{
        while (item>-1)
        {
        printf("%d\n",arr[item]);
        item--;
        }
        
    }
}
int main(){
    int opration,pushing,repeat;
    char rerun;
    do
    {
    printf("Choose the opration|\nEnter (1) for push____Enter (2) for pop__Enter (3) for peek__Enter (4 for display)):-");
    scanf("%d",&opration);
    if(opration==1){
        printf("How many number you want to enter:-");
        scanf("%d",&repeat);
    while(repeat>0){
        printf("Enter number to push:-");
        scanf("%d",&pushing);
        push(pushing);
        repeat--;
        }
    }else if(opration==2){
        pop();
    }else if(opration==3){
        peek();
    }else if(opration==4){
        display();
    }
    printf("Want to QUIT:press E on keyboard:-");
    scanf(" %c",&rerun);
    } while (rerun!='E'||rerun!='e');

    
}