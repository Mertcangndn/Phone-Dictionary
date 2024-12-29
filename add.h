int add(void){
	profile kisi;
	
	FILE *dosya;
	dosya=fopen("rehber.txt","a");
	
	if(dosya == NULL){
		return -1;
	}
	
	printf("\nEnter the name: ");
	scanf("%s",kisi.name);
	
	printf("\nEnter the surname: ");
	scanf("%s",kisi.surname);
	
	printf("\nEnter the phone number: ");
	scanf("%d",&kisi.number);
	
	fprintf(dosya,"\n%s %s %d",kisi.name,kisi.surname,kisi.number);
	
	fclose(dosya);
	return 0;
}
