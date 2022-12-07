#include <stdio.h>
#include <conio.h>

main(){
	int nilai, nim;
	
	printf("=================================================================\n");
    printf("|| Menentukan Grade Nilai || UTS Amalia Zakia Zhk || 2211510488");
    printf("\n=================================================================");
    
	printf("\nMasukan NIM: ");
	scanf("%i", &nim);
	
	nim=nim%2;
	
	switch(nim){
		case 0: printf("\nMasukan Nilai: ");
				scanf("%i", &nilai);
				
				if((nilai >= 76) && (nilai <= 100)){
					printf("\nGrade A");
				}else if((nilai >= 66) && (nilai <= 75)){
					printf("\nGrade B");
				}else if((nilai >= 51) && (nilai <= 65)){
					printf("\nGrade C");
				}else if((nilai >= 0) && (nilai <= 50)){
					printf("\nGrade D");
				}else{
					printf("TIDAK LULUS");
				}
				
		 break;
		 case 1: printf("Masukan Nilai: ");
				scanf("%i", &nilai);
				
				if((nilai >= 76) && (nilai <= 100)){
					printf("\nGrade A");
				}else if((nilai >= 66) && (nilai <= 75)){
					printf("\nGrade B");
				}else if((nilai >= 51) && (nilai <= 65)){
					printf("\nGrade C");
				}else if((nilai >= 0) && (nilai <= 50)){
					printf("\nGrade D");
				}else{
					printf("TIDAK LULUS");
				}
				
		 break;
		 getche();
	}
	
	return 0;
}