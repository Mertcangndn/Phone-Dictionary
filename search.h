int search(void){
	profile kisi;
	
	char sname[20];
	
	FILE *dosya;
	dosya = fopen("rehber.txt","r");
	if(dosya==NULL)
		return -1;
		
	printf("Please enter a name for search: ");
	scanf("%s",sname);
	
	do{
		fscanf(dosya,"%s %s %d",kisi.name,kisi.surname,&kisi.number);	
	}while(!feof(dosya)&&(!strstr(sname,kisi.name)));
	
	if(feof(dosya)&&(!strstr(sname,kisi.name))){
		printf("Name not found, please try again.\n");
	}
	else{
		printf("Name\t\t\tSurname\t\t\tNumber\n");
		printf("----\t\t\t-------\t\t\t------\n");
		printf("%s\t\t\t%s\t\t\t%d\n",kisi.name,kisi.surname,kisi.number);
	}
	
	fclose(dosya);
	return 0;
}
