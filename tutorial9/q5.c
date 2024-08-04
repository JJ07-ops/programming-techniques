#include <stdio.h>

struct person
{
	char firstname[20];
    char lastname[20];
    char gender[20];
    int YearOfBirth;
};

int main(void)
{
    struct person HealthProfile;
    puts("Enter first name: ");
    scanf("%s", HealthProfile.firstname);
    puts("Enter last name: ");
    scanf("%s", HealthProfile.lastname);
    puts("Enter gender: ");
    scanf("%s", HealthProfile.gender);
    puts("Enter Year Of Birth: ");
    scanf("%d", &HealthProfile.YearOfBirth);

    int age = 2023 - HealthProfile.YearOfBirth;

    printf("First Name: %s\n", HealthProfile.firstname);
    printf("Last Name: %s\n", HealthProfile.lastname);
    printf("Gender: %s\n", HealthProfile.gender);
    printf("Year of Birth: %d\n", HealthProfile.YearOfBirth);
    printf("Age: %d\n", age);

    return 0;
}