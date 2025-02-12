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
int search_title_book(char (*arr[3][30]),int index, char *pst);
int search_author_book(char (*arr[3][30]),int index, char *pst);
int search_publisher_book(char (*arr[3][30]),int index, char *pst);
int lend_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst);
int return_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst);
int compare(char *pst, char *dst);

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

    while(1){
        printf("\n1)Add book to your library\n");
        printf("2)Search for what you want\n");
        printf("3)Take a book to your home\n");
        printf("4)Return your book to the library\n");
        printf("Choose the service:");
        scanf("%d",&input);
        getchar();

        switch (input){
            case 1:                                             //add 함수 구현
                printf("\nThe title of new book:");
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

            case 2:                                 //search 함수 구현
                while (1){
                    printf("\n1)Title\n");
                    printf("2)Author\n");
                    printf("3)Publisher\n");
                    printf("4)Go back\n");
                    printf("What do you want to search?:");
                    scanf("%d",&input2);
                    getchar();
                    if (input2 == 1){                           //제목을 통해서 찾기
                        printf("\nThe title of new book:");
                        scanf("%s",search_title);
                        getchar();

                        while(1){
                            search_index = search_title_book(library,search_index,search_title);
                            printf("\nTitle:%s\n",library[search_index][0]);
                            printf("Author:%s\n",library[search_index][1]);
                            printf("Publisher%s\n",library[search_index][2]);
                            if(search_title_book(library,search_index,search_title) == -1){
                                break;
                            }
                        }
                        search_index = -1;
                        break;
                    } else if (input2 == 2){                    //작가를 통해서 찾기
                        printf("\nThe author of new book:");
                        scanf("%s",search_author);
                        getchar();

                        while(1){
                            search_index = search_author_book(library,search_index,search_author);
                            printf("\nTitle:%s\n",library[search_index][0]);
                            printf("Author:%s\n",library[search_index][1]);
                            printf("Publisher%s\n",library[search_index][2]);
                            if(search_author_book(library,search_index,search_author) == -1){
                                break;
                            }
                        }

                        break;
                    } else if (input2 == 3){                    //출판사를 통해서 찾기
                        printf("\nThe publisher of new book:");
                        scanf("%s",search_publisher);
                        getchar();

                        while(1){
                            search_index = search_publisher_book(library,search_index,search_publisher);
                            printf("\nTitle:%s\n",library[search_index][0]);
                            printf("Author:%s\n",library[search_index][1]);
                            printf("Publisher%s\n",library[search_index][2]);
                            if(search_publisher_book(library,search_index,search_publisher) == -1){
                                break;
                            }
                        }                        

                        break;
                    } else if (input2 == 4){                    //이전 화면으로 돌아가기
                        break;
                    } else{
                        printf("Choose again.\n");
                        continue;
                    }
                }           
                break;

            case 3:                         //책 빌리기 함수 구현
                printf("\nWhat is the title of the book?:");
                scanf("%s",lend_title);
                getchar();

                lend_book(library,home,lend_title);
                
                break;

            case 4:                          //책 반납 함수 구현
                printf("\nWhat is the title of the book?:");
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
    int index = 0;
    num--;
    while(*title){
        arr[num][0][index] = *title;
        title++;
        index++;
    }
    index = 0;
    while(*author){
        arr[num][1][index] = *author;
        author++;
        index++;
    }
    index = 0;
    while(*publisher){
        arr[num][1][index] = *publisher;
        publisher++;
        index++;
    }
    return 1;
}

int search_title_book(char (*arr[3][30]),int index, char *pst){
    index++;
    while(1){
        if (compare(arr[index][0],pst) == 0){
            index++;
            if(index == 101){
                return -1;
            }
            continue;
        }
        else{
            break;
        }
    }
    return index;
}

int search_author_book(char (*arr[3][30]),int index, char *pst){
    index++;
    while(1){
        if (compare(arr[index][1],pst) == 0){
            index++;
            if(index == 101){
                return -1;
            }
            continue;
        }
        else{
            break;
        }
    }
    return index;
}

int search_publisher_book(char (*arr[3][30]),int index, char *pst){
    index++;
    while(1){
        if (compare(arr[index][2],pst) == 0){
            index++;
            if(index == 101){
                return -1;
            }
            continue;
        }
        else{
            break;
        }
    }
    return index;
}

int lend_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst){
    int index = search_title_book(arr, 0, *pst);
    char *title = arr[index][0];
    char *author = arr[index][1];
    char *publisher = arr[index][2];
    char *title_h = arr2[index][0];
    char *author_h = arr2[index][1];
    char *publisher_h = arr2[index][2];

    while(1){
        *title_h = *title;
        *title = 0;
        title++;
        title_h++;
        if (*title == '0'){
            break;
        }
    }

        while(1){
        *author_h = *author;
        *author = 0;
        author++;
        author_h++;
        if (*author == '0'){
            break;
        }
    }

        while(1){
        *publisher_h = *publisher;
        *publisher = 0;
        publisher++;
        publisher_h++;
        if (*publisher == '0'){
            break;
        }
    }

    return 1;
}

int return_book(char (*arr[3][30]),char (*arr2[3][30]), char *pst){
    int index = search_title_book(arr2, 0, *pst);
    char *title = arr2[index][0];
    char *author = arr2[index][1];
    char *publisher = arr2[index][2];
    char *title_l = arr[index][0];
    char *author_l = arr[index][1];
    char *publisher_l = arr[index][2];

    while(1){
        *title_l = *title;
        *title = 0;
        title++;
        title_l++;
        if (*title == '0'){
            break;
        }
    }

        while(1){
        *author_l = *author;
        *author = 0;
        author++;
        author_l++;
        if (*author == '0'){
            break;
        }
    }

        while(1){
        *publisher_l = *publisher;
        *publisher = 0;
        publisher++;
        publisher_l++;
        if (*publisher == '0'){
            break;
        }
    }

    return 1;
}

int compare(char *dst, char *pst){
    while (*pst){
        if (*pst == *dst){
            pst++;
            dst++;
        }
        else {
            return 0;
        }
    }

    if (*dst == '\0'){
        return 1;
    }
    
    return 0;
}