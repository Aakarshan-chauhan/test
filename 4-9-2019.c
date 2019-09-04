#include<stdio.h>
#include<math.h>

//to fin
void question_1(){
    int a ,b;
    printf("ENTER TWO NUMBERS : ");
    scanf("%d %d",&a,&b);
    printf("\na^b = %0.02f",pow(a,b));

}

void question_2()
{
    int a , b, c;
    float D, x;
    printf("\nEnter a, b and c\n");
    
    scanf("%d %d %d", &a, &b, &c);

    printf("\n%d*x^2 +  %d*x +  %d = 0 is your equation ", a,b,c);
    D = (b*b)- (4*a*c);
    if(D >=0)
    {
        if(D!=0)
        {
            x = ((-b)+sqrt(D))/(2*a);
            printf("\n X1 = %0.02f", x);
            x = ((-b)-sqrt(D))/(2*a);
            printf("\n X2 = %0.02f", x);
        }
        else
        {
             x = ((-b)+sqrt(D))/(2*a);
             printf("\n BOTH x are same: x = %0.02f",x);
        }
        
    } 
    else
    {
        printf("\nNo real roots exists");
    }

}

void question_3a()
{
    float a , b ,c;
    printf ("\nENTER TWO NUMBERS: ");
    scanf("%f %f", &a, &b);
    c = a;
    a = b;
    b = c; 
    printf ("\nTHE SWAPPED NUMBERS ARE :%f %f", a , b);
}

void question_3b()
{
    float a , b ;
    printf ("\nENTER TWO NUMBERS: ");
    scanf("%f %f", &a, &b);
    a = a+b;
    b = a - b;
    a = a - b; 
    printf ("\nTHE SWAPPED NUMBERS ARE :%f %f", a , b);
}

void question_4a(){
    int a , b ;
    printf ("\nENTER A NUMBER: ");
    scanf("%d", &a);
    printf("Absoltue value of a is = %d", abs(a));
}

void question_4b()
{
    int a , b ;
    printf ("\nENTER A NUMBER: ");
    scanf("%d", &a);
    (a<0)? printf("Absoltue value of a is = %d",(-1*a)): printf("Absoltue value of a is = %d", a);
}
int main()
{
    question_1();
    question_2();
    question_3a();
    question_3b();
    question_4a();
    question_4b();
    return 0 ;
}
