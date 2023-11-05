#include <stdio.h>
#include <stdlib.h>

    int faktoriyel(int faktoriyel_sayi)
    {
        int i;
        int sonuc=1;
        for(i=1;i<=faktoriyel_sayi;i++)
        {
            sonuc=sonuc*i;
                    }
                    return sonuc;
    }



int main()
{
    /*1'den 10'a kadar her bir sayinin faktoriyelini hesaplayan ve sonuclarini liste-
    leyen C programý yazýnýz. */
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d! = %d\n",i,faktoriyel(i));
    }
    return 0 ;
}
