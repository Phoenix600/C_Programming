#include<stdio.h>


int main()
{
    int any_number;

    printf("[+]Enter any 4 digit number : ");
    scanf("%d",&any_number);

    switch (any_number%10)
    {
    
    case 0 :
        printf("Magic 8 Ball > An end of old world and begining of new world");
        break;
    case 1 :
        printf("Magic 8 Ball > ");
        break;
    
    case 2:
        printf("There is escaping from the karma....");
        break;
    case 3:
        printf("What's being really bad, living life as a good person, or becoming bad and living like beast");
        break;
    case 4:
        printf("Put others first");
        break;

    default: 
    
        printf("Well, he wont come back to you...");
        break;
    }

}