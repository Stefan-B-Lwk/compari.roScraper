#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    FILE *fisier = fopen("linklaptopuri.txt", "r");
    FILE *scriere = fopen("aux.txt","w+");
    char email[50];
    char em[55];
    strcpy(em,"To: ");
    scanf("%s",email);
    strcat(em,email);

    fprintf(scriere,"%s\n","From: remusatorul04@gmail.com");
    fprintf(scriere,"%s\n",em);
    fprintf(scriere,"%s\n","Subject: AutoSend");

    char buffer[256];
    char sysBuffer[256+19];
    char z[25];
    int i=0;


    while (fgets(buffer,256,fisier)){
        if(i==0)
            {fprintf(scriere,"%s",buffer);
            fclose(scriere);}
        else
            {scriere = fopen("aux.txt","a");
            fprintf(scriere,"%s",buffer);
            fclose(scriere);}

        fgets(buffer,256,fisier);
        snprintf(sysBuffer, sizeof(sysBuffer), "./pricesearch.sh %s", buffer);
        system(sysBuffer);

        i++;
    }   

    char command[101];
    strcpy(command,"cat aux.txt | msmtp -a gmail ");
    strcat(command,email);

    if(i!=0)
        system(command);
}