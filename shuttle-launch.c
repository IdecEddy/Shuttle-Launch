#include <stdio.h>
int main(){
	/*Declaration of variables*/
	int  AvgTemp;
	int  LowestTemp;
	char TempAnswer = 0;
	char RainAnswer = 0;
	/*PrintF statements to be used for calculations*/
	printf("What is the average temperature?\n");
	scanf("%d",&AvgTemp);
	printf("What is the lowest temperature in the last 24 hours?\n");
	scanf("%d",&LowestTemp);
	//while loops to see if what we put in is a y/Y or n/N
	//if not we ask the question again untill its a clean value.
	while(
	 TempAnswer != 78  &&
	 TempAnswer != 110 &&
	 TempAnswer != 89  &&
     TempAnswer != 121){	
		printf("Has the temperature been over 99 for more than 30 minutes? Please answer %c for yes and %c for no\n", 78, 89);
		scanf("%c",&TempAnswer);
	}
    while(
	 RainAnswer != 78  &&
     RainAnswer != 110 &&
     RainAnswer != 89  &&
     RainAnswer != 121){  
		printf("Is it raining currently? Please answer %c for yes and %c for no\n", 78, 89);
		scanf("%c",&RainAnswer);
	}
	//we test to see if the average and low temp are good for launch
	//and then test the TempAnswer and RainAnswer vs there ASCII code.  
	if(AvgTemp>41 && LowestTemp>32){
		if((TempAnswer == 78 || TempAnswer == 110) && (RainAnswer == 78 || RainAnswer == 110)){
			printf("It is a go. The shuttle will be launched as scheduled.\n");
		}
	}else{
		printf("The shuttle launch has been cancelled because:\n");
		if (AvgTemp<41){
			printf("%3c ~The average temperature is below 41 degrees.\n",' ');
		}
		if (LowestTemp<32){
			printf("%3c ~The temperature has dropped below freezing in the last 24 hours.\n",' ');
		}
		if (TempAnswer == 89 || TempAnswer == 121){
			printf("%3c ~The temperature has been over 99 degrees for more than 30 minutes.\n",' ');
		}
		if (RainAnswer == 89 || RainAnswer == 121){
			printf("%3c ~It is raining.\n", ' ');
		}
	}
	return 0;
}
