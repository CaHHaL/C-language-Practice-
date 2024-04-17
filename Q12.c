//In a busy airpot,passengers are holding ticket with unique number.
// Write a program using the linear search algorithm to check to check if a given ticket number exists in the array of ticket numbers.
// If the ticket number is found, print a congratulatory message along with the position where its found.If the ticket number is not found,encourage  the passenger with a message for better luck on the next attempt

// Input format :-
// The first line of input consists of an integer N,representing the number of tickets.
// The second line consists of N space-separated integers,representing the ticket numbers.
// The third line consists of an integer,representing the ticket number to search.

// OUTPUT format:-
// If the ticket number is found print "Congratulations! Ticket number X found at position Y!,Where X is the ticket number and Y is the position (position starts from 1)".
// otherwise,print"Better luck next time! Ticket number X not found!",Where X is the ticket number 

#include<stdio.h>
int main(){
    int n,search;
    scanf("%d",&n);
    int tickets[n];
    for(int i=0;i<n;i++){
        scanf("%d",&tickets[i]);
    }
    scanf("%d",&search);
    int position =-1;
    for(int i=0;i<n;i++){
        if(tickets[i]==search){
            position=i+1;
            break;
        }
    }
    if(position!=-1){
        printf("Congratulation! ticket number %d found at position %d!\n",search,position);
    }else{
        printf("Better luck next time! Ticket number %d not found\n",search);
    }
}