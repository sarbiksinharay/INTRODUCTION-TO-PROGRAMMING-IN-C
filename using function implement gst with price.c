#include<stdio.h>
void price(float value);
int main(){
    float value;
    printf("ENTER THE PRICE:");
    scanf("%f",&value);
    price(value);

}
void price(float value){
    float price;
    float gst;
    gst=(value*0.18);
    price=value+gst;
    printf("GST AMOUNT: %f\n",gst);
    printf("PRICE WITH GST: %f",price);
}