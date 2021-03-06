
#include <bits/stdc++.h>
#define st struct stu


using namespace std;

struct stu
{
    int roll;
    int marks;
    struct stu *next = NULL;
};

int main()
{
    struct stu *start=NULL, *newNode, *currNode=NULL;
    char p='y';
    int i=1;

    //create

    while(p == 'y' || p == 'Y')
    {
        printf("Enter node %d\n",i++);
        newNode=(struct stu*)malloc(sizeof(struct stu));
        scanf("%d%d", &newNode->roll, &newNode->marks);
        if(start==NULL)
        {
            start=newNode;
        }
        else
        {
            currNode->next=newNode;
        }
        currNode=newNode;
        printf("Do you wanna add more nodes?(Y/N)");
        fflush(stdin);
        cin>>p;
        }

    printf("\n");

    //display

    struct stu *latestNode=NULL;
    latestNode = start;
    do
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
        latestNode = latestNode->next;
    }while(latestNode->next != NULL);

    if (latestNode->next == NULL)
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
    }


    //reversal


    st *pre = start, *post = start, *curr = start; //curr stands for currentNode
    while(curr!=NULL)
    {
        post = curr->next;
        if(curr == start)
            curr->next = NULL;
        else
            curr->next = pre;

        pre = curr;
        curr = post;
        start = pre;        //**we change the start here so that we do not need another variable
    }                       //**remember not to use this further in the code for any other purpose



    //display the reversed linkedList


    printf("\n\nThe reversed linkedList is:\n\n");


    latestNode=NULL;
    latestNode = start;
    do
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
        latestNode = latestNode->next;
    }while(latestNode->next != NULL);

    if (latestNode->next == NULL)
    {
        printf("Roll no %d got %d marks\n", latestNode->roll, latestNode->marks);
    }



    return 0;
}
