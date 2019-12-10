#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
#include <map>
#include <bitset>
#include "math.h"
#include <queue>
#include <memory>
#include <list>
#include <unordered_set>
#include "Common.h"
#include <functional>
using namespace std;
class Solution
{
public:
	Solution();
	~Solution();
	/******************************************************************************
	 函数名称： longestPalindrome
	 功能说明： 找到最长的回文子字符串,从中间向2边开花求，马车算法
	 参    数： string s 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/10/26
	******************************************************************************/
	string longestPalindrome(string s);
	void DfsParent(vector<string> &istrVec,string istr,int l,int r);
	/******************************************************************************
	 函数名称： generateParenthesis
	 功能说明： 生成可能的n对括号的正确组合
	 参    数： int n 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2019/10/28
	******************************************************************************/
	vector<string> generateParenthesis(int n);
	/******************************************************************************
	 函数名称： swapPairs
	 功能说明： 两两交换2个相邻的节点
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/10/28
	******************************************************************************/
	ListNode* swapPairs(ListNode* head);
	/******************************************************************************
	 函数名称： divide
	 功能说明： 给定2个整数，要求不使用乘法除法和mod运算，返回结果
	 参    数： int dividend 
	 参    数： int divisor 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/10/28
	******************************************************************************/
	int divide(int dividend, int divisor);
	/******************************************************************************
	 函数名称： nextPermutation
	 功能说明： 返回下一个最近且比这个数大的数，如果没有按升序排列
	 参    数： vector<int> & nums 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/10/30
	******************************************************************************/
	void nextPermutation(vector<int>& nums);
	/******************************************************************************
	 函数名称： search
	 功能说明： 在一个未知点旋转的升序数组中，找到某个目标值，要logn
	 参    数： vector<int> & nums 
	 参    数： int target 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/10/30
	******************************************************************************/
	int search(vector<int>& nums, int target);
	/******************************************************************************
	 函数名称： searchRange
	 功能说明： 在一个升序数组中找到最左和最右为target的数
	 参    数： vector<int> & nums 
	 参    数： int target 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/10/31
	******************************************************************************/
	vector<int> searchRange(vector<int>& nums, int target);
	/******************************************************************************
	 函数名称： isValidSudoku
	 功能说明： 判断是否是一个有效的数独，其中每一行和每一列1-9只能出现一次,在3*3的方格中也只能出现一次
	 参    数： vector<vector<char>> & board 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/10/31
	******************************************************************************/
	bool isValidSudoku(vector<vector<char>>& board);
	void DFSSum(int start, int target);
	/******************************************************************************
	 函数名称： combinationSum
	 功能说明： 给定一个无重复数组和目标值，使得数组中的值要等于target，数组中的值可以无限选择,采用回溯算法
	 参    数： vector<int> & candidates 
	 参    数： int target 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/10/31
	******************************************************************************/
	vector<vector<int>> combinationSum(vector<int>& candidates, int target);
	void DFSSum2(int start, int target);
	/******************************************************************************
	 函数名称： combinationSum2
	 功能说明： 给定一个数组和目标值，使得数组中的值要等于target，数组中的值只能使用一次,元素有重复
	 参    数： vector<int> & candidates 
	 参    数： int target 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/01
	******************************************************************************/
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
	/******************************************************************************
	 函数名称： multiply
	 功能说明： 大数相乘，两个字符串的乘积
	 参    数： string num1 
	 参    数： string num2 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/01
	******************************************************************************/
	string multiply(string num1, string num2);
	void DFSpermute(vector<int> path, int i,unordered_map<int,bool> &hashM);
	/******************************************************************************
	 函数名称： permute
	 功能说明： 无重复数字的数组生成全排列
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	vector<vector<int>> permute(vector<int>& nums);
	void DFSpermuteUnique(vector<int> path, int i, vector<pair<int, int>> &iInt);
	/******************************************************************************
	 函数名称： permuteUnique
	 功能说明： 可重复数字生成全排列，序列不能重复
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	vector<vector<int>> permuteUnique(vector<int>& nums);
	/******************************************************************************
	 函数名称： Select
	 功能说明： 寻找第k小的元素
	 参    数： T a[] 
	 参    数： int n 
	 参    数： int k 
	 返 回 值： T
	 作    者： Ru Long
	 日    期： 2019/11/01
	******************************************************************************/
	template<typename T>
	T Select(T a[], int n, int k);
	/******************************************************************************
	 函数名称： rotate
	 功能说明： 一个n*n的矩阵顺时针旋转90°
	 参    数： vector<vector<int>> & matrix 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	void rotate(vector<vector<int>>& matrix);
	/******************************************************************************
	 函数名称： groupAnagrams
	 功能说明： 将字母异位词放在一起，字母组成相同，位置不同
	 参    数： vector<string> & strs 
	 返 回 值： std::vector<std::vector<std::string>>
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	vector<vector<string>> groupAnagrams(vector<string>& strs);
	/******************************************************************************
	 函数名称： myPow
	 功能说明： 计算X的幂级数
	 参    数： double x 
	 参    数： int n 
	 返 回 值： double
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	double myPow(double x, int n);
	/******************************************************************************
	 函数名称： spiralOrder
	 功能说明： 返回螺旋矩阵的值
	 参    数： vector<vector<int>> & matrix 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/02
	******************************************************************************/
	vector<int> spiralOrder(vector<vector<int>>& matrix);
	/******************************************************************************
	 函数名称： canJump
	 功能说明： 判断能否跳到最后一步
	 参    数： vector<int> & nums 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/04
	******************************************************************************/
	bool canJump(vector<int>& nums);
	/******************************************************************************
	 函数名称： merge
	 功能说明： 合并有重叠的区间
	 参    数： vector<vector<int>> & intervals 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/04
	******************************************************************************/
	vector<vector<int>> merge(vector<vector<int>>& intervals);
	/******************************************************************************
	 函数名称： generateMatrix
	 功能说明： 给定一个正整数，生成一个包含1到n2的所有元素，按照顺时针螺旋矩阵排列
	 参    数： int n 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/04
	******************************************************************************/
	vector<vector<int>> generateMatrix(int n);
	/******************************************************************************
	 函数名称： getPermutation
	 功能说明： 给出元素的所有排列，找到从大到小排的第k个
	 参    数： int n 
	 参    数： int k 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/04
	******************************************************************************/
	string getPermutation(int n, int k);
	/******************************************************************************
	 函数名称： rotateRight
	 功能说明： 旋转链表
	 参    数： ListNode * head 
	 参    数： int k 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/05
	******************************************************************************/
	ListNode* rotateRight(ListNode* head, int k);
	/******************************************************************************
	 函数名称： uniquePaths
	 功能说明： 判断机器人走的路径,机器人只能向右或则向下走一步
	 参    数： int m 
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/05
	******************************************************************************/
	int uniquePaths(int m, int n);
	/******************************************************************************
	 函数名称： minPathSum
	 功能说明： 找到最小路径和
	 参    数： vector<vector<int>> & grid 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/05
	******************************************************************************/
	int minPathSum(vector<vector<int>>& grid);
	/******************************************************************************
	 函数名称： simplifyPath
	 功能说明： 获取简化后的路径，在UNIX下的风格
	 参    数： string path 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/06
	******************************************************************************/
	string simplifyPath(string path);
	/******************************************************************************
	 函数名称： setZeroes
	 功能说明： 矩阵置0，如果有一个0则将所在的行和列都为0
	 参    数： vector<vector<int>> & matrix 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/06
	******************************************************************************/
	void setZeroes(vector<vector<int>>& matrix);
	/******************************************************************************
	 函数名称： searchMatrix
	 功能说明： 搜索2维矩阵
	 参    数： vector<vector<int>> & matrix 
	 参    数： int target 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/07
	******************************************************************************/
	bool searchMatrix(vector<vector<int>>& matrix, int target);
	/******************************************************************************
	 函数名称： sortColors
	 功能说明： 按照颜色进行排序，相同颜色放在一起,00,11,22
	 参    数： vector<int> & nums 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/07
	******************************************************************************/
	void sortColors(vector<int>& nums);
	void DFSCombine(std::vector<vector<int>> & res, std::vector<int> &number, int start, int k,vector<int> &path);
	/******************************************************************************
	 函数名称： combine
	 功能说明： 返回1-n中所有可能的k个数的组合
	 参    数： int n 
	 参    数： int k 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/07
	******************************************************************************/
	vector<vector<int>> combine(int n, int k);
	void DFSSubsets(std::vector<vector<int>> & res, int start, vector<int> &path);
	/******************************************************************************
	 函数名称： subsets
	 功能说明： 返回一个元素所有的子集
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/07
	******************************************************************************/
	vector<vector<int>> subsets(vector<int>& nums);
	bool DFSexist(int x,int y,int index,vector<vector<char>>&board,string &word,vector<vector<bool>>&visit);
	/******************************************************************************
	 函数名称： exist
	 功能说明： 判断单词能否由相邻的字母构成
	 参    数： vector<vector<char>> & board 
	 参    数： string word 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/07
	******************************************************************************/
	bool exist(vector<vector<char>>& board, string word);
	/******************************************************************************
	 函数名称： removeDuplicates
	 功能说明： 输出排序数组，每个数组元素只能出现2次
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/08
	******************************************************************************/
	int removeDuplicates(vector<int>& nums);
	/******************************************************************************
	 函数名称： deleteDuplicates
	 功能说明： 不保留重复数字的节点
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/09
	******************************************************************************/
	ListNode* deleteDuplicates(ListNode* head);
	/******************************************************************************
	 函数名称： partition
	 功能说明： 链表的快排
	 参    数： ListNode * head 
	 参    数： int x 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/09
	******************************************************************************/
	ListNode* partition(ListNode* head, int x);
	/******************************************************************************
	 函数名称： grayCode
	 功能说明： 返回一个数的格雷编码,连续2个位数之间仅有一个位数的差别
	 参    数： int n 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/09
	******************************************************************************/
	vector<int> grayCode(int n);
	ListNode * mergeTwoLsits(ListNode* p1,ListNode * p2);
	ListNode* mergeKLists(vector<ListNode*>& lists);
	void DFSWithDup(vector<int>&path, int start,int idepth);
	/******************************************************************************
	 函数名称： subsetsWithDup
	 功能说明： 可能重复的序列里面找到所有的子集
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/11
	******************************************************************************/
	vector<vector<int>> subsetsWithDup(vector<int>& nums);
	/******************************************************************************
	 函数名称： reverseBetween
	 功能说明： 反转从m到n的链表
	 参    数： ListNode * head 
	 参    数： int m 
	 参    数： int n 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/11
	******************************************************************************/
	ListNode* reverseBetween(ListNode* head, int m, int n);
	void DFSToAddAdress(std::vector<std::string> &res, std::vector<string> &path, string &s, int istart, int iend);
	/******************************************************************************
	 函数名称： restoreIpAddresses
	 功能说明： 复原IP地址
	 参    数： string s 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2019/11/11
	******************************************************************************/
	vector<string> restoreIpAddresses(string s);
	void DFSinorderTraversal(TreeNode * root, std::vector<int> &res);
	/******************************************************************************
	 函数名称： inorderTraversal
	 功能说明： 二叉树的中序遍历
	 参    数： TreeNode * root 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/11
	******************************************************************************/
	vector<int> inorderTraversal(TreeNode* root);
	/******************************************************************************
	 函数名称： preorderTraversal
	 功能说明： 二叉树的先序遍历
	 参    数： TreeNode * root 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/12
	******************************************************************************/
	vector<int> preorderTraversal(TreeNode* root);
	/******************************************************************************
	 函数名称： postorderTraversal
	 功能说明： 二叉树的后序遍历
	 参    数： TreeNode * root 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/19
	******************************************************************************/
	vector<int> postorderTraversal(TreeNode* root);
	vector<TreeNode*> DFSGenerateTree(int left, int right);
	/******************************************************************************
	 函数名称： generateTrees
	 功能说明： 生成从1到n节点组成的所有的二叉搜索树
	 参    数： int n 
	 返 回 值： std::vector<TreeNode*>
	 作    者： Ru Long
	 日    期： 2019/11/12
	******************************************************************************/
	vector<TreeNode*> generateTrees(int n);
	/******************************************************************************
	 函数名称： numTrees
	 功能说明： 给定一个整数n计算能组成多少种二叉搜索树
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/12
	******************************************************************************/
	int numTrees(int n);
	/******************************************************************************
	 函数名称： isValidBST
	 功能说明： 判断一个二叉树是否是二叉搜索树
	 参    数： TreeNode * root 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/12
	******************************************************************************/
	bool isValidBST(TreeNode* root);
	void DFSGetPath(std::vector<TreeNode *> & vecPath, TreeNode * root, TreeNode * target,bool &ikey);
	/******************************************************************************
	 函数名称： lowestCommonAncestor
	 功能说明： 对给定的二叉树，找到最近的公共节点
	 参    数： TreeNode * root 
	 参    数： TreeNode * p 
	 参    数： TreeNode * q 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2019/11/13
	******************************************************************************/
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
	/******************************************************************************
	 函数名称： buildTree
	 功能说明： 通过二叉树的先序遍历加中序遍历重构二叉树
	 参    数： vector<int> & preorder 
	 参    数： vector<int> & inorder 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2019/11/13
	******************************************************************************/
	TreeNode* buildTreeByPreAnIn(vector<int>& preorder, vector<int>& inorder);
	/******************************************************************************
	 函数名称： buildTree
	 功能说明： 通过二叉树的中序遍历加后序遍历重构二叉树
	 参    数： vector<int> & inorder 
	 参    数： vector<int> & postorder 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2019/11/13
	******************************************************************************/
	TreeNode* buildTreeByInAnPos(vector<int>& inorder, vector<int>& postorder);
	TreeNode* GenerateBST(std::vector<ListNode*> &vecNode,int left,int right);
	/******************************************************************************
	 函数名称： sortedListToBST
	 功能说明： 将排好序的链表转换为二叉搜索树
	 参    数： ListNode * head 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2019/11/13
	******************************************************************************/
	TreeNode* sortedListToBST(ListNode* head);
	void DFSFindPath(std::vector<vector<int>> &res, std::vector<int> &path, TreeNode * root,int sum);
	/******************************************************************************
	 函数名称： pathSum
	 功能说明： 返回到叶子节点路径总和
	 参    数： TreeNode * root 
	 参    数： int sum 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/14
	******************************************************************************/
	vector<vector<int>> pathSum(TreeNode* root, int sum);
	/******************************************************************************
	 函数名称： flatten
	 功能说明： 给定一个二叉树，将其原地转换为链表
	 参    数： TreeNode * root 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/14
	******************************************************************************/
	void flatten(TreeNode* root);
	/******************************************************************************
	 函数名称： minimumTotal
	 功能说明： 三角形的最小路径和，从低向上使用动态规划
	 参    数： vector<vector<int>> & triangle 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	int minimumTotal(vector<vector<int>>& triangle);
	/******************************************************************************
	 函数名称： ladderLength
	 功能说明： 给定开始和结束单词，用来单词接龙，使用BFS
	 参    数： string beginWord 
	 参    数： string endWord 
	 参    数： vector<string> & wordList 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	int ladderLength(string beginWord, string endWord, vector<string>& wordList);
	void DFSFindPathSumNumber(std::vector<int> &path, TreeNode * root, int &sum);
	void DFSBoard(vector<vector<char>>& board,int x,int y);
	/******************************************************************************
	 函数名称： solve
	 功能说明： 求被环绕的区域，和二维找单词一样
	 参    数： vector<vector<char>> & board 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	void solve(vector<vector<char>>& board);
	/******************************************************************************
	 函数名称： sumNumbers
	 功能说明： 由根节点到叶子节点的数字之和
	 参    数： TreeNode * root 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	int sumNumbers(TreeNode* root);
	void DFSpartitionStr(std::vector<vector<string>> & res, vector<string> & path, int start,string &s);
	bool CheckStr(string & s, int left, int right);
	vector<vector<string>> partitionStr(string s);
	/******************************************************************************
	 函数名称： canCompleteCircuit
	 功能说明： 环绕一圈
	 参    数： vector<int> & gas 
	 参    数： vector<int> & cost 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost);
	/******************************************************************************
	 函数名称： wordBreak
	 功能说明： 判断单词能否拆分成回文单词
	 参    数： string s 
	 参    数： vector<string> & wordDict 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	bool wordBreak(string s, vector<string>& wordDict);
	/******************************************************************************
	 函数名称： singleNumber
	 功能说明： 找到数组中只出现一次的数字
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	int singleNumber(vector<int>& nums);
	/******************************************************************************
	 函数名称： reorderList
	 功能说明： 重拍单链表L0-Ln-L1-Ln-1
	 参    数： ListNode * head 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/11/18
	******************************************************************************/
	void reorderList(ListNode* head);
	/******************************************************************************
	 函数名称： insertionSortList
	 功能说明： 对链表进行插入排序
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/19
	******************************************************************************/
	ListNode* insertionSortList(ListNode* head);
	void SwapList(ListNode * p1, ListNode * p2);
	void QuickSort(ListNode * left, ListNode * right);
	/******************************************************************************
	 函数名称： sortList
	 功能说明： 在nlogn时间对链表进行排序，且常数级空间
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2019/11/19
	******************************************************************************/
	ListNode* sortList(ListNode* head);
	/******************************************************************************
	 函数名称： evalRPN
	 功能说明： 逆波兰表达式求值
	 参    数： vector<string> & tokens 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/20
	******************************************************************************/
	int evalRPN(vector<string>& tokens);
	/******************************************************************************
	 函数名称： reverseWords
	 功能说明： 反转字符串中以空格隔开的单词,前方和后面不能有多余的单词，且单词间的空格只能为1个
	 参    数： string s 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/20
	******************************************************************************/
	string reverseWords(string s);
	/******************************************************************************
	 函数名称： maxProduct
	 功能说明： 乘积最大的连续子序列
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/20
	******************************************************************************/
	int maxProduct(vector<int>& nums);
	Solution& operator ++();
	const Solution operator ++(int);
	/******************************************************************************
	 函数名称： findMin
	 功能说明： 寻找旋转数组的最小值,不存在重复元素
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/21
	******************************************************************************/
	int findMin(vector<int>& nums);
	/******************************************************************************
	 函数名称： findMinSame
	 功能说明： 寻找旋转数组的最小值,存在重复元素
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/21
	******************************************************************************/
	int findMinSame(vector<int>& nums);
	/******************************************************************************
	 函数名称： findPeakElement
	 功能说明： 在logn的时间内找到峰值的索引,峰值的大于其左右索引,且nums[i]!=nums[i+1]
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/21
	******************************************************************************/
	int findPeakElement(vector<int>& nums);
	/******************************************************************************
	 函数名称： compareVersion
	 功能说明： 比较版本号，坐标小于右边即为-1，大于右边即为1，否则返回0
	 参    数： string version1 
	 参    数： string version2 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/21
	******************************************************************************/
	int compareVersion(string version1, string version2);
	/******************************************************************************
	 函数名称： fractionToDecimal
	 功能说明： 以字符串的形式显示数，如果有循环小数加上（）
	 参    数： int numerator 
	 参    数： int denominator 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/22
	******************************************************************************/
	string fractionToDecimal(int numerator, int denominator);
	/******************************************************************************
	 函数名称： largestNumber
	 功能说明： 给定一组非负数，重新排列顺序使之成为最大的数
	 参    数： vector<int> & nums 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2019/11/22
	******************************************************************************/
	string largestNumber(vector<int>& nums);
	/******************************************************************************
	 函数名称： findRepeatedDnaSequences
	 功能说明： 查找长度为10的子串出现多余一次的
	 参    数： string s 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2019/11/23
	******************************************************************************/
	vector<string> findRepeatedDnaSequences(string s);
	/******************************************************************************
	 函数名称： rightSideView
	 功能说明： 二叉树的右视图-199
	 参    数： TreeNode * root 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/23
	******************************************************************************/
	vector<int> rightSideView(TreeNode* root);
	/******************************************************************************
	 函数名称： numIslands
	 功能说明： 计算岛屿的数量-200
	 参    数： vector<vector<char>> & grid 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/23
	******************************************************************************/
	int numIslands(vector<vector<char>>& grid);
	/******************************************************************************
	 函数名称： rangeBitwiseAnd
	 功能说明： 数字按照范围按位与，0<=m<=n<=2147483647  -201
	 参    数： int m 
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/25
	******************************************************************************/
	int rangeBitwiseAnd(int m, int n);
	/******************************************************************************
	 函数名称： canFinish
	 功能说明： 判断能否完成所有的学习，一个循环中是否存在有向图-207
	 参    数： int numCourses 
	 参    数： vector<vector<int>> & prerequisites 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/11/25
	******************************************************************************/
	bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
	/******************************************************************************
	 函数名称： minSubArrayLen
	 功能说明： 在数组中找到和>s的长度最小连续子数组，没找到返回0-209
	 参    数： int s 
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/25
	******************************************************************************/
	int minSubArrayLen(int s, vector<int>& nums);
	/******************************************************************************
	 函数名称： findOrder
	 功能说明： 找到遍历全图的路径-210
	 参    数： int numCourses 
	 参    数： vector<vector<int>> & prerequisites 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/11/26
	******************************************************************************/
	vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites);
	/******************************************************************************
	 函数名称： rob
	 功能说明： 房屋是环形，相邻房屋被偷窃会报警,返回偷取的金额-213
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/26
	******************************************************************************/
	int rob(vector<int>& nums);
	/******************************************************************************
	 函数名称： findKthLargest
	 功能说明： 找到数组排序后的第K大的元素,第K个不同的元素
	 参    数： vector<int> & nums 
	 参    数： int k 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/26
	******************************************************************************/
	int findKthLargest(vector<int>& nums, int k);
	/******************************************************************************
	 函数名称： combinationSum3
	 功能说明： 所有相加组合为n的K个数-216
	 参    数： int k 
	 参    数： int n 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2019/11/28
	******************************************************************************/
	vector<vector<int>> combinationSum3(int k, int n);
	/******************************************************************************
	 函数名称： maximalSquare
	 功能说明： 在只有0 1组成的矩阵中找到只含1的最大正方形，并返回其面积-221
	 参    数： vector<vector<char>> & matrix 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/28
	******************************************************************************/
	int maximalSquare(vector<vector<char>>& matrix);
	/******************************************************************************
	 函数名称： countNodes
	 功能说明： 完全二叉树的节点个数-222
	 参    数： TreeNode * root 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/11/28
	******************************************************************************/
	int countNodes(TreeNode* root);
	/******************************************************************************
	 函数名称： summaryRanges
	 功能说明： 无重复元素的有序整数数组，返回数组区间范围-228
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	vector<string> summaryRanges(vector<int>& nums);
	/******************************************************************************
	 函数名称： majorityElement
	 功能说明： 求众数摩尔投票-229
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	vector<int> majorityElement(vector<int>& nums);
	/******************************************************************************
	 函数名称： kthSmallest
	 功能说明： 二叉搜索树中第k小的元素-230
	 参    数： TreeNode * root 
	 参    数： int k 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	int kthSmallest(TreeNode* root, int k);
	/******************************************************************************
	 函数名称： productExceptSelf
	 功能说明： 除自身以外各元素的乘积-238
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	vector<int> productExceptSelf(vector<int>& nums);
	/******************************************************************************
	 函数名称： searchMatrix2
	 功能说明： 搜索二维矩阵-240
	 参    数： vector<vector<int>> & matrix 
	 参    数： int target 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	bool searchMatrix2(vector<vector<int>>& matrix, int target);
	/******************************************************************************
	 函数名称： diffWaysToCompute
	 功能说明： 为运算符表达式设计优先级-241
	 参    数： string input 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	vector<int> diffWaysToCompute(string input);
	/******************************************************************************
	 函数名称： singleNumber2
	 功能说明： 有2个元素只出现一次，其余的元素都出现2次-260
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	vector<int> singleNumber2(vector<int>& nums);
	/******************************************************************************
	 函数名称： nthUglyNumber
	 功能说明： 找到第n个丑数-264
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/02
	******************************************************************************/
	int nthUglyNumber(int n);
	/******************************************************************************
	 函数名称： convertStringToSuffix
	 功能说明： 将中缀表达式转换为后缀表达式
	 参    数： string iStr 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2019/12/03
	******************************************************************************/
	std::vector<string> convertStringToSuffix(string iStr);
	/******************************************************************************
	 函数名称： hIndex
	 功能说明： 求一个数组中的h指数-274
	 参    数： vector<int> & citations 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/03
	******************************************************************************/
	int hIndex(vector<int>& citations);
	/******************************************************************************
	 函数名称： hIndex2
	 功能说明：  求一个数组中的h指数,数组已经有序-275
	 参    数： vector<int> & citations 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/03
	******************************************************************************/
	int hIndex2(vector<int>& citations);
	/******************************************************************************
	 函数名称： numSquares
	 功能说明： 给定一个正整数，找到若干个完全平方数，使他们的和等于n-279
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/03
	******************************************************************************/
	int numSquares(int n);
	/******************************************************************************
	 函数名称： findDuplicate
	 功能说明： 给定一个包含 n + 1 个整数的数组 nums，其数字都在 1 到 n 之间（包括 1 和 n）-287
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/04
	******************************************************************************/
	int findDuplicate(vector<int>& nums);
	/******************************************************************************
	 函数名称： gameOfLife
	 功能说明： 生命游戏-289
	 参    数： vector<vector<int>> & board 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2019/12/05
	******************************************************************************/
	void gameOfLife(vector<vector<int>>& board);
	/******************************************************************************
	 函数名称： lengthOfLIS
	 功能说明： 最长上升子序列不用连续-300
	 参    数： vector<int> & nums 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/05
	******************************************************************************/
	int lengthOfLIS2(vector<int>& nums);
	/******************************************************************************
	 函数名称： isAdditiveNumber
	 功能说明： 判断一个序列是否是累加序列-306
	 参    数： string num 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2019/12/06
	******************************************************************************/
	bool isAdditiveNumber(string num);
	/******************************************************************************
	 函数名称： splitIntoFibonacci
	 功能说明： 将字符串分成斐波拉切数列-842
	 参    数： string S 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2019/12/07
	******************************************************************************/
	vector<int> splitIntoFibonacci(string S);
	/******************************************************************************
	 函数名称： maxProfit
	 功能说明： 买卖股票的最佳时机-309
	 参    数： vector<int> & prices 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/09
	******************************************************************************/
	int maxProfit(vector<int>& prices);
	/******************************************************************************
	 函数名称： maxProfit714
	 功能说明： 买卖股票的最佳时机含手续费-714
	 参    数： vector<int> & prices 
	 参    数： int fee 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/10
	******************************************************************************/
	int maxProfit714(vector<int>& prices, int fee);
	/******************************************************************************
	 函数名称： maxProfit123
	 功能说明： 买卖股票的最佳时机最多交易2笔-123
	 参    数： vector<int> & prices 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2019/12/10
	******************************************************************************/
	int maxProfit123(vector<int>& prices);
