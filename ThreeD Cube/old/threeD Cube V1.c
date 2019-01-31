	#include<stdio.h>
	#include<math.h>
	
	int points[8][3];
	int pos[3]={0,0,0};
	int out[70][40]={0};
	
	int main(void)
	{
		int i,j,k;
		int px,py;
		double temp;
		char input;
		
		for(i=0;i<8;i++)
		{
			points[i][0]=10+(4*(i/4));
			points[i][1]=-2+(4*((i/2)%2));
			points[i][2]=-2+(4*(i%2));
		}
		
		do
		{
			system("cls");
			for(j=39;j>=0;j--)
			{
				for(i=0;i<70;i++)
				{
					out[i][j]=0;
				}
			}
			
			for(i=0;i<8;i++)
			{
				temp=atan(fabs((double)(pos[2]-points[i][2]))/fabs((double)(pos[0]-points[i][0])))*180/6.283186;
				px=temp;
				if(temp-(double)px>=0.5)
				{
					px++;
				}
				if(pos[2]>points[i][2])
				{
					px=35-px;
				}
				else
				{
					px+=35;
				}
				
				temp=atan(fabs((double)(pos[1]-points[i][1]))/fabs((double)(pos[0]-points[i][0])))*180/6.283186;
				py=temp;
				if(temp-(double)py>=0.5)
				{
					py++;
				}
				if(pos[1]>points[i][1])
				{
					py=20-py;
				}
				else
				{
					py+=20;
				}
				if(px>=0&&px<70&&py>=0&&py<40)
				{
					out[px][py]=1;
				}
			}
			
			for(j=39;j>=0;j--)
			{
				for(i=0;i<70;i++)
				{
					if(out[i][j]==1)
					{
						printf("%c",219);
					}
					else
					{
						printf(" ");
					}
				}
				printf("|\n");
			}
			
			input=getch();
			switch(input)
			{
				case 'w':
					pos[0]++;
					break;
				case 'a':
					pos[2]--;
					break;
				case 's':
					pos[0]--;
					break;
				case 'd':
					pos[2]++;
					break;
				case 'r':
					pos[1]++;
					break;
				case 'f':
					pos[1]--;
					break;
			}
		}
		while(input!=27);
		
		return 0;
	}
