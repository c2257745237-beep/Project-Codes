//把一个学生的信息放在一个结构体中，然后输出这个信息
/*#include<stdio.h>
struct student{
    int xuehao;
    char name[30];
    char gender;
    char zhuzhi[50];
};
struct student a={01,"xiaohai",'M',"chongqing"};
int main(){
printf("%d\t%s\t%c\t%s\t\n",a.xuehao,a.name,a.gender,a.zhuzhi);
    return 0;
}*/

//结构体位置改变
/*#include<stdio.h>
int main(){
    struct student{
    int xuehao;
    char name[30];
    char gender;
    char zhuzhi[50];
};
struct student a={01,"xiaohai",'M',"chongqing"};
printf("%d\t%s\t%c\t%s\t\n",a.xuehao,a.name,a.gender,a.zhuzhi);
    return 0;
}*/
//结构体数组
//按成绩高低依次输出三位学生信息
#include<stdio.h>
struct student
{int xuehao;
    char name[20];
    int grades;    
    }student[3]={{001,"xiaoming",90},{002,"xiaoshuai",20},{003,"xiaohai",99}};
int main(){
  struct student t;
int x,y,i;
    for(y=1;y<3;y++)//趟数，共进行3-1趟
    for(x=0;x<2;x++)//实现一次“冒泡”操作
if(student[x].grades<student[x+1].grades)
    {t=student[x];
    student[x]=student[x+1];
    student[x+1]=t;       
    }
for(i=0;i<=2;i++)    
    printf("%d\t%s\t%d\n",student[i].xuehao,student[i].name,student[i].grades);
    return 0;
}