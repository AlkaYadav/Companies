/*

 * minSwap.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: user


//given an array 0 1 2 3 find min number of ways to convert it into 1 0 2 3. Allowed
//operations are, you can only swap an element with the 0 element.

//Convert A to B

#include <iostream>
#include<vector>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;
int searchEle(int ele,int A[],int len){
	int i;
	for( i=0;i<len;i++){
		if(A[i]==ele){
			break;
		}
	}
	return i;
}
void minimumSwaps(int A[],int B[],int len){
	int i=len-1;
	int j=i;
	int cnt=0;
	cout<<"Hi"<<endl;
	while(i>=0&& j>=0){
		if(A[i]==B[j]){
			i--;
			j--;
		}
		else{
			if(A[0]==B[j]){
				swap(A[i],A[0]);
				cnt++;
			}
			else{
		int indx=searchEle(B[j],A,len);
		swap(A[indx],A[0]);
		cnt++;
		swap(A[i],A[0]);
		cnt++;
			}
			i--;
			j--;
		}
	}
	cout<<"Minimum is "<<cnt<<endl;
}

int main(){
	int A[]={1,2,3,5,4};
	int B[]={1,2,3,5,4};
	int len=sizeof(A)/sizeof(A[0]);
	minimumSwaps(A,B,len);
}
*/
