#include <stdio.h>
struct student
{
    char name[50];
    int age;
    float height;
};
int main()
{
    struct student s;
    
 printf("Enter The Information of Students :\n\n");
    
 printf("Enter Name : ");
    scanf("%s",s.name);
    
 printf("Enter age. : ");
    scanf("%d",&s.age);
    
    printf("Enter height : ");
    scanf("%f",&s.height);
    
    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("id: %d\n",s.age);
    printf("Marks: %.2f\n",s.height);
    return 0;
}
