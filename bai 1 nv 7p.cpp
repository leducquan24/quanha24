#include <stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		bool flag;
		int x;
		// do{
		flag = false;// reset gia tri kiem tra
			printf("nhap gia tri arr[%d]=",i);
			scanf("%d",&x);
			// tim x trong mang tu 0 -> i-1
			for(int j=0;j<i;i++){
				if(arr[j]==x){
					flag= true;
					break;
				}
			}
		}
    }
