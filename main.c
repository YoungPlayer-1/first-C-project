#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int roll,n,i,j;
    char name[20],address[20],add[20];
    FILE *ptr1,*ptr2;
    ptr1= fopen("student.dat","w+");
    ptr2=fopen("student1.dat","w");
    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("enter number of students whose data is to be entered: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter roll number , name and address :");
        scanf("%d%s%s",&roll,name,address);
        fprintf(ptr1,"%d\t%s\t%s\n",roll,name,address);
    }
    
    rewind(ptr1);
    while(fscanf(ptr1,"%d%s%s",&roll,name,address)!=EOF){
        j = 0;
        while (address[j] != '\0') {
            add[j] = toupper((unsigned char)address[j]);
            j++;
        }
        add[j] = '\0';
        if (strcmp(add,"KATHMANDU") != 0) {
            fprintf(ptr2,"%d\t%s\t%s\n",roll,name,address);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    remove("student.dat");
    rename("student1.dat","student.dat");
    return 0;
}