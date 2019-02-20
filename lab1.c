# include <stdio.h>
# include <stdlib.h> 

main()
{
 float temp,c,f,k;
 char bukva;
 printf("$ tconvert\t");
 scanf("%f  ",&temp); //ввод числа
 bukva=getchar();     //ввод буквы (если нет шкалы - ввести любую букву, отличную от C F K)  
 
 switch(bukva){
    case 'c'://celsius
    f = (temp * 1.8) + 32.0;
    k=temp+273.15;
    printf("%.2f F \n%.2f K ",f,k);
    break;

    case 'f'://fahr
    c = (5.0/9.0) * (temp-32.0);
    k=(temp - 32.0) / (9.0 / 5.0) + 273.15;
    printf("%.2f C \n%.2f K ",c,k);
    break;

    case 'k'://kelvin
    f = 1.8 * (temp - 273.15) + 32.0;
    c = temp - 273.15;
    printf("%.2f C \n%.2f F ",c,f);
    break;

    default://если ввдена любая буква, отличная от C F K
    f = (temp * 1.8) + 32.0;
    k=temp+273.15;
    printf("%.2f C\n%.2f F\n%.2f K\n",temp,f,k);

    c = (5.0/9.0) * (temp-32.0);
    k=(temp - 32.0) / (9.0 / 5.0) + 273.15;
    printf("\n%.2f F\n%.2f C\n%.2f K\n",temp,c,k);

    f = 1.8 * (temp - 273.15) + 32.0;
    c = temp - 273.15;
    printf("\n%.2f K\n%.2f C\n%.2f F",temp,c,f);    
 }
return 0;
}
