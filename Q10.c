// // You are using GCC
// Q.1 Maximum and minimum of an array using minimum number of comparisons
// Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

// Examples:

// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35


#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int arry[a];
for(int z=0;z<a;z++){
scanf("%d",&arry[z]);
}
int cool=arry[0];
int fool=arry[0];
int small;
for(int i=0;i<a;i++){
    if(cool<arry[i]){
        cool=arry[i];
    };
    if(fool>arry[i]){
        fool=arry[i];
    }
}
printf("Maximum element is: %d\n",cool);
printf("Minimum element is: %d",fool);

}