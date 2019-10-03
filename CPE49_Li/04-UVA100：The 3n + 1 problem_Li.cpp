#include<stdio.h>

int main(){
  int a, b;
  int maxn, n;
  int i, j;
  while(scanf("%d %d", &a, &b)!=EOF){
    maxn = 0;
    if(a<b){
	  for(i=a; i<=b; i++){
	    n = 1;
	    j = i;
	    while(j!=1){
	      if(j%2==0) j = j/2;
	      else       j = j*3+1;
          n++;
	    }
	    if(n>maxn) maxn = n;
	  }
    }
    else{
	  for(i=b; i<=a; i++){
	    n = 1;
	    j = i;
	    while(j!=1){
	      if(j%2==0) j = j/2;
	      else       j = j*3+1;
          n++;
	    }
	    if(n>maxn) maxn = n;
	  }
    }
    printf("%d %d %d\n", a, b, maxn);
  }
  
  return 0;
}
