/*
 *
 *  Copyright (c) 2020. Clarksfield TETI Lab Skill.
 *  Universitas Gadjah Mada.
 *  All right reserved.
 *
 *  Semangat!!
 *
 */

#include <stdio.h>
#include <stdlib.h>

// defining global variables
int x1,v1,x2,v2;

// defining void function
void loncat(x1,v1,x2,v2);
void getinput();

int main(){
	// getting user input
	getinput();
	//checking user defined value
	if(0<=x1 && x1<x2 && x2<=1e3 && 1<=v1 && v1<=1e3 && 1<=v2 && v2<=1e3){
		// doing some "loncat"
		loncat(x1,v1,x2,v2);
		exit(0);
	} else {
		//print some info if the input value isn't in the range of allowed value
		printf("\nPlease check your input value!\n\nAllowed value:\n0≤x1<x2≤1000\n0≤v1,v2≤1000\n");
		exit(1);
	}
}

void getinput(){
	printf("Please input x1,v1,x2,v2 (separated by space): ");
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
}

void loncat(x1,v1,x2,v2){
	if(v1 > v2) {
		do{
			x1 += v1;
			x2 += v2;
		}while(x1<x2);
		if(x1 == x2) printf("YES\n");
		else printf("NO\n");
	} else if(v1 <= v2) {
		printf("NO\n");
	}
}
