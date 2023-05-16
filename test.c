

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <ctime>

// 字符串测试 
void  testString(){
	puts(" **********************************");
	const char *msg = "* 你的善良照*亮了别人前进的道路！*\n * 谢谢你给这个世界带来了光！     *\n" ;
	printf(" %s " , msg);
	puts(" **********************************");
	
	char content[] = "You are welcome";
	printf(" %s  %d \n" ,  content, sizeof(content)); 
	msg = "我是中国人";
	printf(" %s %d\n" ,  msg, strlen(msg)); 
}

// 数据类型测试 
void testDataType()
{
	int  m = - 256;
	printf("%d\n" , m >> 3);
	printf("%c\n", '\a');
	printf("char bytes : %d\n", sizeof(char));
	printf("short bytes : %d\n", sizeof(short));
	printf("short int bytes : %d\n", sizeof(short int));
	printf("int bytes : %d\n", sizeof(int));
	printf("unsigned int bytes: %d\n", sizeof(unsigned int));
	printf("float bytes: %d\n", sizeof(float));
	printf("double bytes: %d\n", sizeof(double));
	printf("long bytes: %d\n", sizeof(long));
	printf("long long bytes: %d\n", sizeof(long long));
	printf("-------------------------------------------------\n");
	printf("int8_t size: %d\n" , sizeof(int8_t));
	printf("int16_t size: %d\n" , sizeof(int16_t));
	printf("int32_t size: %d\n" , sizeof(int32_t));
	printf("int64_t size: %d\n" , sizeof(int64_t));
	printf("uint32_t size: %d\n" , sizeof(uint32_t));
		
}



// 指针测试 
void  testPointer()
{
	int n = 10 , k =100;
	int *p = &n;
	printf("%d\n" , *p);
	p = &k;
	printf("%d %d  %d \n" , *p, p , &k);
	*p = 200;
	printf("%d %d %d \n" , p, *p, k);
	
	void (*ptr)() = &testPointer;
	printf("%d \n" , ptr);
	printf("%s \n" , *ptr);
	
}


struct Company {
	char  name[32];
	char  location[64];
	long  fund;
};

struct {
  char title[500];
  char author[100];
  float value;
} b1 = {"Harry Potter", "J. K. Rowling", 10.0},
  b2 = {"Cancer Ward", "Aleksandr Solzhenitsyn", 7.85};
  
struct  DataType{
	short type;
	char  name[10];
	char  *desc;
};

// 测试结构体 
void  testStruct()
{
	struct  Company* company = (struct Company*)malloc(sizeof(char)*64);
    strcpy(company->name , "阿里巴巴");
    strcpy(company->location , "杭州科技园"); 
	company->fund = 9800;
    
    printf(" %s %s %d \n" ,  company->name, company->location, company->fund);
    
    printf("%s \t %s \t %.2f \n" , b1.title, b1.author, b1.value );
    printf("%s \t %s \t %.2f \n" , b2.title, b2.author, b2.value );
    
    printf("DataType space is : %d Bytes. \n" , sizeof(struct DataType)); // 2 + 10 + 4(padding) + 8 
}


int main(void) {

//	testString();
	
//	testDataType();

//	testPointer();
	
   testStruct(); 
    
	
}






