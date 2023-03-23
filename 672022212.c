#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>


#define MAX_STACK_SIZE 5

int stack[MAX_STACK_SIZE];
int top = -1;
#define MAX_QUEUE_SIZE 5

int queue[MAX_QUEUE_SIZE];
int front = -1;
int rear = -1;



void panah(int posMenu, int posPanah)
{
    if(posPanah==posMenu)
        printf("==>");
    else printf(" ");
}

int getPilihan()
{
    int pos=1;
    int keyPressed=0;
    while(keyPressed!=27)
    {
        system("cls");

        printf("==========================\n");
        printf("Tugas Quiz Stack and Queue\n");
        printf("==========================\n");
        panah(1, pos); printf("  1.Stack String\n");
        panah(2, pos); printf("  2.Queue Integer\n");
        panah(3, pos); printf("  3.Exit\n");
        printf("======================\n");

        keyPressed=getch();
        if(keyPressed==72)pos--;
        else if(keyPressed==80)pos++;
        else pos=pos;
        if(pos>3)pos=3;
        if(pos<1)pos=1;

        if(keyPressed == (int)'\r')
        {
            return pos;
        }
    }
}



int main()
{
    system("color f0");
    int pilihan;
    char lanjut;

    do
    {
        menu:
        pilihan = getPilihan();

        switch(pilihan)
        {
            case 1:

    system("cls");
    int choice;
while(1) {
printf("\nStack Menu:\n");
printf("1. Push element\n");
printf("2. Pop element\n");
printf("3. Print stack\n");
printf("4. Delete stack\n");
printf("5. Kembali ke menu awal\n");
printf("Enter your choice: ");
scanf("%d", &choice);


    switch(choice) {
        case 1:
        	system("cls");
            push();
            break;
        case 2:
        		system("cls");
            pop();
            break;
        case 3:
        		system("cls");
            print();
            break;
        case 4:
        		system("cls");
            delete();
            break;
        case 5:
            goto menu;
        default:
            printf("Invalid choice!\n");}
}
                break;

            case 2:
                Q();
                break;
            case 3:
                    exit(0);

            default:
                printf("Pilihan tidak valid. Silakan pilih kembali.\n");
                system("pause");
                break;
        }

   }while(pilihan==3);
}

void Q()
{
    system("cls");
       int choice, data;
    while(1) {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue Int\n");
        printf("2. Dequeue Int\n");
        printf("3. Printf queue\n");
        printf("4. Delete queue\n");
        printf("5. Kembali ke menu awal\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                system("cls");
                printf("Data = ");
                scanf("%d", &data);
                enqueue(data);
                system("pause");
                break;
            case 2:
                system("cls");
                dequeue();
                system("pause");
                break;
            case 3:
                system("cls");
                display();
                system("pause");
                break;
            case 4:
                system("cls");
            	hapus();
            	system("pause");
            	break;
            case 5:
                goto*(main());
            default:
                printf("Invalid choice!\n");}}
}

void push() {
    char data;
    if(top == MAX_STACK_SIZE-1) {
        printf("Stack Penuh\n");
        return;
    }
    printf("Data yang ingin di input = ");
    scanf(" %c", &data);
    top++;
    stack[top] = data;
    system("pause");
}


void pop() {
if(top == -1) {
printf("Stack kosong\n");
return;
}
printf("Data yang di ambil =  %c\n", stack[top]);
top--;
}

void print() {
    int i;
    if (top == -1) {
        printf("Stack Kosong!\n");
        return;
    }
    printf("Stack elements are:\n");
    for (i = 0; i <= top; i++) {
        printf("Data %d: %c\n", top-i, stack[top-i]);
    }
}


void delete() {
if(top == -1) {
printf("Stack is empty!\n");
return;
}
top = -1;
printf("Data di hapus!\n");
}


void enqueue(int data) {
    if(rear == MAX_QUEUE_SIZE-1) {
        printf("Queue Penuh\n");
        return;
    }
    if(front == -1) front = 0;
    rear++;
    queue[rear] = data;
    printf("Data %d masuk\n", data);
}


void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Kosong\n");
        return;
    }
    int data = queue[front];
    front++;
    printf("Data yang keluar = %d.\n", data);
}



void display() {
	int i;
     if(front == -1 || front > rear)
	 {
        printf("Queue Kosong\n");
        return;
    }

     printf("Isi Queue:\n");
    for (i = 0; i <= front; i++) {
        printf("Data %d: %d\n", front-i, queue[front-i]);}
}

void hapus() {
if(front == -1) {
printf("Stack masih kosong!\n");
return;
}
front = -1;
printf("Data di hapus\n");
}








