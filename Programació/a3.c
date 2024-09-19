int main(){
float far;
float cel;
printf("Introdueix el graus");
scanf("%f",&far);
while (getchar() != '\n');

cel = (5/9)*(far-32);
printf("cel:%.2f",cel);
    return 0;
}