private:
	int expandAroundCenter(const string &s, int left, int right);
	template<typename T>
	T Select(T a[], int leftEnd, int rightEnd, int k);
};

template<typename T>
T Solution::Select(T a[], int n, int k)
{
	if (k<1||k>n)
	{
		return T[0];
	}
	int maxPos = 0;
	for (int i = 1; i < n;++i)
	{
		if (a[i]>a[maxPos])
		{
			maxPos = i;
		}
	}
	swap(a[n - 1], a[maxPos]);
	return Select(a, 0, n - 1, k);
}

template<typename T>
T Solution::Select(T a[], int leftEnd, int rightEnd, int k)
{
	if (leftEnd>=rightEnd)
	{
		return a[leftEnd];
	}
	int leftCur = leftEnd;
	int rightCur = rightEnd + 1;
	T privot = a[leftEnd];
	while (true)
	{
		do 
		{
			++leftCur;
		} while (a[leftCur]<privot);
		do 
		{
			--rightCur;
		} while (a[rightCur]>privot);
		if (leftCur>=rightCur)
		{
			break;
		}
		swap(a[leftCur], a[rightCur]);
	}
	if (rightCur-leftEnd+1==k)
	{
		return privot;
	}
	a[leftEnd] = a[rightCur];
	a[rightCur] = privot;
	if (rightCur-leftEnd+1<k)
	{
		return Select(a, rightCur + 1, rightEnd, k - rightEnd + leftEnd -1);
	}
	return Select(a,leftEnd,rightCur-1,k);
}

#endif 
