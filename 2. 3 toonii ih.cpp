#include <stdio.h>
#include <conio.h>
main(){
int a,b,c,max;
printf("a,b,c=");
scanf("%i %i %i",&a,&b,&c);
if(a>b) {if(a>c) max=a;
else max=c;
} else { if(b>c) max=b;
else max=c;
}
printf("max=%i",max);
getch();
return 0;
}

