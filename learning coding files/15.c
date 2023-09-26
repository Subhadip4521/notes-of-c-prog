//print pass if you get greater than equal to 40% in total and 33% for each subject.otherwise fail.//

#include<stdio.h>

int main()
{
    float physics, chemistry, maths;
    float total;
    printf("\n enter physics number ");
    scanf("%f",&physics);
    printf("\n enter chemistry number ");
    scanf("%f",&chemistry);
    printf("\n enter maths number ");
    scanf("%f",&maths);
    total=(physics+chemistry+maths)/3;
    if((total<40) || (physics<33) || (chemistry<33) || (maths<33)){
        printf("your percentage is %f and you are fail\n ",total);
    }
    else{
        printf("your percentage is %f and you are pass\n ",total);
    }
    return 0;
}