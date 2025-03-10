#include <stdio.h>

int add_book(char (*arr)[3][30],int num,char *title,char *author,char *publisher);

int main(){
    char library[100][3][30];
    char home[100][3][30];
    int input;
    int input2;
    int booknum = 0;
    int search_index = -1;
    char newbook_title[30];
    char newbook_author[30];
    char newbook_publisher[30];
    char search_title[30];
    char search_author[30];
    char search_publisher[30];
    char lend_title[30];
    char return_title[30];

    printf("\nThe title of new book:");
    scanf("%s",newbook_title);
    getchar();
    printf("The author of new book:");
    scanf("%s",newbook_author);
    getchar();
    printf("The publisher of new book:");
    scanf("%s",newbook_publisher);
    getchar();

    printf("%s\n",newbook_title);
    printf("%s\n",newbook_author);
    printf("%s\n",newbook_publisher);

    booknum++;
    add_book(library,booknum,newbook_title,newbook_author,newbook_publisher);

    printf("%c",library[0][1][0]);

    return 0;
}

int add_book(char (*arr)[3][30],int num,char *title,char *author,char *publisher){
    int index = 0;
    num--;
    while(*title){
        arr[num][0][index] = *title;
        title++;
        index++;
    }
    arr[num][0][index] = '\0';
    index = 0;
    while(*author){
        arr[num][1][index] = *author;
        author++;
        index++;
    }
    arr[num][1][index] = '\0';
    index = 0;
    while(*publisher){
        arr[num][2][index] = *publisher;
        publisher++;
        index++;
    }
    arr[num][2][index] = '\0';
    return 1;
}