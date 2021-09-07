//指標練習

//使用者 採用 scanf()輸入5個欄位資料 入 實體變數
//(編號 姓名 國文 英文 數學 數學)
//後採用 指標 計算 三科成績總分 和平均

//1.將資料用scanf輸入實體變數
//2.建立實體變數 指位器

#include <stdio.h>

int main()
{

    int chi, eng, mat;
    char no[20], name[20]; //字串存到陣列去

    printf("請輸入編號:");
    scanf("%s",no); //字串連續記憶體 所以不需要&
    printf("請輸入姓名:");
    scanf("%s",name);//字串連續記憶體 所以不需要&
    printf("請輸入國文分數:");
    scanf("%d",&chi);
    printf("請輸入英文分數:");
    scanf("%d",&eng);
    printf("請輸入數學分數:");
    scanf("%d",&mat);
    
    char *pno;  //指標 指到編號
    pno=no;   //陣列 為 連續記憶體 不需要 &

    char *pname; //指標 指到名字
    pname=name; //陣列 為 連續記憶體 不需要 &

    int *pchi;
    int *peng;
    int *pmat;
    pchi = &chi;
    peng = &eng;
    pmat = &mat;

    float avg;
    int total;
    total = chi + eng +mat;
    //printf("total=%d",total);
    avg = total / 3.0;
    //printf("avg= %f",avg);
    
    int *ptotal;
    ptotal = &total;
    //printf("ptotal=%d",*ptotal);

    float *pavg;
    pavg = &avg;
    //printf("pavg=%f",*pavg);

    printf("編號\t姓名\t國文\t英文\t數學\t總分\t平均\t\n");
    printf("%s\t%s\t%d\t%d\t%d\t%d\t%f\t",pno,pname,*pchi,*peng,*pmat,*ptotal,*pavg);
    //

    return 0;
}
