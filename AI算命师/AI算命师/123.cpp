#include <stdio.h>
int main() {
	char name[20];
	int answer;
	printf("你好呀，和你说啊，我可是一个专业的算命的!\n");
	printf("你想要试试吗?\n");
	printf("1.想   2.不想\n");
	printf("(其实输入对应数字就好...)");
	scanf_s("%d", &answer);
	while (true) 
	{
		if (answer == 1){
			printf("哈哈,好呀，让我先来算算...\n(挑眉)\n你的爸爸是男的,对不对!?");
			break;
		}
		else if(answer == 2) {
			printf("呵，你可别小瞧我,让我展示一下神力!\n你的爸爸...\n是男的对不对?");
			break;
	    }
		else {
			printf("(请输入恰当文本	)");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			scanf_s("%d", &answer);
		}
	}
}