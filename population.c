#include <stdio.h>

int main(void)
{
    int
	
	double startPop = 1.0;  
	double birthRate = -0.0;
	double deathRate = -0.0;
	int yearNum = 0;
    
    while(startPop < 2)
    {
    	printf("Please enter the starting size of the population: ");
        scanf("%lf", &startPop);
    	
        if(startPop >= 2)
        {
        	while(birthRate < 0.0)
        	{
        		printf("Please enter the birth rate of the population: ");
        		scanf("%lf", &birthRate);
        		
        		if(birthRate >= 0)
        		{
            		while(deathRate < 0.0)
            		{
            			printf("Please enter the death rate of the population: ");
            			scanf("%lf", &deathRate);
            			
            			if(deathRate >= 0.0)
            			{
            				while(deathRate < 0.0)
            				{
            					printf("Please enter the number of years to calculate: ");
            				    scanf("%d", yearNum);
            				    
            				    if(yearNum >= 1)
            				    {
            				    	
            				    	for ( int i = 0; i < numYears; i++)
            				    	{
            				    		double newPop = startPop + (startPop * birthRate) - (startPop * deathRate);
            				    		newPop = startPop;
            				    	    printf("After %d years : %lf", i+1, newPop);
            				    	}
            				    	
            				    }
            				    
            				    else
            				    {
            				    	printf("Year number cannot be less than 1.");
            				    }
            			}
            			
            			else
            			{
            				printf("Death rate cannot be less than 0.");
            			}
            		}
        		}
        		
        		else
        		{
        			printf("Birth rate cannot be less than 0.");
        		}
        	}
        }
        
        else
        {
        	printf("Starting size cannot be less than 2.");
        }
    }

    return 0;
}