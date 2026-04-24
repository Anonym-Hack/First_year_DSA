#include <stdio.h>
#define size 5
int arr[size];
int top=-1;
void push(int x){
    if(top==size-1){
        printf("Stack overflow");
    }else{
        arr[top]=x;
        top++;
    }
}
void pop(){
    int item;
        if(top==-1){
        printf("Stack underflow");
    }else{
        item=arr[top];
        top--;
        printf("%d is deleted from stack.",item);
    }

}
void peek(){
    if(top==-1){
        printf("Underflow condition");
    }else{
        printf("This is the top element %d",arr[top]);
    }
}
void display(){
    if(top==-1){
        printf("No element found:-Underflow condition");

    }
    else{
        int item=top;
        while(item>=0){
            printf("%d",arr[item]);
            item--;
        }

    }
}
int main(){
int insert_val,opration,repeat,program_rerun;
do
{
    printf("Enter 1 to push____Enter 2 to pop_____Enter 3 to peek_____Enter 4 to display:-\nEnter:-");
scanf("%d",&opration);

if (opration==1){
    printf("Enter how many number you want to push:-");
    scanf("%d",&repeat);
    while(repeat>0){
    printf("Enter the number:-");
    scanf("%d",&insert_val);
    push(insert_val);
    repeat--;
    }
}else if(opration==2){
    pop();
}else if(opration==3){
    peek();
}else if(opration==4){
    display();
}
printf("Enter (E) to exit OR Enter any key to continue the Re Run the program:-");
scanf("%d",&program_rerun);
} while (program_rerun=!"E");

}