/*

 * measureOneLitre.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: user


//Measure one litre using two vessels and infinite water supply
#include<iostream>
using namespace std;
void measureOneLitre(int capacity1,int capacity2){
	int v1=0,v2=0,step=0;
	while(v1!=1){
		cout<<"Vessel 1 "<<v1<<" and vessel2 "<<v2<<endl;
		if(v1==0){
			v1=capacity1;
		}
		if(v2==capacity2){
			v2=0;
		}
		else if(v2>capacity2){
			v1=v2-capacity2;
			v2=capacity2;

		}
		else{
		v2+=v1;
		v1=capacity1;
		}
		step++;
	}
	cout<<"No. of steps "<<step<<endl;
}

int main(){
	int capacity1=3,capacity2=7;
	measureOneLitre(capacity1,capacity2);
}

*/
