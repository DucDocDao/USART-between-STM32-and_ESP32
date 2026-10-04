/*
1.
char* add1 = (char*) 0x0000111122223333;
-> con trỏ add1 chỉ lấy 1 byte
int* add1 = (int*) 0x0000111122223333;
-> con trỏ add1 chỉ lấy 4 byte
long long int* add1 = (long long int*) 0x0000111122223333;
-> con trỏ add1 lấy đủ 8 byte

2.
Ví dụ: địa chỉ 0x0000111122223333 có giá trị 0x85
2.1. char data = *add1; (data = 0x85)
2.2. *add1 = 0x89 => 0x0000111122223333 có giá trị 0x89
*/
void pointers()
{
    long long data = 0x0011223344556677;
    /*char*/short* p1 = (/*char*/short*) &data;
    printf("%p, %x \n", p1, *p1);
    p1++;
    printf("%p, %x \n", p1, *p1);
}
