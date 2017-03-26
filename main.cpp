#include <iostream>
#include <stdio.h>
#include "stdafx.h"

#include "MSWord.h"

#define SHOW_PROCESS

void print_info(char *words) {
#ifdef SHOW_PROCESS
	cout << words << endl;
#endif // SHOW_PROCESS
}

using namespace std;

int main() {

	print_info("(0/9)��������WordӦ�ó���...");
	MSWord word(false);

	print_info("(1/9)���ڴ��ļ�...");
	word.Open(L"D:\\test2_new2.doc");

	print_info("(2/9)����ͼƬ...");
	word.InsertTextAtBookmark(L"PID", L"Test text");
	
	string_table table;
	string_array sa, sb;

	sa.push_back(L"1.1");
	sa.push_back(L"1.2");
	table.push_back(sa);

	sb.push_back(L"2.1");
	sb.push_back(L"2.2");
	table.push_back(sb);

	print_info("(3/9)������...");
	word.InsertTable(word.GoToBookmarkSection(L"PID"), table);

	print_info("(4/9)�滻�ַ���...");
	word.StringFindAndReplace(NULL, L"[����1]", L"�˴�Ϊ�����滻");

	print_info("(5/9)����Ŀ¼...");
	word.UpdateContent();

	print_info("(6/9)�޸�ҳü...");
	word.ReplaceHeaderAndFooter(L"[Type here]", L"�޸Ĺ����ҳü");

	print_info("(7/9)�ļ����Ϊ...");
	word.SaveAs(L"D:\\output.doc");

	print_info("(8/9)�ر�word...");
	word.Quit();

	print_info("(9/9)������в�������鿴D:\\output.doc�ļ�");
	cout << "Done!";
	return 0;
}