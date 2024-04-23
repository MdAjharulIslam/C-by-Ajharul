#include<stdio.h>
#include <stdbool.h>

int main(){
bool var1 =false, var2 =false, var3 =false ,var4 =false ;
bool var5 =false, var6 = false;
 bool result1 =false, result2 =false, result3 =false, result4 = false,
result5 =false, result6 = false;
bool result7 = false, result8 =false, result9 = false,result10 =
false;
 var1 = (! false ||false) &&true;
 var2 = var1 && true;
 var3 = false && !true;
 var4 = true;
 var5 = false;
 var6 = var3 && true;
 result1 = (var1 && var2) &&( 40 % 3 > 45) || (var5 && var6);
 result2 = (var1 || var2) || (result1 && false);
 result3 = (var1 && result1) || result2 || var5;
 result4 = (var1 || var2) || ((var3 && var1) && false);
 result5 = (var1 && var2) && (result3 || var1);

 result6 = ((var3 || !var2) && (result5)) || true;
 result7 = (var4 &&result1) &&((result1 && false) || true);
 result8 = ((var1 && result3) && (! var5 || var6)) && true;
 result9 = ((result2 && var2) || (! result7 && var1)) && !false;
 result10 = !(var1 && true);

    printf("Result 1: %d\n", result1);

    printf("Result 2: %d\n", result2);

    printf("Result 3: %d\n", result3);

    printf("Result 4: %d\n", result4);

    printf("Result 5: %d\n", result5);

    printf("Result 6: %d\n", result6);

    printf("Result 7: %d\n", result7);

    printf("Result 8: %d\n", result8);

    printf("Result 9: %d\n", result9);

    printf("Result 10: %d\n", result10);

 return 0;
 }
