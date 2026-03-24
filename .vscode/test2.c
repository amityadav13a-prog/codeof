#include<stdio.h>
int oddsum(int n) {
int total = 0;
for (int i = 1; i<= n; i += 2) {
if (i % 3 == 0) continue; 
total += i;
if (total>50) break;
}
return total;
}
int main() {
int n;
scanf("%d",&n);
printf("%d\n", oddsum5
    (n));
return 0;}