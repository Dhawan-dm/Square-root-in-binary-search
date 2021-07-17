#include <stdio.h>
int binRoot(int n)
{
    int mid,start=0,end=n/2,result=0;
    while(start<=end){
        mid = start +(end-start)/2;
        if(mid*mid==n)
        {
            return mid;

        }
        else if(mid*mid>n)
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }

    return result;

}
int main() {

	int n;
	scanf("%d",&n);
	int result = binRoot(n);
    printf("%d",result);
	return 0;
}
