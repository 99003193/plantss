#include<plant.h>
int plant(char a[100]){	
	if(strcmp(a,"Downy mildew")==0)
	{
		return 1;
	}
		else if(strcmp(a,"Powdery mildew")==0)
	{
		return 2;
	}
		else if(strcmp(a,"Anthracnose")==0)
	{
		return 3;
	}
		else if(strcmp(a,"Greenaria bitter rot")==0)
	{
		return 4;	
    }
	else if(strcmp(a,"Bacterial leaf spot")==0)
	{
		return 5;
	}
		else if(strcmp(a,"Alternaria blight")==0)
	{
		return 6;	
    }
	else if(strcmp(a,"Black rot")==0)
	{
		return 7;
	}
		else if(strcmp(a,"Blue mould rot")==0)
	{
		return 8;	
    }
	else if(strcmp(a,"Black mould rot")==0)
	{
		return 9;
	}
		else if(strcmp(a,"Green mould rot")==0)
	{
		return 10;	
    }
	else if(strcmp(a,"Rhizopus rot")==0)
	{
		return 11;
	}
		else if(strcmp(a,"Rust")==0)
	{
		return 12;	
    }
    else{
    	printf("**please choose the disease name from the above list of diseases** \n");
	}
}	
