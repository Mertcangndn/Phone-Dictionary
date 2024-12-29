int list(void){
	
	profile kisi;
	
	printf("\n");
	
	FILE *dosya;
	dosya = fopen("rehber.txt","r");
	if(dosya == NULL){
		printf("Mission Unsuccesful\n");
	}
	else{
		printf("Name\t\t\tSurname\t\t\tNumber\n");
		printf("----\t\t\t-------\t\t\t------\n");
		while(!feof(dosya)){
		fscanf(dosya,"%s %s %d",kisi.name,kisi.surname,&kisi.number);  //Ayrý yazmayý da dene.
		printf("%s\t\t\t%s\t\t\t%d\n",kisi.name,kisi.surname,kisi.number);
		}
	}
	
	return 0;
}
