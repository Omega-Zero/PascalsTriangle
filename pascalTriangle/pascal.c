//Jeffrey Marple
//Lab 4 pascal.c


#include <stdio.h>



int readInt();
int pascalterm(int row, int term);
long long  factorial(long long num);
void calcPascalTriangle(int wantedRows);

int main(){
	
		int userIn = readInt();

		if (userIn >= 0 && userIn <= 20){		
			calcPascalTriangle(userIn);
		}else{
			printf("Invalid input \n");
			return 1;
		}

return 0;
}

void calcPascalTriangle(int wantedRows){
	printf("Here is the triangle \n");
			for(int row = 0; row<wantedRows; row++ ){
				printf("\n");

				for(int col = 0; col<=row; col++){
					printf("%d ", pascalterm(row, col));
				}//forRow

			}//forCol
		printf("\n");
}




int readInt(){
	int c = 0;
	int i = 0;
	printf("Enter how many rows of the triangle you'd like up to 20 \n");
	
	while( (c = getchar()) != EOF && c != '\n' )
	{
		if( c >= '0' && c <= '9')	
			i = i * 10 + (c - '0');	
	}

	return i;
}



//T [n, k ] = n ! / (( n - k )! k ! )
// n = row    ;    k = term
int pascalterm(int row, int col){
	
	return (factorial(row)) / ( (factorial(row - col)) * factorial(col) );

}




long long  factorial(long long num){
  if (num == 0) 
    return 1;
  else
    return (num*factorial(num-1));
}



