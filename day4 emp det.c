#include <stdio.h>
struct employee
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct employee s;
    
 printf("Enter The Information of Students :\n\n");
    
 printf("Enter Name : ");
    scanf("%s",s.name);
    
 printf("Enter age. : ");
    scanf("%d",&s.age);
    
    printf("Enter salary : ");
    scanf("%f",&s.salary);
    
    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("id: %d\n",s.age);
    printf("Marks: %.2f\n",s.salary);
    return 0;
}
