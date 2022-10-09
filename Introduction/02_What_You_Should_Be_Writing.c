#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>

#define SPEED_OF_LIGHT 3e8
#define SPEED_OF_ELEC 300000000

int operand_2 = 2;
const float pi = 3.141;

struct ReadCSV
{
    char name[50];
    int ID;
    char designation[30];
    FILE* fp;

};

struct ReadCSV* createCSVObject()
{
    struct ReadCSV* excelObject = (struct ReadCSV*)malloc(sizeof(struct ReadCSV));

    return excelObject;
}

void addDataToFile(struct ReadCSV* excelObject)
{
    excelObject->fp = fopen("test.csv","a+");

    fflush(stdin);

    printf("Enter the following data : \n");
    printf("Name : ");
    gets(excelObject->name);

    printf("Designation : ");
    gets(excelObject->designation);

    printf("ID  : ");
    scanf("%d",&excelObject->ID);


    fprintf(excelObject->fp,"%s, %s, %d\n",excelObject->name,excelObject->designation,excelObject->ID);

    fclose(excelObject->fp);

}

int main()
{
    printf("%.2lf\n",SPEED_OF_LIGHT);
    printf("%d\n",SPEED_OF_ELEC);
    printf("%d",(int)(SPEED_OF_LIGHT));

    struct ReadCSV* node = createCSVObject();

    addDataToFile(node);
    addDataToFile(node);
    addDataToFile(node);

    return 0;
}