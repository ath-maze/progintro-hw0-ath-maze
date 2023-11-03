#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc!=3){
        printf ("0 \n");
        return 1;}

long long int N1 = atoi (argv[1]);
long long int N2 = atoi (argv[2]);
    if (N1 > N2) {
        printf ("0 \n");}
    else if (N1 <= 0 || N1 > 100000000 || N2 <= 0 || N2 > 100000000){
        printf ("0 \n");}
    else {

int max = -1;
    for (int i=N1; i <= N2; ++i) {
        long long int N = i;
        int sum = 1;
        do {
            ++sum;
            if (N == 1) {
                    sum = 1;}
            else if (N % 2 == 0) {
                    (N = N / 2);}
            else {
                    (N = 3 * N + 1);}
        }
        while (N != 1);

        if (i == 0 || max < sum){
            max = sum;
        }
    }
    printf ("%d\n", max); 
    return 0;
}
}
