#define _CRT_SECURE_NO_WARNINGS
//2��substr����
//ԭ�ͣ�string substr(size_t pos = 0, size_t n = npos) const;
//���ܣ�������ַ�����
//����˵����posΪ��ʼλ�ã�Ĭ��Ϊ0����nΪ����λ�ã�Ĭ��Ϊnpos��
//����ֵ�����ַ���

std::vector<std::string> split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;//��չ�ַ����Է������
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