//#define _CRT_SECURE_NO_WARNINGS
///*	�����ַ�ת����
//*��һ�α�����s�е������ַ�����num�ڶ��α���ֻ���������
//*1.��StringתΪchar����
//*2.����int����num��Ϊreturn�ı���
//*3.�����������������ֻ��IV��IX��XL��XC��CD��CM���֣��������Ǳ���char���飬ע����α�����i = 0��i = ch.length - 1����ΪҪ�ж�ch[i+1]
//*4.�ж�ch[i] �� ch[i+1]���������������IV����IX���Ͱ�num-2����ΪIV=4������������I + VҪ����2���������ƣ�����XL��XC��Ҫnum-20������CD��CM��Ҫnum-200
//*5.�ٴα������飬��ؾ�ֻ��Ҫ�ж���ĸ��ʲô����num���϶�Ӧ��ֵ������ ch[i] = C; num += 100;
//
//�����Ǵ���:
//*/
//class Solution {
//public int romanToInt(String s) {
//char[] ch = s.toCharArray();
//int num = 0;
//for (int i = 0; i < ch.length - 1; i++) {
//if(ch[i] == 'I' && (ch[i + 1] == 'V' || ch[i + 1] == 'X'))
//num -= 2;
//if(ch[i] == 'X' && (ch[i + 1] == 'L' || ch[i + 1] == 'C'))
//num -= 20;
//if(ch[i] == 'C' && (ch[i + 1] == 'D' || ch[i + 1] == 'M'))
//num -= 200;
//}
//for (int i = 0; i < ch.length; i++) {
//switch (ch[i]) {
//case 'M': {
//num += 1000;
//continue;
//}
//case 'D': {
//num += 500;
//continue;
//}
//case 'C': {
//num += 100;
//continue;
//}
//case 'L': {
//num += 50;
//continue;
//}
//case 'X': {
//num += 10;
////continue;
//}
//case 'V': {
//num += 5;
//continue;
//}
//default: {
//num += 1;
//continue;
//}
//}
//}
//return num;
//}
//}
//
//*����map һ�α���s �������ַ�תΪ��Ӧ�������� res ���
//*�ж�ch[i] �� ch[i+1]���������������IV����IX�� res �ӵ�ֵΪ 4 ��9��
//class Solution {
//public:
//int romanToInt(string s) {
//std::map<char, int> map_roman {{'M',1000}, {'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
//int res = 0;
//for(int i = 0; i < s.length(); i++)
//{
//if(map_roman[s[i]] >= map_roman[s[i+1]])  //����������ǰ
//{
//res = res + map_roman[s[i]];
//}
//else
//{
//res = res + map_roman[s[i+1]] - map_roman[s[i]]; //С����ǰֻ�����ǳ�����4��9��40��90��400��900
//i++;
//}
//}
//return res;
//
//
//}
//};
//*/