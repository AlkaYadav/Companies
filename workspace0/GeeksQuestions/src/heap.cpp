/*
#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int compare(long long int a,long long int b){
	return a>b;
}
int main()
{
    long long int Q,choicenum;
    cin>>Q;
    vector<long long int> v_minheap;
    vector<long long int> v_maxheap;
    make_heap(v_minheap.begin(),v_minheap.end(),compare);
    make_heap(v_maxheap.begin(),v_maxheap.end());
    map<long long int,long long int> m;
    int choice;
    long long int num;
    for(int i=0;i<Q;i++){
    	cin>>choice;
    	if(choice==1){
    		   cin>>num;
    		   m[num]++;
    		   v_minheap.push_back(num);
    		   push_heap(v_minheap.begin(),v_minheap.end(),compare);
    		   v_maxheap.push_back(num);
    		   push_heap(v_maxheap.begin(),v_maxheap.end());
    	}
    		   else if(choice==2){
    		   	cin>>num;
    		   if(m[num]>0){
    		              m[num]--;
    		   }
    		   else{
    		   	int res=-1;
    		   	cout<<res<<endl;
    		   }
    		   }
    		   else if(choice==3){
    		   	if(v_maxheap.empty()){
    		   		int res=-1;
    		   		cout<<res<<endl;
    		   	}
    		   	else{
    		   		while(true){
    		   			if(m[v_maxheap[0]]>0){
    		   				cout<<v_maxheap[0]<<endl;
    		   				break;
    		   			}
    		   			else{
    		   				pop_heap(v_maxheap.begin(),v_maxheap.end());
    		   				v_maxheap.pop_back();
    		   				if(v_maxheap.empty()){
    		   					int res=-1;
    		   					cout<<res<<endl;
    		   					break;
    		   				}
    		   			}
    		   		}
    		   	}
    	}



    		   else if(choice==4){
    		       		   	if(v_minheap.empty()){
    		       		   		int res=-1;
    		       		   		cout<<res<<endl;
    		       		   	}
    		       		   	else{
    		       		   		while(true){
    		       		   			if(m[v_minheap[0]]>0){
    		       		   				cout<<v_minheap[0]<<endl;
    		       		   				break;
    		       		   			}
    		       		   			else{
    		       		   				pop_heap(v_minheap.begin(),v_minheap.end(),compare);
    		       		   			v_minheap.pop_back();
    		       		   				if(v_minheap.empty()){
    		       		   					int res=-1;
    		       		   					cout<<res<<endl;
    		       		   					break;
    		       		   				}
    		       		   			}
    		       		   		}
    		       		   	}
    		       	}



    return 0;
}
}
*/
