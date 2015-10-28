/*
#include <iostream>
#include <string.h>
using namespace std;

// M is number of applicants and N is number of jobs
#define M 6
#define N 6

bool bpm(bool bpGraph[M][N],int applicant,int job[],bool visited[N]){
	for(int i=0;i<N;i++){
		if(bpGraph[applicant][i]&& !visited[i]){
		visited[i]=true;
		if(job[i]<0 || bpm(bpGraph,job[i],job,visited)){
			return true;
		}
	}
}
	return false;
}
int maxBPM(bool bpGraph[M][N]){
	int cnt=0;
	int job[N];
	for(int i=0;i<N;i++){
		job[i]=-1;
	}
	for(int i=0;i<M;i++){
		bool visited[N];
		for(int i=0;i<N;i++){
			visited[i]=false;
		}
		if(bpm(bpGraph,i,job,visited)){
			cnt++;
		}
	}
	cout<<"Max applicants are "<<cnt<<endl;
}
int main()
{
    // Let us create a bpGraph shown in the above example
    bool bpGraph[M][N] = {  {0, 1, 1, 0, 0, 0},
                        {1, 0, 0, 1, 0, 0},
                        {0, 0, 1, 0, 0, 0},
                        {0, 0, 1, 1, 0, 0},
                        {0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 1}
                      };

    cout << "Maximum number of applicants that can get job is "
         << maxBPM(bpGraph);

    return 0;
}
*/
