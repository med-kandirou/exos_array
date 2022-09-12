#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*51
    float t[10];
    double s=0,p=1,m=0;
    for(int i=0;i<10;i++){
        printf("saisir la valeur %d :",i);
        scanf("%f",&t[i]);
    }

    for(int i=0;i<10;i++){
        s+=t[i];
        p*=t[i];
    }
    m=s/10;
    printf("la somme :%f \n",s);
    printf("le produit :%f \n",p);
    printf("la moyenne :%f \n",m)*/


    /*int u[3];
    int v[3];
    float s;
    for(int i=0;i<3;i++){
        printf("saisir le vecteur 1 :");
        scanf("%d",&u[i]);
    }
    for(int j=0;j<3;j++){
        printf("saisir le vecteur 2 :");
        scanf("%d",&v[j]);
    }
    for(int k=0;k<3;k++){
        s+=u[k]*v[k];
    }
    printf("le produit scalaire est :%f \n",s);*/



    /*int min ,max,n;
    printf("saisir la taille :");
    scanf("%d",&n);
    int t[n];
    printf("saisir le tableau : \n");
    for(int j=0;j<n;j++){
        scanf("%d",&t[j]);
    }
    min=t[0];
    max=t[0];
    for(int i=0;i<n;i++){
        if(min>t[i]){
            min=t[i];
        }
        if(max<t[i]){
            max=t[i];
        }
    }
     printf("min :%d \n",min);
    printf("max  :%d \n",max);*/



    /*int t[10],n;
    int exist=0;
    printf("saisir le tableau : \n");
    for(int j=0;j<10;j++){
        scanf("%d",&t[j]);
    }
    printf("saisir un nombre: ");
    scanf("%d",&n);

    for(int j=0;j<10;j++){
        if(n==t[j]){
            exist=1;
        }
    }
    if(exist==1){
        printf("exist");
    }
    else{
        printf("non exist");
    }*/


    /*int t[20],n;
    int occu=0;
    printf("saisir le tableau : \n");
    for(int j=0;j<20;j++){
        scanf("%d",&t[j]);
    }
    printf("saisir un nombre: ");
    scanf("%d",&n);

    for(int j=0;j<20;j++){
        if(n==t[j]){
            occu++;
        }
    }
    printf("le nbr de occurance est : %d",occu);*/


    float t[10],s=0;
    float m;
    int sup=0;
    printf("saisir les notes : \n");
    for(int j=0;j<10;j++){
        scanf("%d",&t[j]);
    }
    for(int i=0;i<10;i++){
        s+=t[i];
    }
    m=s/10;
    for(int k=0;k<10;k++){
        if(t[k]>m){
            sup++;
        }
    }
    printf("la moyeene est : %f\n",m);
    printf("nombre des notes superieur est : %d\n",sup);














    return 0;
}
