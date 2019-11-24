#define _CRT_SECURE_NO_WARNINGS
#include<iostream >
#include<string>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
    TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	void _tree2str(TreeNode* t, string& str) {
		if (t == nullptr)
			return;

		str += to_string(t->val);
		if (t->left != nullptr || t->right != nullptr)
		{
			str += '(';
			_tree2str(t->left, str);
			str += ')';
		}

		if (t->right != nullptr)
		{
			str += '(';
			_tree2str(t->right, str);
			str += ')';
		}
	}

	string tree2str(TreeNode* t) {
		string str;
		_tree2str(t, str);
		return str;
	}

	/*string tree2str(TreeNode* t) {
	if(t == nullptr)
	return "";

	string str = std::to_string(t->val);

	if(t->left != nullptr)
	{
	str += '(';
	str += tree2str(t->left);
	str += ')';
	}
	else if(t->right != nullptr)
	{
	str += "()";
	}

	if(t->right != nullptr)
	{
	str += '(';
	str += tree2str(t->right);
	str += ')';
	}

	return str;
	}
	*/
};