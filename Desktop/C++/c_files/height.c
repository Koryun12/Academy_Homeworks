#include <stdio.h>

int main() {
    float weight, height, bmi; // Փոփոխականների հայտարարում

    // Մուտքագրում օգտվողից
    printf("Մուտքագրեք ձեր քաշը (կգ): ");
    scanf("%f", &weight); // %f ձևաչափը օգտագործվում է float տիպի համար

    printf("Մուտքագրեք ձեր հասակը (մետրերով): ");
    scanf("%f", &height);

    // BMI-ի հաշվարկ
    bmi = weight / (height * height);

    // Արդյունքի տպում
    printf("Ձեր մարմնի զանգվածի ինդեքսը (BMI): %.2f\n", bmi);

    return 0;
}

