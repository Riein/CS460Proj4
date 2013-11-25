/*
 * CS460 Project 4
 * DeadLock Detection
 * Corey Amoruso, Michael Swiger, Sasha Demiyanik
 */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int m;	//num of resources
int n;	//num of procs

/*Verifies command line argugements*/
void  checkCommand(int argc, char *argv[]){


	if(argc < 3){
		printf("Usage: %s <num res> <num procs>\n",argv[0]);
		exit(1);
	}

	else if(atoi(argv[1]) < 1){
		printf("Error: <num res> must be a positive integer\n");
		exit(1);
	}

	else if(atoi(argv[2]) < 1){
		printf("Error: <num procs> must be a positive integer\n");
		exit(1);
	}

}

/*verifies values read in from input file are valid*/
void checkInput(int pid, char req, int rid){
	if(pid >=  n){
		printf("Error: proc ID (%d) is out of bound.\n", pid);
		exit(1);
	}

	else if(rid >= m){
		printf("Error: res ID (%d) is out of bound.\n",rid);
		exit(1);
	}
	else if(req != 'A' || req != 'D'){
		printf("Error: req (%c) is not a recognized request.\n", req);
		exit(1);
	}
}

/*Entry Point*/
int main(int argc, char *argv[]){

	/*Verify correct user input*/
	checkCommand(argc, argv);

	/* Get command line arguments*/
	m = atoi(argv[1]);
	n = atoi(argv[2]);



	return 0;
}
