/*
도서 관리 프로그램을 만들어봅시다. 프로그램에는 다음과 같은 기능들이 구현되어 있어야 합니다. (난이도 : 上)

책을 새로 추가하는 기능 (책의 총 개수는 100 권이라 하자. 이 때, 각 책의 정보는 제목, 저자의 이름, 출판사로 한다) 

책의 제목을 검색하면 그 책의 정보가 나와야 한다.

위와 마찬가지로 저자, 출판사 검색 기능이 있어야 한다.

책을 빌리는 기능.

책을 반납하는 기능
*/
#include <stdio.h>

int add_book(char (*arr[3][30]),int num,char *title,char *author,char *publisher);
int search_title_book(char (*arr[3][30]), char *pst);
int search_author_book(char (*arr[3][30]), char *pst);
int search_publisher_book(char (*arr[3][30]), char *pst);
int lend_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst);
int return_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst);

int main(){
    char library[100][3][30];
    char home[100][3][30];
    int input;
    int input2;
    int booknum;
    char newbook_title[30];
    char newbook_author[30];
    char newbook_publisher[30];
    char search_title[30];
    char search_author[30];
    char search_publisher[30];
    char lend_title[30];
    char return_title[30];

    while(1){
        printf("1)Add book to your library\n");
        printf("2)Search for what you want\n");
        printf("3)Take a book to your home\n");
        printf("4)Return your book to the library\n");
        printf("Choose the service:");
        scanf("%d",&input);
        getchar();

        switch (input){
            case 1:
                printf("The title of new book:");
                scanf("%s",newbook_title);
                getchar();
                printf("The author of new book:");
                scanf("%s",newbook_author);
                getchar();
                printf("The publisher of new book:");
                scanf("%s",newbook_publisher);
                getchar();

                booknum++;
                add_book(library,booknum,newbook_title,newbook_author,newbook_publisher);
                break;

            case 2:
                while (1){
                    printf("1)Title\n");
                    printf("2)Author\n");
                    printf("3)Publisher\n");
                    printf("4)Go back\n");
                    printf("What do you want to search?:");
                    scanf("%d",&input2);
                    getchar();
                    if (input2 == 1){
                        printf("The title of new book:");
                        scanf("%s",search_title);
                        getchar();

                        search_title_book(library,search_title);
                        break;
                    } else if (input2 == 2){
                        printf("The author of new book:");
                        scanf("%s",search_author);
                        getchar();

                        search_author_book(library,search_author);
                        break;
                    } else if (input2 == 3){
                        printf("The publisher of new book:");
                        scanf("%s",search_publisher);
                        getchar();

                        search_publisher_book(library,search_publisher);
                        break;
                    } else if (input2 == 4){
                        break;
                    } else{
                        printf("Choose again.\n");
                        continue;
                    }
                }           
                break;

            case 3:
                printf("What is the title of the book?:");
                scanf("%s",lend_title);
                getchar();

                lend_book(library,home,lend_title);
                break;

            case 4:
                printf("What is the title of the book?:");
                scanf("%s",return_title);
                getchar();

                return_book(library,home,return_title);
                break;

            default:
                printf("Please choose again\n");
                continue;
                break;
        }
    }
    return 0;
}

int add_book(char (*arr[3][30]),int num,char *title,char *author,char *publisher){

    return 1;
}

int search_title_book(char (*arr[3][30]), char *pst){

    return 1;
}

int search_author_book(char (*arr[3][30]), char *pst){

    return 1;
}

int search_publisher_book(char (*arr[3][30]), char *pst){

    return 1;
}

int lend_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst){

    return 1;
}

int return_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst){

    return 1;
}