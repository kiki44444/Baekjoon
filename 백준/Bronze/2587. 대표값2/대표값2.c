# include <stdio.h>

int main(void){
    int nums[5];
    int sum = 0;
    for(int i=0; i<5; i++){
        scanf("%d", &nums[i]);
    }

    // 버블정렬
    for(int i=0; i<5; i++){
        for(int j=1; j<5-i; j++){
            int temp;
            if(nums[j-1] > nums[j]){
                temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        sum += nums[i];
    }

    printf("%d\n%d\n", sum/5, nums[2]);
    return 0;
}