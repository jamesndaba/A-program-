//structure in laguage
#include<stdio.h>
#include<string.h>
struct Books 
{

char title[30];
char author[30];
char isbn[13];
int publication_year;
float price ;
};
void printBook(struct Books book);

int main ()
{
struct Books Book1;
strcpy(Book1.title,"introduction to programming");
strcpy(Book1.author,"john smith");
strcpy(Book1.isbn,"9780131103627");
Book1.publication_year=2022;
 Book1.price=49.99;

printf("title : %s\n",Book1.title);
printf("author : %s\n",Book1.author);
printf("isbn : %s\n",Book1.isbn);
printf("price : %f\n",Book1.price);
printf("publication_year : %d\n",Book1.publication_year);
  
  
 return 0;
}
