/*
1.	Write a program that receives an n-digit number then output
its n digits from least to most significant:
Ex:
 ____________________________________
| Input: 132768                      |
| Output: 8 6 7 2 3 1                |
|____________________________________|
*/
int main()
{
   int num,rem,reverse_num=0;
   //Input number
   printf("\nNhap mot so bat ki:");
   scanf("%d",&num);
 
   while(num>=1)
   {
      rem = num % 10;
      reverse_num = reverse_num * 10 + rem;
      num = num / 10;
   }
 
   printf("\nSo sau khi dao nguoc la: %d", reverse_num);
   return 0;
}
