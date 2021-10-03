// Sort an array using c programing langauge
  #include <stdio.h>
    void main()
    {

        int i, j, a, n, num[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i){
            printf("Enter element : %d",i+1);
            scanf("%d", &num[i]);
        }
        for (i = 0; i < n; ++i) 
        {

            for (j = i + 1; j < n; ++j)
            {

                if (num[i] < num[j]) 
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The numbers arranged in drsending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

    }
