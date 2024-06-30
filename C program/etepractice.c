// #include  <stdio.h>
// int main()
// {
//     signed char chr;
//     chr = 128;
//     printf("%d\n", chr);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = -3;
//     int k = i % 2;
//     printf("%d\n", k);
//     return 0;
// }
// #include <stdio.h>
//     int main()
//     {
//         int i = 3;
//         int l = i / -2;
//         int k = i % -2;
//         printf("%d %d\n", l, k);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int x = 5.3 % 2;
//         printf("Value of x is %d", x);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int a = 10;
//         double b = 5.6;
//         int c;
//         c = a + b;
//         printf("%d", c);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 5, c = 5;
//         int d;
//         d = b + c == a;
//         printf("%d", d);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 0,c;
//         c=a&&b;
//         printf("%d",c);
//     }
// #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 0,c=2,d;
//         d=a&&b||c-2;
//         printf("%d",d);
//     }
// #include <stdio.h>
//     int main()
//     {
//         int x = 1, y = 0, z = 5;
//         int a = x && y || z++;
//         printf("%d", z);
//         return 0;
//     }
    // #include <stdio.h>
    // int main()
    // {
    //     int x = 1, y = 0, z = 5;
    //     int a = x && y && z++;
    //     printf("%d", z);
    //     return 0;
    // }
// #include<stdio.h>
// int main()
// {
// int a=8,b=3;
// printf("%d",a^b);
// return 0;
//  }
// #include <stdio.h>
//   int main()
//     {
//         double b = 5 % 3 & 4 + 5 * 6;
//         printf("%lf", b);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         double b = 3 && 5 & 4 % 3;
//         printf("%lf", b);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         double b = 5 & 3 && 4 || 5 | 6;
//         printf("%lf", b);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         double b = 5 & 3 && 4 || 5 | 6;
//         printf("%lf", b);
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int b = 5 + 7 * 4 - 9 * (3, 2);
//         printf("%d", b);
//     }
// #include <stdio.h>
// int main() {
// int a[3] = {1, 2, 3};
// int *p = a;
// printf("%d", *p + 2);
// return 0;
// }
// #include <stdio.h>
//     int main()
//     {
//         double ch;
//         printf("enter a value between 1 to 2:");
//         scanf("%lf", &ch);
//         switch (ch)
//         {
//            case 1:
//               printf("1");
//               break;
//            case 2:
//               printf("2");
//               break;
//         }
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int ch;
//         printf("enter a value between 1 to 2:");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//            case 1:
//               printf("1 ");
//            default:
//               printf("2");
//         }
//         return 0;
//     }
// #include <stdio.h>
//     int main()
//     {
//         int ch;
//         printf("enter a value between 1 to 2:");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//            case 1:
//               printf("1 ");
//               printf("hi");
//               break;
//            default:
//               printf("2\n");
//         }
//     }
// #include <stdio.h>
//     int main()
//     {
//         int a = 1;
//         switch (a)
//         {
//            case a:
//               printf("Case A ");
//            default:
//               printf("Default");
//         }
//        return 0;
//     }
// #include<stdio.h>
// int main()
// {
// int i;
// for(i=1;i<10;i++);
// printf("%d",i);
// return 0;
// }
// #include <stdio.h>
//     int main()
//     {
//         do
//             printf("In while loop ");
//         while (0);
//             printf("After loop\n");
//         return 0;
//     }
// void m(int *p,int *q)
// {
//     p=q;
//     *p = 8;
//     *q = 7;
// }
// int main() {
//     int a=6,b=5;
//     m(&a,&b);
//     printf("%d %d",a,b);
// }
//#include <stdio.h>
// #include <stdlib.h>
// int main() 
// {
//     char c=getch();
//  h();
// return 0;
 //}//
// int main()
//  {
//  float a=654.123456f;
//  printf("%3.3f,%3.2f",a,a);
//  return 0;
//  }

// int main()
//  {
//  int a=123; 
// printf("*%06d*",a); 
// return 0; 
// }

// int main() 
// { 
// int a=6543; 
// printf("*%5d,*%-5d*",a,a); 
// return 0;
//  } 
// #include <stdio.h>
// int main()
// {
//     void show()
//     {
//         printf("hello");
//     }
//     show();
// }
// #include <stdio.h>
// void show();
// int main()
// {
//     show();
//     printf("hello");
// }
// void show()
// {
//    printf("World");
//     main();
// }
// #include<stdio.h>
// int main()
// {
//     printf("Hello");
//     main();
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a[][3]={1,2,3,4,5,6};
// printf("%d",a[0][2]);
// return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[3][2]={{1,2},{3,4},{5,6}};
//     printf("%d",a[1][1]*a[2][1]);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int x=10,*p;
// 	p=&x;
// 	printf("%u",p);
// 	printf("\n%d",*p);
// }
// #include <stdio.h>
//     int main()
//     {
//         int *ptr, a = 10;
//         ptr = &a;
//         *ptr += 1;
//         printf("%d,%d", *ptr, a);
//     }
// #include <stdio.h>
//     int main()
//     {
//         int i = 10;
//         void *p = &i;
//         printf("%d\n", (int)*p);
//         return 0;
//     }
    // #include <stdio.h>
    // int main()
    // {
    //     int i = 10;
    //     void *p = &i;
    //     printf("%f\n", *(float*)p);
    //     return 0;
    // }
// #include <stdio.h>
//  void foo(int *p)
//     {
//         int j = 2;
//         p = &j;
//         printf("%d ", *p);
//     }
//     int main()
//     {
//         int i = 97, *p = &i;
//         foo(&i);
//         printf("%d ", *p);
//     }
