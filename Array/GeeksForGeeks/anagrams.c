#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define maxsize 100000
int top;

void push(int stack[],int item){
    if(top==maxsize){
        return -1;
    }
    //printf("pushed\n");
    top++;
    stack[top]=item;
}

void pop(int stack[]){
    if(top==-1){
        return -1;
    }
    else
        top--;
}
void enque(int a[],int item){
    push(a,item);
    //printf("\n%d\n\n",top);
}

void deque(int a[]){
    int b[maxsize];
    int j=0;
    while(top!=0){
        b[j] = a[top];
        j++;
        pop(a);
    }

    pop(a);
    while(j!=0){
        //printf("%d",j);
        push(a,b[j-1]);
        j--;
    }
    //printf("\n%d\n\n",top);

}

void printfront(int a[]){
    if(top!=-1)
        printf("%d\n",a[0]);
}

int main() {
    int q[maxsize];
    int query;
    int item;
    int j=0;

    top=-1;
    scanf("%d",&query);
    int choice;


    int a[maxsize];

    while(query--){
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                    //printf("....");
                    scanf("%d",&item);
                     //printf("\n....");
                    enque(a,item);
                    break;
            case 2:
                    deque(a);
                    break;

            case 3 :
                    printfront(a);
                    break;

            default :
                    break;

        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
