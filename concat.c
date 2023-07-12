#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// credits             : Theo GACHET & Kawtar EL MAMOUN

void concat();

int main()
{
   concat();
   return 0;
}

void concat()
{
   FILE *f = fopen("dataset/CMP-training-000.csv", "r"); 
   FILE *saut_ligne = fopen("saut_ligne.csv", "r");
   FILE *resultat = fopen("resultat.csv", "w"); 
    
   char nom_fichier[] = "dataset/CMP-training-000.csv";
   int j, k;
   char c;

   for (int j = 0 ; j < 6 ; j++ )
   {
      for (int k = 0 ; k < 10 ; k++ )
      {
         if ((j==5 && k==9)) break;
         else
         {
            nom_fichier[22] = j+'0';
            nom_fichier[23] = k+'0';
         
            FILE *f = fopen(nom_fichier, "r"); 
         
            if (f == NULL || resultat == NULL || saut_ligne == NULL) 
            {
               puts("Impossible d'ouvrir les fichiers"); 
               exit(EXIT_FAILURE);
            }

            fseek(f, 463*sizeof(char), SEEK_SET);         // on ignore la première ligne de chaque fichier
            while ((c = fgetc(f)) != EOF) 
               fputc(c, resultat);
               
            fclose(f); 
         }
      }
   } 
   fclose(resultat); 
   fclose(saut_ligne);
}
