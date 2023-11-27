#include<stdio.h>
#include<string.h>
#include <ctype.h> 
int main(){	
	char characters[100];
	int count; 
	do{	
		printf("\n*********menu*******\n");
		printf("1. Nhap vao chuoi ki tu \n");
		printf("2. In ra do dai chuoi  va noi dung vua nhap \n");
		printf("3. In ra chuoi dao nguoc \n");
		printf("4. In ra so luong chu cai trong chuoi \n");
		printf("5. In ra so luong chu so trong chuoi \n");
		printf("6. In ra so luong k tu dac biet trong chuoi \n");
		printf("7. thoat \n");
		int choice; 
		printf("nhap lua chon cua ban :\n");
		scanf("%d",&choice); 
		switch (choice){
			case 1:
				printf("nhap vao chuoi ki tu characters: \n");
				scanf("%s",&characters); 
				break;
			case 2:
				printf("chuoi vua nhap la :%s \n",characters);	 
				printf("do dai chuoi la :%d \n",strlen(characters));
				break;
			case 3:
				for(int i=0; i<strlen(characters); i++){ 
					int reverse = characters[i]; 
					characters[i]=characters[strlen(characters)-i-1];
					characters[strlen(characters)-i-1] = reverse; 
				}
				printf("%s",characters); 
				break;
			case 4:
				for(int i=0; i<strlen(characters); i++){
					if(isalpha(characters[i])){
					count++; 
					} 
				}
				printf("so luong chu cai la %d",count); 
				break; 
			case 5:
				for(int i=0; i<strlen(characters); i++){
					if(isalnum(characters[i])){
					count++; 
					}
				}
				printf("so luong chu so la %d",count); 
				break;
			case 6:
				for(int i=0; i<strlen(characters); i++){
					if(isdigit(characters[i]) || isalpha(characters[i])){
					}else{
						count++; 
					}
				}printf("so luong chu so o dac biet la %d",count); 
				break;	 
		    case 7:
           	 	printf("thoat\n");
            	break;
 	        default:
            	printf("khong hop le\n");
            	break;
	}
 }while(1==1); 
}
