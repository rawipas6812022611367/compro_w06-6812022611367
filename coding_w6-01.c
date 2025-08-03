#include <stdio.h>

int main(){
    int a=5;                                                //เก็บข้อมูลจำนวนเต็ม
    int b=17;                                               //เก็บข้อมูลจำนวนเต็ม
    double c=8.5;                                           //เก็บข้อมูลจำนวนทศนิยม
    double d=4.0;                                           //เก็บข้อมูลจำนวนทศนิยม

    printf("assign >> a=%db=%dc=%.1fd=%.1f\n",a,b,c,d);     //แสดงค่าตัวแปรทั้งหมด
    printf("d+a=%.1f\n",d+a);                               //แสดงผลลัพธ์ d+a
    printf("a-b=%d\n",a-b);                                 //แสดงผลลัพธ์ a-b
    printf("c*d=%.1f\n",c*d);                               //แสดงผลลัพธ์ c*d
    printf("a*c=%.1f\n",a*c);                               //แสดงผลลัพธ์ a*c
    printf("c/d=%.3f\n",c/d);                               //แสดงผลลัพธ์ c/d
    printf("b/c=%.1f\n",b/c);                               //แสดงผลลัพธ์ b/c
    printf("a%%b=%d\n",a%b);                                //แสดงผลลัพธ์ a%b
    printf("c%%a=%d\n",((int)c)%a);                         //แสดงผลลัพธ์ c % a โดยเปลี่ยน c เป็น int ก่อน 
    printf("c%%d=%f\n",((int)c)%((int)d));                  //แสดงผลลัพธ์ c % d เปลี่ยน เป็น int ทั้งคู่
    
    return 0;
}
//ในกรณีที่ run แล้วเกิด error เนื่องจากการคำนวณค่า float และ int จำเป็นต้องเปลี่ยนเป็น int ก่อนถึงจะหาผลลัพธ์ได้

//แก้ไขโดยเปลี่ยน float เป็น int