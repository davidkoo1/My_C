#include <bits/stdc++.h>
#include <string.h>
#define N 14
#define M 16
#define siz 20
main()
{
	char wordPazzle[siz][siz];
	
	FILE *f;
	f = fopen("Puzzle.txt","r");
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			fscanf(f,"%c", &wordPazzle[i][j]);
			printf(" %c", wordPazzle[i][j]);
		}
	}
	fclose(f);
	
	std::string str = "BLUE";
	std::string str1 = "EULB";
	
	
	for(int i = 0; i < siz; i++)
	{
		for(int j = 0; j < siz; j++)
		{
			//вправо
			if(wordPazzle[i][j] == str[0] && wordPazzle[i][j + 1] == str[1])
			{
				//printf("\n[%d %d]\n", i , j);
				
				std::string str2 = "";
				for(int k = 0, h = j; k < str.length() || h < M; k++, h++)
				{

					if(str[k] == wordPazzle[i][h])
					{
						str2 += str[k];
						//printf("%c", str[k]);	
					}
				}
				if(str == str2)
				{
					printf("\nYES1\n");
					//for(int k = 0; k < str2.length(); printf("%c", str2[k++]));
				}
			} //влево
			else if(wordPazzle[i][j] == str[str.length() - 1] && wordPazzle[i][j + 1] == str[str.length() - 2])
			{
				std::string str2 = "";
				for(int k = 0, h = j; k < str1.length() || h < M; k++, h++)
				{

					if(str1[k] == wordPazzle[i][h])
					{
						str2 += str1[k];
						//printf("%c", str[k]);	
					}
				}
				if(str1 == str2)
				{
					printf("\nYES2\n");
					//for(int k = 0; k < str2.length(); printf("%c", str2[k++]));
				}
			}//вниз
			/*
			if(wordPazzle[i][j] == str[0] && wordPazzle[i+1][j] == str[1])
			{
				std::string str2 = "";
				for(int k = 0, h = i; k < str.length() || h < N; k++, h++)
				{

					if(str[k] == wordPazzle[h][j])
					{
						str2 += str[k];
						//printf("%c", str[k]);	
					}
				}
				if(str == str2)
				{
					printf("\nYES3\n");
					//for(int k = 0; k < str2.length(); printf("%c", str2[k++]));
				}
			}*/
		}
	}
	
}

/*
U E W W E A R Y R E S I M A D
N D V O A N G U I S H B L U E
E G E O L Y H E L P L E S S T
A Y S S L L Y T E O Y C L A A
S G O E A N E A N H I S A F I
Y R N F N E C M T N L U I R L
G O E U F E P P F I G I O I M
O C S U O M N E I R I R J D U
O H L O Y R P D D K T U S O H
M Y H S M O S M E E A F R W K
Y T R U H B M E D D T N E N R
N O I T A L E R A D E R O B A
N C H E E R Y R J R D A E R D
T T A E B P U Y Y L A I N E G
*/