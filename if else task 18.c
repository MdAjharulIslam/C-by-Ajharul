#include<stdio.h>
#include <stdbool.h>
int main(){
bool var1 = false;
 bool var2 = false;
 bool var3 = false;
 bool var4 = false;
 bool var5 = false;
 bool var6 = false;
 bool result1 = false;
 bool result2 = false;

 bool result3 = false;
 bool result4 = false;
 bool result5 = false;
 bool result6 = false;
 bool result7 = false;
 bool result8 = false;
 bool result9 = false;
 bool result10 = false;
 var1 = ((! true) || true) && false;
 var2 = var1 && false;
 var3 = true && ! false;
 var4 = false;
 var5 = true;
 var6 = var3 && false;

 result1 = (var1 && var2) && (40 % 3) > 45 || (var5 && var6);
 result2 = (var1 || var2) ||(result1 && false);
 result3 = (var1 && result1) || result2 || var5;
 result4 = (var1 || var2) || ((var3 && var1) && false);
 result5 = (var1 && var2) && (result3 || var1);
 result6 = ((var3 || (! var2)) && (result5)) || true;
 result7 = (var4 && result1) && ((result1 && false) || true);
 result8 = ((var1 && result3) &&((! var5) || var6)) && true;
 result9 = ((result2 && var2) || ((! result7) &&var1)) && !false;
 result10 = !(var1 && true );

    printf("result1: %d\n", result1);

    printf("result2: %d\n", result2);

    printf("result3: %d\n", result3);

    printf("result4: %d\n", result4);

    printf("result5: %d\n", result5);

    printf("result6: %d\n", result6);

    printf("result7: %d\n", result7);

    printf("result8: %d\n", result8);

    printf("result9: %d\n", result9);

    printf("result10: %d\n", result10);



return 0;
}
