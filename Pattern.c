/*
 ============================================================================
 Name        : Pattern.c
 Author      : 
 Version     :
 Copyright   : copyright Abhikappana
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


1.
		#include <stdio.h>
		#include <stdlib.h>

		int main(void) {
			int i,j,k=0;
			for(i=1;i<=7;i++){
				i<5?k++:k--;
				for(j=1;j<=7;j++){
					if(j>=9-(k+k)){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}


			return EXIT_SUCCESS;
	}


	 *
       ***
     *****
   *******
     *****
       ***
         *


=========================================================================
2.
	#include <stdio.h>
		#include <stdlib.h>

		int main(void) {
			int i,j,k;
			for(i=1;i<=5;i++){
				k=i-1;
				for(j=1;j<=6;j++){
					if(j<=7-i){
						printf("%d",k%2);
						k++;

					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}

		return EXIT_SUCCESS;
		}

		010101
		10101
		0101
		101
		01

=========================================================================
3.
		#include <stdio.h>
		#include <stdlib.h>

		int main(void) {
			int i,j,k=0;
			for(i=1;i<=9;i++){
			i<6?k++:k--;
				for(j=1;j<=9;j++){
					if(j==6-k||j==4+k){
						printf(" *");

					}
					else{
						printf("  ");
					}
				}
				printf("\n");
			}

		return EXIT_SUCCESS;
		}


	        *
	      *   *
	    *       *
	  *           *
	*               *
	  *           *
	    *       *
	      *   *
	        *

===========================================================================
4.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
			int i,j;
				for(i=1;i<=5;i++){

					for(j=1;j<=5;j++){
					if(j<=6-i){
						printf("%d",j);

								}
								else{
									printf(" ");
								}
							}
							printf("\n");
						}


			return EXIT_SUCCESS;
		}


	12345
	1234
	123
	12
	1

	==========================================================================
5.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
			int i,j;
				for(i=1;i<=5;i++){

					for(j=1;j<=5;j++){
					if(j==6-i||i==1||i==5){
						printf("*");

								}
								else{
									printf(" ");
								}
							}
							printf("\n");
						}


			return EXIT_SUCCESS;
		}

	*****
    	   *
          *
         *
	*****

=============================================================================
6.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=7;i++){
				for(j=1;j<=13;j++){
					if(j<=15-(i+i)){
						printf("* ");
					}
				}
				printf("\n");
				if(i==7){
					break;
				}
					for(k=1;k<=2;k++){
					printf("* ");
				}
				printf("\n");
			}


			return EXIT_SUCCESS;
		}


		* * * * * * * * * * * * *
		* *
		* * * * * * * * * * *
		* *
		* * * * * * * * *
		* *
		* * * * * * *
		* *
		* * * * *
		* *
		* * *
		* *
		*

===============================================================================

7.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=5;i++){
				k=1;
				for(j=1;j<=9;j++){
					if(j<=11-(i+i)){
						printf("%d",k);
					}
					j<6-i?k++:k--;
				}
				printf("\n");

			}


			return EXIT_SUCCESS;
		}


	123454321
	1234321
	12321
	121
	1

===============================================================================
8.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=4;i++){

				for(j=1;j<=1;j++){
					printf("*\n");
				}

				for(k=1;k<=3*i;k++){
					printf("*");
					if(k%3==0){
						printf("\n");
					}
				}


			}


			return EXIT_SUCCESS;
		}

	*
	***
	*
	***
	***
	*
	***
	***
	***
	*
	***
	***
	***
	***

	===============================================================================
9.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=3;i++){

				for(j=1;j<=2*(i*i);j++){
					printf("*");
					if(j%(2*i)==0){
						printf("\n");
					}
				}
				if(i==3){
					break;
				}
				for(k=1;k<=3;k++){
					printf("*\n");
				}


			}


			return EXIT_SUCCESS;
		}

	**
	*
	*
	*
	****
	****
	*
	*
	*
	******
	******
	******


===============================================================================
10.

	#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j;
			for(i=1;i<=8;i++){

				for(j=1;j<=8;j++){

					if(j==1||i==8||j==9-i||j==i||j==8||i==1){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}


			return EXIT_SUCCESS;
		}

********
**    **
* *  * *
*  **  *
*  **  *
* *  * *
**    **
********

=======================================================================
11.

	#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j;
			for(i=1;i<=5;i++){

				for(j=1;j<=9;j++){

					if(j==6-i||j==4+i||i==5){
						printf("* ");
					}
					else{
						printf("  ");
					}
				}
				printf("\n");
			}


			return EXIT_SUCCESS;
		}



	    *
	   * *
	  *   *
	 *     *
	*********

===============================================================
12.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=3;i++){

				for(j=1;j<=2+i;j++){
					for(k=1;k<3+i;k++){
						if(k<=j)
						printf("x");
					}
					printf("\n");
				}
			}
			return EXIT_SUCCESS;
		}


			x
			xx
			xxx
			x
			xx
			xxx
			xxxx
			x
			xx
			xxx
			xxxx
			xxxxx

================================================================================
13.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=4;i++){
				k=1;
				for(j=1;j<=8;j++){

					if(j<=i||j>=9-i){
						printf("%d",k);
					}
					else{
						printf(" ");
					}
					if(j<=4){
						k++;
					}
					if(j>=4){
						k--;
					}

				}
				printf("\n");
			}


			return EXIT_SUCCESS;
		}


		1******1
		12****21
		123**321
		12344321

===========================================================================
14.

#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k=50;
			for(i=1;i<=4;i++){

				for(j=1;j<=4;j++){
					if(j<=i){
						printf("%d ",k);
						k-=5;
					}
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

			50
			45 40
			35 30 25
			20 15 10 5
=======================================================================================

15.

#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=4;i++){

				for(j=1;j<=i;j++){
					printf("*\n");
				}

				for(k=1;k<=2*i;k++){
					printf("*");
				}
				printf("\n");

			}
			return EXIT_SUCCESS;
		}



		*
		* *
		*
		*
		* * * *
		*
		*
		*
		* * * * * *
		*
		*
		*
		*
		* * * * * * * *


======================================================================================================
16.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,a=65,n=1;
			for(i=1;i<=7;i++){

				for(j=1;j<=7;j++){
					if(j<=i){
						if(i%2==0){
						printf("%d",n);
						}
						else{
							printf("%c",a);
						}
					}
					else{
						printf(" ");
					}
				}
				i%2==0?n++:a++;
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

			A
			11
			BBB
			2222
			CCCCC
			333333
			DDDDDDD

====================================================================================
17.
#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=5;i++){
				k=1;
				for(j=1;j<=9;j++){
					if(j<=11-i*2){
						printf("%d",k);

					}
					else{
						printf(" ");
					}
					j<6-i?k++:k--;
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

			123454321
			1234321
			12321
			121
			1
====================================================================================
18.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=4;i++){

				for(j=1;j<=1;j++){
						printf("*\n");
					}
				for(k=1;k<=3*i;k++){
					printf("*");
					if(k%3==0){
						printf("\n");
					}

				}

			}
			return EXIT_SUCCESS;
		}

*
* * *
*
* * *
* * *
*
* * *
* * *
* * *
*
* * *
* * *
* * *
* * *

==============================================================================
19.
#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=6;i++){
				k=1;
				for(j=1;j<=11;j++){
					if(j< i+i){
						printf("%d",k);

					}
					else{
						printf(" ");
					}
					j<i?k++:k--;
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

1
121
12321
1234321
123454321
12345654321

===============================================================================
20.

#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=6;i++){
				k=1;
				for(j=1;j<=6;j++){
					if(j<=i){
						if(j%2==0){
							printf("*");
						}
						else{
							printf("%d ",k*i);

						}
					k++;
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}


			1
			2*
			3*9
			4*12*
			5*15*25
			6*18*30*
======================================================================
21.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j;
			for(i=1;i<=5;i++){

				for(j=1;j<=5;j++){
					if(j==i||j==1||j==5){
						printf("#");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

	#     #
	# #   #
	#  #  #
	#   # #
	#     #

===========================================================================
22.

#include <stdlib.h>
		int main(void) {
		int i,j;
			for(i=1;i<=5;i++){

				for(j=1;j<=5;j++){
					if(j==i||j==1||i==5){
						printf("%d ",j);
					}
					else{
						printf("  ");
					}
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

		1
		1 2
		1   3
		1     4
		1 2 3 4 5

==============================================================================================
23.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k;
			for(i=1;i<=4;i++){

				for(j=1;j<=;j++){
					printf("#");
					if(j%2==0){
						printf("\n");
					}
				}
				if(i==4){
					break;
				}
				for(k=1;k<=5*i;k++){
					printf("#");
					if(k%5==0){
						printf("\n");
					}
				}

			}
			return EXIT_SUCCESS;
		}

		##
		##
		#####
		##
		##
		##
		#####
		#####
		##
		##
		##
		##
		#####
		#####
		#####
		##
		##
		##
		##
		##

=================================================================================
24.
		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j;
			for(i=1;i<=4;i++){

				for(j=1;j<=11;j++){
					if(j<=i*2-1 || j>=14-i*2-1){
						printf("* ");
					}
					else{
						printf("  ");
					}
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

	* 		    	  	*
	* * *           * * *
	* * * * *   * * * * *
	* * * * * * * * * * *

===================================================================================
25.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,k,m=2;
			for(i=1;i<=3;i++){
				if(i<3){
					m=2;
				}else{
					m=3;
				}
				for(j=1;j<=m*i;j++){

						printf("*");
						if(j%i==0){
							printf("\n");
					}

				}
				for(k=1;k<=3*i;k++){
					printf("*");
				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

	*
	*
	* * *
	* *
	* *
	* * * * * *
	* * *
	* * *
	* * *
	* * * * * * * * *
=======================================================================================
26.

		#include <stdio.h>
		#include <stdlib.h>
		int main(void) {
		int i,j,m;

			for(i=1;i<=5;i++){
				m=i-1;
				for(j=1;j<=11;j++){
					if(j>=6-i&&j<=4+i){
						printf("%d",m);
						j<5?m--:m++;
					}
					else{
						printf(" ");
					}

				}
				printf("\n");
			}
			return EXIT_SUCCESS;
		}

		    0
	   	   101
		  21012
		 3210123
		432101234
