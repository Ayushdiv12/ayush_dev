#include <stdio.h>
#include<string.h>
int main() {
struct person{
    int age;
    float salery;
    char name[50];
    char rating;
} rohan,deepak,sameer;
   rohan.age=29;
   deepak.age=32;
   deepak.salery=98098.78;
   sameer.rating='A';
   rohan.salery=89002.78;
   rohan.rating='A';
   sameer.salery=79054.98;
   deepak.rating='A';
   strcpy(deepak.name,"deepak kumar sahu");
   strcpy(rohan.name,"rohan kumar gupta");
   printf("%d\n",rohan.age);
   printf("%s\n",deepak.name);
   printf("%s\n",rohan.name);
   printf("%c\n",deepak.rating);
   printf("%f\n",sameer.salery);

    return 0;
}