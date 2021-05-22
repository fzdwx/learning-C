/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/
#include <stdio.h>

int main() {
    /*
     *  输入大写字母转换为小写字母
     * */
    printf("==== 大写字母转换小写字母 ====\n");
    printf("请输入大写字母:\n");

    char c;

    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    } else {
        printf("输入字符不在 A-Z 范围内：");
    }


    printf("%c", c);
}