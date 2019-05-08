#include <iostream>
#include <string>
using namespace std;
/*
アルゴリズムとしては
---ここから---
data配列を頭から順番に見ていく
0より大きいなら#を、それ以外なら空白を出力
出力したら-1する
---ここまで---
上をすべての要素が０になるまで継続する。

*/
int main() {
	char str[255]; //最大で255桁の数字まで入力可能（そんなにいらない）
	int data[128]; //取り合えず128個分の数値を保持できるようにする
	int dataIndex = 0; //data配列の添え字
	printf("数字を入力してください。\n");
	while(fgets(str,255,stdin) != NULL){
		int inValue = atoi(str); //atoi関数は引数に文字列を渡すと、変換可能なところまで整数値に変換する
		data[dataIndex] = inValue;
		dataIndex++; //こいつが入力データ数となる。
		printf("数字を入力してください。（入力が終わったらもう一度エンター押下）\n");
	}
	int numOfData = dataIndex; //データ数コピー
	int contFlag = 1; //継続の可否を保持
	while(contFlag == 1){
		contFlag = 0;
		for(int i=0;i<numOfData;i++){
			if(data[i] > 0){
				printf("#|");
				data[i]--;
				contFlag = 1;
			}else{
				printf(" |");
			}
		}
		printf("\n");
	}
	return 0;
}