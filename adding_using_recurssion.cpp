    #include <stdio.h>
    int addNumbers(int n);
    int main()
    {
    	int i;
        int num;
        printf("Enter an integer: ");
        scanf("%d", &num);
        for (i=1;i<num+1;i++)
       		printf("%d +",i);
        printf(" = %d",addNumbers(num));
        return 0;
    }
    int addNumbers(int n)
    {
    	int i;

    	
        if(n != 0)
        	return n + addNumbers(n-1);
    
        else
            return n ;
    }
