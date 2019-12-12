//#define _CRT_SECURE_NO_WARNINGS
///*	罗马字符转整数
//*第一次遍历将s中的特殊字符加入num第二次遍历只需依次相加
//*1.将String转为char数组
//*2.定义int变量num作为return的变量
//*3.干扰正常计数的情况只有IV、IX、XL、XC、CD、CM六种，所以我们遍历char数组，注意这次遍历从i = 0到i = ch.length - 1，因为要判断ch[i+1]
//*4.判断ch[i] 和 ch[i+1]的情况，假如满足IV或者IX，就把num-2，因为IV=4，比起正常的I + V要减少2，依次类推，碰到XL、XC需要num-20，碰到CD、CM需要num-200
//*5.再次遍历数组，这回就只需要判断字母是什么，把num加上对应的值，例如 ch[i] = C; num += 100;
//
//下面是代码:
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
//*利用map 一次遍历s 将特殊字符转为相应的整数与 res 相加
//*判断ch[i] 和 ch[i+1]的情况，假如满足IV或者IX， res 加的值为 4 ，9；
//class Solution {
//public:
//int romanToInt(string s) {
//std::map<char, int> map_roman {{'M',1000}, {'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
//int res = 0;
//for(int i = 0; i < s.length(); i++)
//{
//if(map_roman[s[i]] >= map_roman[s[i+1]])  //正常大数在前
//{
//res = res + map_roman[s[i]];
//}
//else
//{
//res = res + map_roman[s[i+1]] - map_roman[s[i]]; //小数在前只可能是出现了4、9、40、90、400、900
//i++;
//}
//}
//return res;
//
//
//}
//};
//*/