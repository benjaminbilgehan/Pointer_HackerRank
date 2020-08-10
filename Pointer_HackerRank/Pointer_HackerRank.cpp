#include <iostream>

void sum(int* a, int* b) {

    int Temp; 
    Temp = *a; 
    Temp = *a + *b; 
    *b = abs(*a - *b); 
    *a= Temp;

}

int main()
{

    int a,b;
    scanf_s("%d\n%d", &a, &b);
    sum(&a,&b);
    printf("%d\n%d", a, b);
    return 0;


}

