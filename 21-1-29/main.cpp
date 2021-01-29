//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//bool pan(int tmp)
//{
//    int a,b,c,n;
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    for(int i=1;i<4;i++)
//    {
//        n=tmp*i;
//        a=n/100;
//        b=(n%100)/10;
//        c=n%10;
//        for(int j=0;j<9;j++)
//        {
//            if(arr[j]==a)
//                arr[j]=0;
//            if(arr[j]==b)
//                arr[j]=0;
//            if(arr[j]==c)
//                arr[j]=0;
//        }
//    }
//    for(int m=0;m<9;m++)
//    {
//        if(arr[m])
//            return false;
//    }
//    return true;
//}
//void shu(int i,int j,int k)
//{
//    int arr[]={i,j,k},tmp;
//    if(pan(100*arr[0]+10*arr[1]+arr[2]))
//        cout<<100*arr[0]+10*arr[1]+arr[2]<<" "<<2*(100*arr[0]+10*arr[1]+arr[2])<<" "<<3*(100*arr[0]+10*arr[1]+arr[2])<<endl;
//    for(int l=0;l<3;l++)
//        for(int r=l+1;r<4;r++)
//        {
//            tmp=arr[l];
//            arr[l]=arr[r%3];
//            arr[r%3]=tmp;
//            if(pan(100*arr[0]+10*arr[1]+arr[2]))
//                cout<<100*arr[0]+10*arr[1]+arr[2]<<" "<<2*(100*arr[0]+10*arr[1]+arr[2])<<" "<<3*(100*arr[0]+10*arr[1]+arr[2])<<endl;
//        }
//}
//int main()
//{
//    int arr[9]={1,2,3,4,5,6,7,8,9};
//    for(int i=0;i<7;i++)
//        for(int j=i+1;j<8;j++)
//            for(int k=j+1;k<9;k++)
//                shu(arr[i],arr[j],arr[k]);
//    return 0;
//}
//#include<stdio.h>
//int visit[10] ={0};
//
//void breakNum(int n){
//	int a = n/100;
//	int b = n/10 % 10;
//	int c = n%10;
//	visit[a] = 1;
//	visit[b] = 1;
//	visit[c] = 1;
//}
//
//int main(){
//	for(int n1=123; n1<333;n1++){
//		int n2=n1*2;
//		int n3 = n1*3;
//		breakNum(n1);
//		breakNum(n2);
//		breakNum(n3);
//		for(int i=1;i<=9;i++){
//			if(visit[i] ==0)
//				break;
//			if(i==9)
//				printf("%d %d %d\n",n1,n2,n3);
//		}
//		for(int i =1 ;i <=9;i++){
//			visit[i] = 0;
//		}
//
//	}
//	return 0;
//
//}
#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
int x , y , z;
int d [9]= {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
do{
x = d [0] * 100 + d [1] * 10 + d [2];
y = d [3] * 100 + d [4] * 10 + d [5];
z = d [6] * 100 + d [7] * 10 + d [8];
if(y == x * 2 && z == x * 3)
cout << x <<" "<< y <<" "<< z << endl ;
} while ( next_permutation (d , d + 9));
return 0;
}
