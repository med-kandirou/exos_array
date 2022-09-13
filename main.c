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


    /*float t[10],s=0;
    float m;
    int sup=0;
    printf("saisir les notes : \n");
    for(int j=0;j<10;j++){
        scanf("%f",&t[j]);
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
    printf("la moyeene est : %f \n",m);
    printf("nombre des notes superieur est : %d\n",sup);*/


    /*float t[20],s;
    s=1000;
    for(int j=0;j<20;j++){
        s=s+s*0.02;
        t[j]=s;
    }
    for(int k=0;k<20;k++){
        printf("le montant d'anne %d est : %f \n",k,t[k]);
    }

    */

    /*int t[6];
    int t2[6];
    printf("saisir le tableau : \n");
    for(int j=0;j<6;j++){
        scanf("%d",&t[j]);
    }
    for(int i=0;i<6;i++){
        t2[i]=t[5-i];
    }
    printf("le tableau reverse: \n");
    for(int j=0;j<6;j++){
        printf("%d \n",t2[j]);
    }*/


    /*int n;
    int nbr=2;
    int count=0;
    int premier=0;
    printf("saisir un nombre : \n");
    scanf("%d",&n);
    int t[n];
    do{
        for(int i=2;i<nbr;i++){
            if(nbr%i==0){
                premier=1;
                break;
            }
        }
        if(premier==0){
            t[count]=nbr;
            count++;
        }
        nbr++;
        premier=0;
    }while(count<=n);

    for(int j=0;j<n;j++){
        printf("les nombres premier sont : %d\n",t[j]);
    }*/

    /*int t[10];
    int max1,max2;
    printf("les valeurs :\n");
    for(int j=0;j<10;j++){
        scanf("%d",&t[j]);
    }
    max1=t[0];
    max2=t[0];
    for(int i=0;i<10;i++){
        if(max1<t[i]){
            max2=max1;
            max1=t[i];
        }
        if(max2<t[i] && max1>t[i]){
            max2=t[i];
        }
    }
    printf("Max 1 : %d\n",max1);
    printf("Max 2 : %d\n",max2);*/



    int t[10];
    int n,nbr,index,boite,boite2;
    printf("le nombre de que vou pouvez saisir : ");
    scanf("%d",&n);
    printf("leS valeures : \n");
    for(int j=0;j<n;j++){
        scanf("%d",&t[j]);
    }
    if(n>=10){
        printf("tableau plein \n");
    }
    else{
        printf("le nombre : ");
        scanf("%d",&nbr);
        printf("l index : ");
        scanf("%d",&index);

        for(int i=index;i<=n;i++){
            if(index==i){
                boite=t[i];
                t[i]=nbr;
                t[i+1]=boite;
            }
            else{
                boite=t[i];
                t[i+1]=t[i];
            }
        }
        for(int j=0;j<=6;j++){
            printf("%d  ",t[j]);
        }
    }



































    return 0;
}
