#include<stdio.h>
#include<conio.h>
main()
{
	
	int i , j=0, k,len=0;
	double delay;
	char name[20],c;
	char* l;
	int time=9;				//how much time it takes to print the character
	
	char symbol;	
	//model is an char array that contains all the data of shapes of all alphabates.
	char model[7][27][20] ={{ "   #     ", "######   ", "  ####   ","#####    ","#######  ","#######  ","  ####   ","#     #  ","#######  ","      #  ","#    #   ","#       ","#           # ","#     # ","  ###   ","#####   ","  ###   ","#####   ","  ####  ","####### ","#     # ","#     # ","#      #      # ","#     # ","#     # ","####### ","   "},
					        { "  # #    ", "#     #  ", " #    #  ","#    #   ","#        ","#        "," #    #  ","#     #  ","   #     ","      #  ","#   #    ","#       ","##         ## ","##    # "," #   #  ","#    #  "," #   #  ","#    #  "," #    # ","   #    ","#     # ","#     # ","#     # #     # "," #   #  "," #   #  ","     #  ","   "},
							{ " #   #   ", "#     #  ", "#        ","#     #  ","#        ","#        ","#        ","#     #  ","   #     ","      #  ","#  #     ","#       ","# #       # # ","# #   # ","#     # ","#     # ","#     # ","#     # ","#       ","   #    ","#     # ","#     # ","#    #   #    # ","  # #   ","  # #   ","    #   ","   "},
							{ "#     #  ", "######   ", "#        ","#     #  ","#####    ","#####    ","#        ","#######  ","   #     ","      #  ","###      ","#       ","#  #     #  # ","#  #  # ","#     # ","#    #  ","#  #  # ","#    #  "," ####   ","   #    ","#     # ","#     # ","#   #     #   # ","   #    ","   #    ","   #    ","   "},
						    { "#######  ", "#     #  ", "#        ","#     #  ","#        ","#        ","#   ###  ","#     #  ","   #     "," #    #  ","#  #     ","#       ","#   #   #   # ","#   # # ","#     # ","#####   ","#   # # ","#####   ","     #  ","   #    ","#     # "," #   #  ","#  #       #  # ","  # #   ","   #    ","  #     ","   "},
							{ "#     #  ", "#     #  ", " #    #  ","#    #   ","#        ","#        "," #    #  ","#     #  ","   #     "," #    #  ","#   #    ","#       ","#    # #    # ","#    ## "," #   #  ","#       "," #   #  ","#   #   "," #    # ","   #    ","#     # ","  # #   ","# #         # # "," #   #  ","   #    "," #      ","   "},
							{ "#     #  ", "######   ", "  ####   ","#####    ","#######  ","#        ","  ####   ","#     #  ","#######  ","  ####   ","#    #   ","####### ","#     #     # ","#     # ","  ###   ","#       ","  ### # ","#    #  ","  ####  ","   #    "," #####  ","   #    "," #           #  ","#     # ","   #    ","####### ","   "}		
																			};
	while(1==1)
	{			
		printf("Choose any Character::");
		scanf("%c",&symbol);
		gets(name);	
		char temsym=symbol;	
		printf("Enter any string::");
		gets(name);
		printf("\n");
		len=0;
		for(j=0;name[j]!='\0';j++)
			len+=1;
		
		for(i=0;i<=6;i++)
		{
			for(j=0;j<len;j++)
			{
				c=name[j];
				if(c>=65 && c<=90)	c+=32; //for converting uppercase to lower case				
				if(c==32)	    	l=model[i][26];  //for space
				else				l=model[i][c-97];	//letter a index in array is 0 and ascii code is 97 
				if(temsym==97)		symbol=c-32;
				for(k=0;l[k]!='\0';k++)		//	printing symbols one by one
				{
					if (l[k]==35)	printf("%c",symbol);
					else	printf(" ");
					
					for(delay=0;delay<(111111*time/len);delay+=0.05)	continue;	//Use for delay before printing next character

				}				
			}
			printf("\n");
		}
		printf("\n");
    }
}
