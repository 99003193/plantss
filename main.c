#include<stdio.h>
#include<string.h>
#include "plant.h"
int main()
{
	char a[10];
	int plants=0;
	printf("ENTER DISEASE NAME AMONG THESE \n Rice blast \n Brown spot of rice \n Sheath blight of rice \n Bacterial leaf blight \n Downy Mildew \n Powdery Mildew \n Anthracnose \n Early leaf blight \n Leaf mold Potato tuber moth \n Agrotis ypsilon \n Myzus persicae ");
	printf("*******ENTER DISEASE NAME******* \n ");
	scanf("%s",a);
	plants=plant(a);
	if(plants==1){	
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Pseudomonas fluorescens @ 10g/kg of seed ");
	}
	if(plants==2){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray field twice with Mancozeb@0.2%");
	}
	if(plants==3){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Propiconazole@0.1% or Hexaconazole@0.2%");
		
	}
	if(plants==4){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Streptocycline(250 ppm) along Cu oxychloride(0.3%) \n ");
		
	}
	if(plants==5){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Bordeaux mixture 0.5% at 15 days gap \n ");
		
	}
	if(plants==6){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n");
		printf("Spray Sulfar 2.0 g/l or Dinocap 0.25 ml/l \n ");
		
	}
	if(plants==7){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray copper hydroxide 2.0 g/l or Chloronthalonil 2kg/ha ");
		
	}
	if(plants==8){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Mancozeb 80WP at 1.5 - 2 lb/100 gal at 5 days gap \n ");
		
	}
	if(plants==9){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Tanos 50WG at 6-8 oz at 3 days gap\n ");
	}
	if(plants==10){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Lambda cyhalothrin 600ml/ha \n ");
		
	}
	if(plants==11){
		
		printf("***PESTICIDES SUGGESTED FOR THE TREATMENT*** \n ");
		printf("Spray Actara(thiamethoxam) 25WG 600g/ha\n ");
		
	}
	
	
	
	
	
	
	
	return 0;
}
