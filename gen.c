// Diccionario con 3 patrones, DNIs que empiezan en 15000000
// y terminan en 450000000, todos con un 014 adelante, despues el mismo
// rango con un 004, y finalmente los DNI solos
//
// cuando me instalaron el internet el técnico usó solo mi dni, pero tambien
// se les pone 004 y 014 según el genero del cliente (lo ultimo lo leí en internet y lo ví en algunas redes de mis amigos)
//
// solo hice esto porque era mas rapido que aprender a usar crunch

#include <stdio.h>
int main ()
{
   FILE * fp;
   unsigned int dni_ini = 15000000;
   unsigned int dni_fin = 45000000;
   long int  i;
   fp = fopen ("dic.txt","w");   
   for(i = dni_ini; i < dni_fin;i++){
       fprintf (fp,"014%ld\n",i);
   }
   for(i = dni_ini; i < dni_fin;i++){
       fprintf(fp,"004%ld\n",i);
   }
   for(i = dni_ini; i < dni_fin;i++){
       fprintf(fp,"%ld\n",i);
   }
   fclose (fp);
   return 0;
}
