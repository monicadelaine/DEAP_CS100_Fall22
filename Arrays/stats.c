#include <stdio.h>
#include <math.h>

int main() {

    // scan #items
    int size;
    printf("Enter how many items:\n");
    scanf("%d", &size);

    // scan N items, store in array
    int nums[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // check
    // for (int i = 0; i < size; i++) {
    //     printf("nums[%d]=%d\n", i, nums[i]);
    // }

    // calc mean/avg (sum/size)
    int sum = 0;
    for (int i = 0; i < size; i++) { // foreach item
        sum += nums[i];
    }
    double avg = (double)sum / size;
    printf("avg = %lf\n", avg);

    // calc var (avg(diff^2))
    double var = 0;
    for (int i = 0; i < size; i++) {
        double diff = avg - nums[i];
        printf("%lf + ", diff * diff);
        var += diff * diff;
    }
    var /= 5;
    printf("var = %lf\n", var);

    // calc sd (sqrt(var))
    double sd = sqrt(var);
    int sdRounded = round(sd);
    printf("sd = %d (%.2lf)\n", sdRounded, sd);

    return 0;
}
