#include<stdio.h>
typedef struct{
	int no;
	int age;
	int height;
}Person;
void sort(Person *array,int n){
	int i,j;
	Person temp;
	if(array==NULL||n<0){
		printf("error");
	}
	else{
		for(i=n-1;i>0;i--){
			for(j=n-1;j>(n-1-i);j--){
				if(array[j].no<array[j-1].no){
					temp=array[j];
					array[j]=array[j-1];
					array[j-1]=temp;
				}
				else{
					if(array[j].no==array[j-1].no){
						if(array[j].age<array[j-1].age){
							temp=array[j];
							array[j]=array[j-1];
							array[j-1]=temp;
						}
						else{
							if(array[j].age==array[j-1].age){
								if(array[j].height<array[j-1].height){
									temp=array[j];
									array[j]=array[j-1];
									array[j-1]=temp;
								}
							}
						}
					}
				}
			}
		}
	}
}