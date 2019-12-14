#define _CRT_SECURE_NO_WARNINGS
//2、substr函数
//原型：string substr(size_t pos = 0, size_t n = npos) const;
//功能：获得子字符串。
//参数说明：pos为起始位置（默认为0），n为结束位置（默认为npos）
//返回值：子字符串

std::vector<std::string> split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;//扩展字符串以方便操作
	int size = str.size();

	for (int i = 0; i < size; i++)
	{
		pos = str.find(pattern, i);
		if (pos < size)
		{
			std::string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + pattern.size() - 1;
		}
	}
	return result;