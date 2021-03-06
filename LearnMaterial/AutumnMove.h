#ifndef AUTUMNMOVE_H
#define AUTUMNMOVE_H

#include "Common.h"
#include "Singleton.h"
class AutumnMove :public Singleton<AutumnMove>
{
public:
    /******************************************************************************
     函数名称： maxProfit
     功能说明： 买卖股票的最佳时机-121如果你最多只允许完成一笔交易（即买入和卖出一支股票一次)
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit1(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit2
     功能说明： 买卖股票的最佳时机-122 如果你允许买卖多次
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit2(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit3
     功能说明： 买卖股票的最佳时机-123 如果你允许买卖2次
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit3(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit4
     功能说明： 买卖股票的最佳时机-188 如果你允许买卖k次
     参    数： int k 
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit4(int k, vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit5
     功能说明： 买卖股票的最佳时机-309 含有冷冻期一天
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit5(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit6
     功能说明： 买卖股票的最佳时机含手续费-714
     参    数： vector<int> & prices 
     参    数： int fee 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit6(vector<int>& prices, int fee);
    /******************************************************************************
     函数名称： smallestRange
     功能说明： 632-最小区间
     参    数： vector<vector<int>> & nums 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/01
    ******************************************************************************/
    vector<int> smallestRange(vector<vector<int>>& nums);
    /******************************************************************************
     函数名称： addStrings
     功能说明： 字符串加法-415
     参    数： string num1 
     参    数： string num2 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    string addStrings(string num1, string num2);
    /******************************************************************************
     函数名称： canJump
     功能说明： 跳跃游戏-55
     参    数： vector<int> & nums 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    bool canJump(vector<int>& nums);
    /******************************************************************************
     函数名称： mergeVector
     功能说明： 合并排序的数组
     参    数： vector<int> & A 
     参    数： int m 
     参    数： vector<int> & B 
     参    数： int n 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    void mergeVector(vector<int>& A, int m, vector<int>& B, int n);
    /******************************************************************************
     函数名称： cuttingRope
     功能说明： 剪绳子
     参    数： int n 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    int cuttingRope(int n);
    /******************************************************************************
     函数名称： getIntersectionNode
     功能说明： 判断链表是否相交，如果相交则返回交点
     参    数： ListNode * headA 
     参    数： ListNode * headB 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
    /******************************************************************************
     函数名称： Sqrt
     功能说明： 开根号 有精度要求
     参    数： double target 
     参    数： double diff 
     返 回 值： double
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    double Sqrt(double target,double diff);
    /******************************************************************************
     函数名称： canFinish
     功能说明： 完成课表-207
     参    数： int numCourses 
     参    数： vector<vector<int>> & prerequisites 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
    /******************************************************************************
     函数名称： addTwoNumbers
     功能说明： 链表求和-2.05
     参    数： ListNode * l1 
     参    数： ListNode * l2 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    /******************************************************************************
     函数名称： lowestCommonAncestor
     功能说明： 二叉树的最近公共祖先-236
     参    数： TreeNode * root 
     参    数： TreeNode * p 
     参    数： TreeNode * q 
     返 回 值： TreeNode*
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    /******************************************************************************
     函数名称： maxPathSum
     功能说明： 二叉树的最大路径和-124
     参    数： TreeNode * root 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int maxPathSum(TreeNode* root);
    /******************************************************************************
     函数名称： QuickSort
     功能说明： 快速排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    void QuickSort(vector<int>& nums);
    /******************************************************************************
     函数名称： preorderTraversal
     功能说明： 二叉树的先序遍历，非递归版-144
     参    数： TreeNode * root 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    vector<int> preorderTraversal(TreeNode* root);
    /******************************************************************************
     函数名称： postorderTraversal
     功能说明： 二叉树的后序遍历-145
     参    数： TreeNode * root 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    vector<int> postorderTraversal(TreeNode* root);
    /******************************************************************************
     函数名称： longestConsecutive
     功能说明： 最长连续序列的长度-
     参    数： vector<int> & nums 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int longestConsecutive(vector<int>& nums);
    /******************************************************************************
     函数名称： trap
     功能说明： 接雨水-42
     参    数： vector<int> & height 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int trap(vector<int>& height);
    /******************************************************************************
     函数名称： rob
     功能说明： 打家劫舍 -337
     参    数： TreeNode * root 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/05
    ******************************************************************************/
    int rob(TreeNode* root);
    /******************************************************************************
     函数名称： MergeSort
     功能说明： 归并排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/06
    ******************************************************************************/
    void MergeSort(vector<int>& nums);
    /******************************************************************************
     函数名称： isSameTree
     功能说明： 判断两个数是否相同-100
     参    数： TreeNode * p 
     参    数： TreeNode * q 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    bool isSameTree(TreeNode* p, TreeNode* q);
    /******************************************************************************
     函数名称： reverseList
     功能说明： 翻转链表-206
     参    数： ListNode * head 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    ListNode* reverseList(ListNode* head);
    /******************************************************************************
     函数名称： reverseKGroup
     功能说明： K个一组翻转链表-25
     参    数： ListNode * head 
     参    数： int k 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    ListNode* reverseKGroup(ListNode* head, int k);
    /******************************************************************************
     函数名称： generateMatrix
     功能说明： 螺旋矩阵-59
     参    数： int n 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    vector<vector<int>> generateMatrix(int n);
    /******************************************************************************
     函数名称： countBinarySubstrings
     功能说明： 计算二进制子串-696
     参    数： string s 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    int countBinarySubstrings(string s);
    /******************************************************************************
     函数名称： restoreIpAddresses
     功能说明： 复原IP地址-93
     参    数： string s 
     返 回 值： std::vector<std::string>
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    vector<string> restoreIpAddresses(string s);
    /******************************************************************************
     函数名称： HeapSort
     功能说明： 堆排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    void HeapSort(vector<int>& nums);
    /******************************************************************************
     函数名称： buildTree
     功能说明： 根据前序遍历和中序遍历重建二叉树
     参    数： vector<int> & preorder 
     参    数： vector<int> & inorder 
     返 回 值： TreeNode*
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    /******************************************************************************
     函数名称： solve
     功能说明： 被环绕的区域-130
     参    数： vector<vector<char>> & board 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    void solve(vector<vector<char>>& board);
    /******************************************************************************
     函数名称： hasPathSum
     功能说明： 路径总和-112
     参    数： TreeNode * root 
     参    数： int sum 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    bool hasPathSum(TreeNode* root, int sum);
    /******************************************************************************
     函数名称： pathSum
     功能说明： 路径总和
     参    数： TreeNode * root 
     参    数： int sum 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    vector<vector<int>> pathSum(TreeNode* root, int sum);
    /******************************************************************************
     函数名称： multiply
     功能说明： 字符串相乘-43
     参    数： string num1 
     参    数： string num2 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    string multiply(string num1, string num2);
    /******************************************************************************
     函数名称： merge
     功能说明： 合并区间-56
     参    数： vector<vector<int>> & intervals 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    /******************************************************************************
     函数名称： reverseWords
     功能说明： 翻转字符串中的单词-151
     参    数： string s 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    string reverseWords(string s);
    /******************************************************************************
     函数名称： isBalanced
     功能说明： 检查是不是高度平衡的二叉树-110
     参    数： TreeNode * root 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/17
    ******************************************************************************/
    bool isBalanced(TreeNode* root);
    /******************************************************************************
     函数名称： sortedListToBST
     功能说明： 有序链表转换为二叉搜索树-109
     参    数： ListNode * head 
     返 回 值： TreeNode*
     作    者： Ru Long
     日    期： 2020/08/18
    ******************************************************************************/
    TreeNode* sortedListToBST(ListNode* head);
    /******************************************************************************
     函数名称： countSubstrings
     功能说明： 计算回文子串-647
     参    数： string s 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/19
    ******************************************************************************/
    int countSubstrings(string s);
    /******************************************************************************
     函数名称： updateBoard
     功能说明： 扫雷游戏-529
     参    数： vector<vector<char>> & board 
     参    数： vector<int> & click 
     返 回 值： std::vector<std::vector<char>>
     作    者： Ru Long
     日    期： 2020/08/20
    ******************************************************************************/
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click);
    /******************************************************************************
     函数名称： findContinuousSequence
     功能说明： 和为target的连续正整数序列-序列个数必须大于1
     参    数： int target 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/20
    ******************************************************************************/
    vector<vector<int>> findContinuousSequence(int target);
    /******************************************************************************
     函数名称： nextPermutation
     功能说明： 下一个排列-31
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/20
    ******************************************************************************/
    void nextPermutation(vector<int>& nums);
    /******************************************************************************
     函数名称： firstMissingPositive
     功能说明： 缺失的第一个正整数-41
     参    数： vector<int> & nums 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/20
    ******************************************************************************/
    int firstMissingPositive(vector<int>& nums);
    /******************************************************************************
     函数名称： rightSideView
     功能说明： 二叉树的右视图-199
     参    数： TreeNode * root 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/20
    ******************************************************************************/
    vector<int> rightSideView(TreeNode* root);
	/******************************************************************************
	 函数名称： PredictTheWinner
	 功能说明： 预测赢家-486
	 参    数： vector<int> & nums 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2020/09/01
	******************************************************************************/
	bool PredictTheWinner(vector<int>& nums);
	/******************************************************************************
	 函数名称： isNumber
	 功能说明： 剑指 Offer 20. 表示数值的字符串
	 参    数： string s 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2020/09/02
	******************************************************************************/
	bool isNumber(string s);
	/******************************************************************************
	 函数名称： permute
	 功能说明： 全排列-46
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/09/03
	******************************************************************************/
	vector<vector<int>> permute(vector<int>& nums);
	/******************************************************************************
	 函数名称： permute2
	 功能说明： 全排列-47
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/09/03
	******************************************************************************/
	vector<vector<int>> permute2(vector<int>& nums);
	/******************************************************************************
	 函数名称： solveNQueens
	 功能说明： 51-N皇后
	 参    数： int n 
	 返 回 值： std::vector<std::vector<std::string>>
	 作    者： Ru Long
	 日    期： 2020/09/03
	******************************************************************************/
	vector<vector<string>> solveNQueens(int n);
	/******************************************************************************
	 函数名称： binaryTreePaths
	 功能说明： 257-二叉树的所有路径
	 参    数： TreeNode * root 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2020/09/04
	******************************************************************************/
	vector<string> binaryTreePaths(TreeNode* root);
	/******************************************************************************
	 函数名称： mergeKLists
	 功能说明： 合并K个升序链表-23
	 参    数： vector<ListNode * > & lists 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2020/09/04
	******************************************************************************/
	ListNode* mergeKLists(vector<ListNode*>& lists);
	/******************************************************************************
	 函数名称： getPermutation
	 功能说明： 第k个排列-60
	 参    数： int n 
	 参    数： int k 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2020/09/05
	******************************************************************************/
	string getPermutation(int n, int k);
	/******************************************************************************
	 函数名称： topKFrequent
	 功能说明： 出现评率最高的前k个元素-347
	 参    数： vector<int> & nums 
	 参    数： int k 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2020/09/07
	******************************************************************************/
	vector<int> topKFrequent(vector<int>& nums, int k);
	/******************************************************************************
	 函数名称： combinationSum
	 功能说明： 组合总数-39
	 参    数： vector<int> & candidates 
	 参    数： int target 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/09/09
	******************************************************************************/
	vector<vector<int>> combinationSum(vector<int>& candidates, int target);
	/******************************************************************************
	 函数名称： combine
	 功能说明： k个数组合-77
	 参    数： int n 
	 参    数： int k 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/09/09
	******************************************************************************/
	vector<vector<int>> combine(int n, int k);
	/******************************************************************************
	 函数名称： combinationSum2
	 功能说明： 组合总数-40
	 参    数： vector<int> & candidates 
	 参    数： int target 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/09/10
	******************************************************************************/
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
	/******************************************************************************
	 函数名称： findNthDigit
	 功能说明： 第N个数字-400
	 参    数： int n 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2020/09/13
	******************************************************************************/
	int findNthDigit(int n);
	/******************************************************************************
	 函数名称： simplifyPath
	 功能说明： 71-简化路径
	 参    数： string path 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2020/09/15
	******************************************************************************/
	string simplifyPath(string path);
	/******************************************************************************
	 函数名称： invertTree
	 功能说明： 226-翻转二叉树
	 参    数： TreeNode * root 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2020/09/16
	******************************************************************************/
	TreeNode* invertTree(TreeNode* root);
	/******************************************************************************
	 函数名称： sortList
	 功能说明： 148-排序链表
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2020/09/16
	******************************************************************************/
	ListNode* sortList(ListNode* head);
	/******************************************************************************
	 函数名称： convertBST
	 功能说明： 538-二叉搜索树转累加树
	 参    数： TreeNode * root 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2020/09/21
	******************************************************************************/
	TreeNode* convertBST(TreeNode* root);
	/******************************************************************************
	 函数名称： minCameraCover
	 功能说明： 968-监控二叉树
	 参    数： TreeNode * root 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2020/09/22
	******************************************************************************/
	int minCameraCover(TreeNode* root);
	/******************************************************************************
	 函数名称： mergeTrees
	 功能说明： 合并二叉树-617
	 参    数： TreeNode * t1 
	 参    数： TreeNode * t2 
	 返 回 值： TreeNode*
	 作    者： Ru Long
	 日    期： 2020/09/23
	******************************************************************************/
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
	/******************************************************************************
	 函数名称： partitionString
	 功能说明： 分割回文字符串-131
	 参    数： string s 
	 返 回 值： std::vector<std::vector<std::string>>
	 作    者： Ru Long
	 日    期： 2020/09/23
	******************************************************************************/
	vector<vector<string>> partitionString(string s);
	/******************************************************************************
	 函数名称： findMode
	 功能说明： 501-二叉搜索树中的众数
	 参    数： TreeNode * root 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2020/09/24
	******************************************************************************/
	vector<int> findMode(TreeNode* root);
	/******************************************************************************
	 函数名称： insertVec
	 功能说明： 57-插入区间
	 参    数： vector<vector<int>> & intervals 
	 参    数： vector<int> & newInterval 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/11/04
	******************************************************************************/
	vector<vector<int>> insertVec(vector<vector<int>>& intervals, vector<int>& newInterval);
	/******************************************************************************
	 函数名称： ladderLength
	 功能说明： 127-单词接龙
	 参    数： string beginWord 
	 参    数： string endWord 
	 参    数： vector<string> & wordList 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2020/11/05
	******************************************************************************/
	int ladderLength(string beginWord, string endWord, vector<string>& wordList);
	/******************************************************************************
	 函数名称： findRotateSteps
	 功能说明： 514-自由之路
	 参    数： string ring 
	 参    数： string key 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2020/11/11
	******************************************************************************/
	int findRotateSteps(string ring, string key);
	/******************************************************************************
	 函数名称： oddEvenList
	 功能说明： 328-奇偶链表
	 参    数： ListNode * head 
	 返 回 值： ListNode*
	 作    者： Ru Long
	 日    期： 2020/11/13
	******************************************************************************/
	ListNode* oddEvenList(ListNode* head);
	/******************************************************************************
	 函数名称： removeKdigits
	 功能说明： 402-移掉K位数字
	 参    数： string num 
	 参    数： int k 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2020/11/16
	******************************************************************************/
	string removeKdigits(string num, int k);
	/******************************************************************************
	 函数名称： reconstructQueue
	 功能说明： 根据身高重建队列-406
	 参    数： vector<vector<int>> & people 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/11/16
	******************************************************************************/
	vector<vector<int>> reconstructQueue(vector<vector<int>>& people);
	/******************************************************************************
	 函数名称： allCellsDistOrder
	 功能说明： 1030-距离顺序排列单元格
	 参    数： int R 
	 参    数： int C 
	 参    数： int r0 
	 参    数： int c0 
	 返 回 值： std::vector<std::vector<int>>
	 作    者： Ru Long
	 日    期： 2020/11/17
	******************************************************************************/
	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0);
	/******************************************************************************
	 函数名称： canCompleteCircuit
	 功能说明： 134-加油站
	 参    数： vector<int> & gas 
	 参    数： vector<int> & cost 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2020/11/18
	******************************************************************************/
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost);
	/******************************************************************************
	 函数名称： sortString
	 功能说明： 
	 参    数： string s 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2020/11/25
	******************************************************************************/
	string sortString(string s);
	/******************************************************************************
	 函数名称： isPossible
	 功能说明： 分割数组为连续子序列-659
	 参    数： vector<int> & nums 
	 返 回 值： bool
	 作    者： Ru Long
	 日    期： 2020/12/04
	******************************************************************************/
	bool isPossible(vector<int>& nums);
    /******************************************************************************
     函数名称： maxSlidingWindow
     功能说明： 滑动窗口最大值-239
     参    数： vector<int> & nums 
     参    数： int k 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2021/01/02
    ******************************************************************************/
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
};

#endif
