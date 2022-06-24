/*  Program treba izracunat kosinus seriju pomocu funkcije cos(x).  */

#include<stdio.h>
#include<math.h>

int faktorijal(int n)
{
        int i,fact=1;
        for(i=1;i<=n;i++)
                fact=fact*i;
                
        return fact;
}


int main()
{
        double x, cosx=1, z, red;
    	int j, n, i,znak=1;

        printf("Unesi vrijednost za x : ") ;  // Npr 45 180 90 360
        scanf("%lf", &x) ;
        printf("\nUnesi vrijednost za n : ") ;   // Npr 10 20
        scanf("%d", &n) ;

        x = x * 3.14159 / 180 ;   // Pretvaranje stupnjeva u radijane
    i=0;
    z=cos(x);

        for(i=2;i<=n;i=i+2)
    {
        znak=-znak;
                red=znak*pow(x,i)/faktorijal(i);
        cosx=cosx+red;
    }

        printf("\ncos(x) je priblizno %.15lf\n", cosx);
    printf("\ncos(x) prema zadanoj funkciji je %.15lf\n", z);

    return 0;
}
