#include<stdio.h>
#pragma pack(1)

struct aadhar{
    char *name;
    int age;
    int aadhar;
    float height;
}a1;
struct aadhar1{
    char *name;
    int age;
    int aadhar;
    float height;
};
struct aadhar1 a2;
void main()
{
    printf("Normal size value : %d\n",sizeof(a1));
    printf("Packed size value : %d\n",sizeof(a2));


}