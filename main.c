
#include "func.h"

int main(int argc, char *argv[]){
	if (argc > 2){
		printf("You could not provide more than 1 parameter.\n");
	}
	else if(argc == 2){
		wishGoodDay(argv[1]);
	}
	else{
		wishGoodDayAnon();
	}
	return 0;
}
