#include <stdio.h>
#include <unistd.h>

void count_up(void);
void alarm_e (int saat,int dakika,int saniye);
unsigned int hour    = 0;
unsigned int minute  = 0;
unsigned int seconde = 0; 
int main(){
  char secim;
  int saat,dakika,saniye;	
  printf ("Alarm kurmak istermisiniz : (E) (H)\n");
  scanf("%c",&secim);
  printf("Saat : , Dakika : ,Saniye : ");
  scanf("%d,%d,%d",&saat,&dakika,&saniye);	
		
  while(1){
    if(secim=='E'||secim=='e')
	alarm_e(saat,dakika,saniye);
    count_up();
    printf("\t\t %02d:%02d:%02d",hour,minute,seconde);
    sleep(1);
    printf("\r");
    fflush(stdout);
  } 
return 0;
}

void count_up(void){  
  if(seconde>=59){
     seconde=0;
     minute++;
  }
  else if(minute>=59){
     minute=0;
     hour++;
     seconde++;   
  }
  else if(hour>=24){
     hour=0;
     seconde++;      
  }
  else{
     seconde++;
  }
}
void alarm_e(int saat,int dakika,int saniye){

if(saat == hour&& dakika== minute&& saniye == seconde){
	for(int i =0;i<5;i++){
		printf("\a");
		count_up();
		printf("\t\t %02d:%02d:%02d",hour,minute,seconde);
		sleep(1);
		printf("\r");
		fflush(stdout);
}

}



}
