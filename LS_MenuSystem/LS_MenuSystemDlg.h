
// LS_MenuSystemDlg.h: 头文件
//

#pragma once

#define HBMP(filepath, width, height) (HBITMAP)LoadImage(AfxGetInstanceHandle(), filepath, IMAGE_BITMAP, width, height, LR_LOADFROMFILE | LR_CREATEDIBSECTION)
// CLSMenuSystemDlg 对话框
class CLSMenuSystemDlg : public CDialogEx
{
// 构造
public:
	CLSMenuSystemDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LS_MENUSYSTEM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//全局变量
	CRect Rect; //窗口句柄获取变量
	CToolTipCtrl Ttc; //窗口提示消息变量
	_RecordsetPtr pRecordset; //记录集操作数据库指针
	_ConnectionPtr pMyConnect;//连接对象的数据库指针
	CTime MS_Time;//支付时的时间获取变量

	CString MS_User_CS;//当前登录的用户名
	CString MS_Sql_CS;//sql server语句
	
	CStatic MS_User_T_IDC;
	CString MS_User_T_V;
	CString MS_DayRecom_T_V;
	CStatic MS_DayRecom_T_IDC;
	CStatic MS_Message_T_IDC, LS_Tip_T_IDC;;
	CString MS_Message_T_V, LS_Tip_T_V;
	CStatic MS_Tag_T_IDC;


	CString Login_Window = TEXT("Login_Window");
	CString Register_Window = TEXT("Register_Window");
	CString MS_Window = TEXT("MS_Window");
	CString MS_Search_Window = TEXT ("MS_Search_Window");
	CString MS_SearchMenu_Window = TEXT ("MS_SearchMenu_Window");
	CString MS_History_Window = TEXT("MS_History_Window");
	CString MS_HistoryMenu_Window = TEXT("MS_HistoryMenu_Window");
	CString MS_Seting_Window = TEXT("MS_Seting_Window");
	CString MS_Order_Window = TEXT("MS_Order_Window");
	CString MS_Order_Menu_Window = TEXT("MS_Order_Menu_Window");
	CString MS_Order_MenuImagePitch_Window = TEXT("MS_Order_MenuImagePitch_Window");
	CString MS_Order_Shopping_Window = TEXT("MS_Order_Shopping_Window");
	CString MS_Order_ShoppingMenu_Window = TEXT("MS_Order_ShoppingMenu_Window");
	CString MS_Message_T_Window = TEXT("MS_Message_T_Window");
	CString MS_User_T_Window = TEXT("MS_User_T_Window");
	
	CString Admin_Window = TEXT ("Admin_Window");
	CString Admin_Order_Window = TEXT ("Admin_Order_Window");
	CString Admin_OrderMenu_Window = TEXT ("Admin_OrderMenu_Window");
	CString Admin_Order_MenuImagePitch_Window = TEXT ("Admin_Order_MenuImagePitch_Window");
	CString Admin_UserManage_Window = TEXT ("Admin_UserManage_Window");
	CString Admin_UserManageMenu_Window = TEXT ("Admin_UserManageMenu_Window");
	CString Admin_Setting_Window = TEXT ("Admin_Setting_Window");
	CStringArray MS_Perfer_CSA[20]; //全局食谱类型的数组结构

	int MS_Order_Menu_Window_I[3][4] = { 0 };

	//全局设置
	BOOL Search_Setting;
	BOOL Histroy_Setting;
	BOOL Order_Setting;
	BOOL AdminLogin_Setting;
	BOOL Register_Setting;

	//全局函数
	virtual BOOL PreTranslateMessage(MSG* MS_Msg);//控件提示信息声明
	void Turn_Of_Window(CString Windows, BOOL TrunofWindows);
	void Update_Window(CString Windows, CString Update_Window_CS);
	unsigned Random(unsigned Rand, int Offset);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);


	/*****************************************
	 *			登录界面控件注册
	 *****************************************/
	CStatic Login_UserDefault_P_IDC;

	CStatic Login_User_T_IDC;
	CEdit Login_User_ET_IDC;

	CStatic Login_Password_T_IDC;
	CEdit Login_Password_ET_IDC;

	CButton Login_LoginUser_B_IDC;
	CButton Login_Reset_B_IDC;

	CButton Login_Reg_B_IDC;
	CButton Login_Help_B_IDC;
	CStatic Login_CutRule_CR_IDC;

	CString Login_User_ET_V;
	CString Login_Password_ET_V;

	afx_msg void Login_LoginUser_B_CLI();
	afx_msg void Login_Reg_B_CLI();
	afx_msg void Login_Reset_B_CLI();

	/*****************************************
	 *			注册界面控件注册
	 *****************************************/
	CEdit Reg_User_ET_IDC;
	CString Reg_User_ET_V;

	CEdit Reg_Password_ET_IDC;
	CString Reg_Password_ET_V;
	CString Reg_PasswordIdentify_ET_V;

	CStatic Reg_PasswordIdentify_T0_IDC;
	CStatic Reg_PasswordIdentify_T1_IDC;
	CEdit Reg_PasswordIdentify_ET_IDC;

	CStatic Reg_PhoneNumber_T_IDC;
	CEdit Reg_PhoneNumber_ET_IDC;
	CString Reg_PhoneNumber_ET_V;

	CStatic Reg_Sex_T_IDC;
	CButton Reg_Sex_R0_IDC;
	CButton Reg_Sex_R1_IDC;
	BOOL Reg_Sex_R_V;

	CStatic Reg_Perfer_T0_IDC;
	CStatic Reg_Perfer_T1_IDC;
	CButton Reg_Perfer_CK0_IDC;
	CButton Reg_Perfer_CK1_IDC;
	CButton Reg_Perfer_CK2_IDC;
	CButton Reg_Perfer_CK3_IDC;
	BOOL Reg_Perfer_CK0_V;
	BOOL Reg_Perfer_CK1_V;
	BOOL Reg_Perfer_CK2_V;
	BOOL Reg_Perfer_CK3_V;

	CButton Reg_RegisterUser_B_IDC;
	CButton Reg_Reset_B_IDC;

	CStatic Reg_Admin_T0_IDC;
	CStatic Reg_Admin_T1_IDC;
	CButton Reg_Admin_R0_IDC;
	CButton Reg_Admin_R1_IDC;

	afx_msg void Reg_RegisterUser_B_CLI();
	afx_msg void Reg_Reset_B_CLI();
	
	/*****************************************
	 *			功能选择界面控件注册
	 *****************************************/
	//用户功能界面
	CButton MS_Seting_B_IDC;
	CButton MS_History_B_IDC;
	CButton MS_Order_B_IDC;
	CButton MS_Search_B_IDC;
	CStatic MS_BP_IDC;
	//管理员功能界面
	CButton Admin_Order_B_IDC;
	CButton Admin_UserManage_B_IDC;
	CButton Admin_Setting_B_IDC;
	/*****************************************
	*			多样化检索界面控件注册
	*****************************************/
	CStatic MS_Search_Lookup_ET_IDC, MS_Search_Lookup_B_IDC;

	CStatic MS_Search_Lookup_P00_IDC, MS_Search_Lookup_P01_IDC, MS_Search_Lookup_P02_IDC, MS_Search_Lookup_P03_IDC, MS_Search_Lookup_P04_IDC,
		MS_Search_Lookup_P10_IDC, MS_Search_Lookup_P11_IDC, MS_Search_Lookup_P12_IDC, MS_Search_Lookup_P13_IDC, MS_Search_Lookup_P14_IDC,
		MS_Search_Lookup_P20_IDC, MS_Search_Lookup_P21_IDC, MS_Search_Lookup_P22_IDC, MS_Search_Lookup_P23_IDC, MS_Search_Lookup_P24_IDC,
		MS_Search_Lookup_P30_IDC, MS_Search_Lookup_P31_IDC, MS_Search_Lookup_P32_IDC, MS_Search_Lookup_P33_IDC, MS_Search_Lookup_P34_IDC;

	CStatic MS_Search_Lookup_T00_IDC, MS_Search_Lookup_T01_IDC, MS_Search_Lookup_T02_IDC, MS_Search_Lookup_T03_IDC, MS_Search_Lookup_T04_IDC,
		MS_Search_Lookup_T10_IDC, MS_Search_Lookup_T11_IDC, MS_Search_Lookup_T12_IDC, MS_Search_Lookup_T13_IDC, MS_Search_Lookup_T14_IDC,
		MS_Search_Lookup_T20_IDC, MS_Search_Lookup_T21_IDC, MS_Search_Lookup_T22_IDC, MS_Search_Lookup_T23_IDC, MS_Search_Lookup_T24_IDC,
		MS_Search_Lookup_T30_IDC, MS_Search_Lookup_T31_IDC, MS_Search_Lookup_T32_IDC, MS_Search_Lookup_T33_IDC, MS_Search_Lookup_T34_IDC;

	CString MS_Search_Lookup_ET_V;
	CString MS_Search_Lookup_T00_V, MS_Search_Lookup_T01_V, MS_Search_Lookup_T02_V, MS_Search_Lookup_T03_V, MS_Search_Lookup_T04_V,
		MS_Search_Lookup_T10_V, MS_Search_Lookup_T11_V, MS_Search_Lookup_T12_V, MS_Search_Lookup_T13_V, MS_Search_Lookup_T14_V,
		MS_Search_Lookup_T20_V, MS_Search_Lookup_T21_V, MS_Search_Lookup_T22_V, MS_Search_Lookup_T23_V, MS_Search_Lookup_T24_V,
		MS_Search_Lookup_T30_V, MS_Search_Lookup_T31_V, MS_Search_Lookup_T32_V, MS_Search_Lookup_T33_V, MS_Search_Lookup_T34_V;

	afx_msg void CLSMenuSystemDlg::MS_Search_B_CLI();
	afx_msg void CLSMenuSystemDlg::MS_Search_Lookup_B_CLI();
	/*****************************************
	 *			设置界面控件注册
	 *****************************************/
	CStatic MS_Seting_User_T_IDC;
	CStatic MS_Seting_UserLogin_T_IDC;
	CString MS_Seting_UserLogin_T_V;

	CStatic MS_Seting_Password_T_IDC;
	CEdit MS_Seting_Password_ET_IDC;
	CString MS_Seting_Password_ET_V;

	CStatic MS_Seting_PhoneNumber_T_IDC;
	CEdit MS_Seting_PhoneNmber_ET_IDC;
	CString MS_Seting_PhoneNumber_ET_V;

	CStatic MS_Seting_Sex_T_IDC;
	CButton MS_Seting_Sex_R0_IDC;
	CButton MS_Seting_Sex_R1_IDC;
	BOOL MS_Seting_Sex_R_V;

	CStatic MS_Seting_UserAvatarPath_T_IDC;
	CEdit MS_Seting_UserAvatarPath_ET_IDC;
	CButton MS_Seting_UserAvatarPath_B_IDC;
	CString MS_Seting_UserAvatarPath_ET_V;

	CStatic MS_Seting_Recom_T_IDC;
	CButton MS_Seting_Recom_R0_IDC;
	CButton MS_Seting_Recom_R1_IDC;
	BOOL MS_Seting_Recom_R_V;

	CButton MS_Seting_Logout_B_IDC;
	CButton MS_Seting_SaveInfo_B_IDC;

	afx_msg void MS_Seting_SaveInfo_B_CLI();
	afx_msg void MS_Seting_Logout_B_CLI();
	afx_msg void MS_Seting_B_CLI();
	/*****************************************
	*			点餐界面控件注册
	*****************************************/
	CButton MS_Order_Label_B0_IDC, MS_Order_Label_B1_IDC, MS_Order_Label_B2_IDC, MS_Order_Label_B3_IDC, MS_Order_Label_B4_IDC;
	CButton	MS_Order_Label_B5_IDC, MS_Order_Label_B6_IDC, MS_Order_Label_B7_IDC, MS_Order_Label_B8_IDC, MS_Order_Label_B9_IDC;

	CStatic MS_Order_CutRule_CR_IDC;

	CButton MS_Order_MenuImage_B00_IDC, MS_Order_MenuImage_B01_IDC, MS_Order_MenuImage_B02_IDC, MS_Order_MenuImage_B03_IDC;
	CButton MS_Order_MenuImage_B10_IDC, MS_Order_MenuImage_B11_IDC, MS_Order_MenuImage_B12_IDC, MS_Order_MenuImage_B13_IDC;
	CButton MS_Order_MenuImage_B20_IDC, MS_Order_MenuImage_B21_IDC, MS_Order_MenuImage_B22_IDC, MS_Order_MenuImage_B23_IDC;

	CStatic MS_Order_MenuImagePitch_P00_IDC, MS_Order_MenuImagePitch_P01_IDC, MS_Order_MenuImagePitch_P02_IDC, MS_Order_MenuImagePitch_P03_IDC;
	CStatic MS_Order_MenuImagePitch_P10_IDC, MS_Order_MenuImagePitch_P11_IDC, MS_Order_MenuImagePitch_P12_IDC, MS_Order_MenuImagePitch_P13_IDC;
	CStatic MS_Order_MenuImagePitch_P20_IDC, MS_Order_MenuImagePitch_P21_IDC, MS_Order_MenuImagePitch_P22_IDC, MS_Order_MenuImagePitch_P23_IDC;

	CStatic MS_Order_MenuName_T00_IDC, MS_Order_MenuName_T01_IDC, MS_Order_MenuName_T02_IDC, MS_Order_MenuName_T03_IDC;
	CStatic MS_Order_MenuName_T10_IDC, MS_Order_MenuName_T11_IDC, MS_Order_MenuName_T12_IDC, MS_Order_MenuName_T13_IDC;
	CStatic MS_Order_MenuName_T20_IDC, MS_Order_MenuName_T21_IDC, MS_Order_MenuName_T22_IDC, MS_Order_MenuName_T23_IDC;

	CStatic MS_Order_MenuPrice_T00_IDC, MS_Order_MenuPrice_T01_IDC, MS_Order_MenuPrice_T02_IDC, MS_Order_MenuPrice_T03_IDC;
	CStatic MS_Order_MenuPrice_T10_IDC, MS_Order_MenuPrice_T11_IDC, MS_Order_MenuPrice_T12_IDC, MS_Order_MenuPrice_T13_IDC;
	CStatic MS_Order_MenuPrice_T20_IDC, MS_Order_MenuPrice_T21_IDC, MS_Order_MenuPrice_T22_IDC, MS_Order_MenuPrice_T23_IDC;

	CString MS_Order_MenuName_T00_V, MS_Order_MenuName_T01_V, MS_Order_MenuName_T02_V, MS_Order_MenuName_T03_V;
	CString MS_Order_MenuName_T10_V, MS_Order_MenuName_T11_V, MS_Order_MenuName_T12_V, MS_Order_MenuName_T13_V;
	CString MS_Order_MenuName_T20_V, MS_Order_MenuName_T21_V, MS_Order_MenuName_T22_V, MS_Order_MenuName_T23_V;

	CString MS_Order_MenuPrice_T00_V, MS_Order_MenuPrice_T01_V, MS_Order_MenuPrice_T02_V, MS_Order_MenuPrice_T03_V;
	CString MS_Order_MenuPrice_T10_V, MS_Order_MenuPrice_T11_V, MS_Order_MenuPrice_T12_V, MS_Order_MenuPrice_T13_V;
	CString MS_Order_MenuPrice_T20_V, MS_Order_MenuPrice_T21_V, MS_Order_MenuPrice_T22_V, MS_Order_MenuPrice_T23_V;
	//点餐购物车控件注册
	CStatic MS_Order_Shopping_T_IDC, MS_Order_Shopping_CR_IDC;
	CStatic MS_Order_ShoppingName_T_IDC, MS_Order_ShoppingUnitPrice_T_IDC, MS_Order_ShoppingAmount_T_IDC, MS_Order_ShoppingDelete_T_IDC;

	CStatic MS_Order_ShoppingName_T0_IDC, MS_Order_ShoppingName_T1_IDC, MS_Order_ShoppingName_T2_IDC, MS_Order_ShoppingName_T3_IDC, MS_Order_ShoppingName_T4_IDC;
	CStatic	MS_Order_ShoppingName_T5_IDC, MS_Order_ShoppingName_T6_IDC, MS_Order_ShoppingName_T7_IDC, MS_Order_ShoppingName_T8_IDC, MS_Order_ShoppingName_T9_IDC;

	CStatic MS_Order_ShoppingUnitPrice_T0_IDC, MS_Order_ShoppingUnitPrice_T1_IDC, MS_Order_ShoppingUnitPrice_T2_IDC, MS_Order_ShoppingUnitPrice_T3_IDC, MS_Order_ShoppingUnitPrice_T4_IDC;
	CStatic	MS_Order_ShoppingUnitPrice_T5_IDC, MS_Order_ShoppingUnitPrice_T6_IDC, MS_Order_ShoppingUnitPrice_T7_IDC, MS_Order_ShoppingUnitPrice_T8_IDC, MS_Order_ShoppingUnitPrice_T9_IDC;

	CEdit MS_Order_ShoppingAmount_ET0_IDC, MS_Order_ShoppingAmount_ET1_IDC, MS_Order_ShoppingAmount_ET2_IDC, MS_Order_ShoppingAmount_ET3_IDC, MS_Order_ShoppingAmount_ET4_IDC;
	CEdit MS_Order_ShoppingAmount_ET5_IDC, MS_Order_ShoppingAmount_ET6_IDC, MS_Order_ShoppingAmount_ET7_IDC, MS_Order_ShoppingAmount_ET8_IDC, MS_Order_ShoppingAmount_ET9_IDC;

	CButton MS_Order_ShoppingDelete_B0_IDC, MS_Order_ShoppingDelete_B1_IDC, MS_Order_ShoppingDelete_B2_IDC, MS_Order_ShoppingDelete_B3_IDC, MS_Order_ShoppingDelete_B4_IDC;
	CButton MS_Order_ShoppingDelete_B5_IDC, MS_Order_ShoppingDelete_B6_IDC, MS_Order_ShoppingDelete_B7_IDC, MS_Order_ShoppingDelete_B8_IDC, MS_Order_ShoppingDelete_B9_IDC;

	CString MS_Order_ShoppingName_T0_V, MS_Order_ShoppingName_T1_V, MS_Order_ShoppingName_T2_V, MS_Order_ShoppingName_T3_V, MS_Order_ShoppingName_T4_V;
	CString	MS_Order_ShoppingName_T5_V, MS_Order_ShoppingName_T6_V, MS_Order_ShoppingName_T7_V, MS_Order_ShoppingName_T8_V, MS_Order_ShoppingName_T9_V;

	CString MS_Order_ShoppingUnitPrice_T0_V, MS_Order_ShoppingUnitPrice_T1_V, MS_Order_ShoppingUnitPrice_T2_V, MS_Order_ShoppingUnitPrice_T3_V, MS_Order_ShoppingUnitPrice_T4_V;
	CString	MS_Order_ShoppingUnitPrice_T5_V, MS_Order_ShoppingUnitPrice_T6_V, MS_Order_ShoppingUnitPrice_T7_V, MS_Order_ShoppingUnitPrice_T8_V, MS_Order_ShoppingUnitPrice_T9_V;

	CString MS_Order_ShoppingAmount_ET0_V, MS_Order_ShoppingAmount_ET1_V, MS_Order_ShoppingAmount_ET2_V, MS_Order_ShoppingAmount_ET3_V, MS_Order_ShoppingAmount_ET4_V;
	CString MS_Order_ShoppingAmount_ET5_V, MS_Order_ShoppingAmount_ET6_V, MS_Order_ShoppingAmount_ET7_V, MS_Order_ShoppingAmount_ET8_V, MS_Order_ShoppingAmount_ET9_V;

	CButton MS_Order_AddCart_B_IDC, MS_Order_ResetCart_B_IDC, MS_Order_Pay_B_IDC;

	CStatic MS_Order_Shopping_B_IDC, MS_Order_Amount_T_IDC, MS_Order_Price_T_IDC;
	CString MS_Order_Price_T_V;

	int MS_Order_Price_I00 = 0, MS_Order_Price_I01 = 0, MS_Order_Price_I02 = 0, MS_Order_Price_I03 = 0;
	int MS_Order_Price_I10 = 0, MS_Order_Price_I11 = 0, MS_Order_Price_I12 = 0, MS_Order_Price_I13 = 0;
	int MS_Order_Price_I20 = 0, MS_Order_Price_I21 = 0, MS_Order_Price_I22 = 0, MS_Order_Price_I23 = 0;
	int Price = 0 , *Price_ptr = &Price;

	int MS_Order_ShoppingAmount_I0 = 0, MS_Order_ShoppingAmount_I1 = 0, MS_Order_ShoppingAmount_I2 = 0, MS_Order_ShoppingAmount_I3 = 0, MS_Order_ShoppingAmount_I4 = 0;
	int MS_Order_ShoppingAmount_I5 = 0, MS_Order_ShoppingAmount_I6 = 0, MS_Order_ShoppingAmount_I7 = 0, MS_Order_ShoppingAmount_I8 = 0, MS_Order_ShoppingAmount_I9 = 0;
	int* MS_Order_ShoppingAmount_I0_ptr = &MS_Order_ShoppingAmount_I0;
	int* MS_Order_ShoppingAmount_I1_ptr = &MS_Order_ShoppingAmount_I1;
	int* MS_Order_ShoppingAmount_I2_ptr = &MS_Order_ShoppingAmount_I2;
	int* MS_Order_ShoppingAmount_I3_ptr = &MS_Order_ShoppingAmount_I3;
	int* MS_Order_ShoppingAmount_I4_ptr = &MS_Order_ShoppingAmount_I4;
	int* MS_Order_ShoppingAmount_I5_ptr = &MS_Order_ShoppingAmount_I5;
	int* MS_Order_ShoppingAmount_I6_ptr = &MS_Order_ShoppingAmount_I6;
	int* MS_Order_ShoppingAmount_I7_ptr = &MS_Order_ShoppingAmount_I7;
	int* MS_Order_ShoppingAmount_I8_ptr = &MS_Order_ShoppingAmount_I8;
	int* MS_Order_ShoppingAmount_I9_ptr = &MS_Order_ShoppingAmount_I9;

	CString MS_Order_MenuName_CS00, MS_Order_MenuName_CS01, MS_Order_MenuName_CS02, MS_Order_MenuName_CS03;
	CString MS_Order_MenuName_CS10, MS_Order_MenuName_CS11, MS_Order_MenuName_CS12, MS_Order_MenuName_CS13;
	CString MS_Order_MenuName_CS20, MS_Order_MenuName_CS21, MS_Order_MenuName_CS22, MS_Order_MenuName_CS23;

	CString MS_Order_MenuPrice_CS00, MS_Order_MenuPrice_CS01, MS_Order_MenuPrice_CS02, MS_Order_MenuPrice_CS03;
	CString MS_Order_MenuPrice_CS10, MS_Order_MenuPrice_CS11, MS_Order_MenuPrice_CS12, MS_Order_MenuPrice_CS13;
	CString MS_Order_MenuPrice_CS20, MS_Order_MenuPrice_CS21, MS_Order_MenuPrice_CS22, MS_Order_MenuPrice_CS23;

	afx_msg void MS_Order_B_CLI();
	void MS_Order_B_Function(CString Perfer);
	afx_msg void MS_Order_Label_B0_CLI();
	afx_msg void MS_Order_Label_B1_CLI();
	afx_msg void MS_Order_Label_B2_CLI();
	afx_msg void MS_Order_Label_B3_CLI();
	afx_msg void MS_Order_Label_B4_CLI();
	afx_msg void MS_Order_Label_B5_CLI();
	afx_msg void MS_Order_Label_B6_CLI();
	afx_msg void MS_Order_Label_B7_CLI();
	afx_msg void MS_Order_Label_B8_CLI();
	afx_msg void MS_Order_Label_B9_CLI();
	afx_msg void MS_Order_MenuImage_B00_CLI();
	afx_msg void MS_Order_MenuImage_B01_CLI();
	afx_msg void MS_Order_MenuImage_B02_CLI();
	afx_msg void MS_Order_MenuImage_B03_CLI();
	afx_msg void MS_Order_MenuImage_B10_CLI();
	afx_msg void MS_Order_MenuImage_B11_CLI();
	afx_msg void MS_Order_MenuImage_B12_CLI();
	afx_msg void MS_Order_MenuImage_B13_CLI();
	afx_msg void MS_Order_MenuImage_B20_CLI();
	afx_msg void MS_Order_MenuImage_B21_CLI();
	afx_msg void MS_Order_MenuImage_B22_CLI();
	afx_msg void MS_Order_MenuImage_B23_CLI();
	afx_msg void MS_Order_Shopping_B_CLI();
	void MS_Order_Shopping_B_Function(BOOL TrunofWindows, int Number);
	afx_msg void MS_Order_AddCart_B_CLI();
	void MS_Order_AddCart_B_Function(CString MS_Order_MenuName_CS, CString MS_Order_MenuPrice_CS);
	afx_msg void MS_Order_ShoppingAmount_ET0_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET1_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET2_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET3_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET4_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET5_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET6_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET7_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET8_EKF();
	afx_msg void MS_Order_ShoppingAmount_ET9_EKF();
	void MS_Order_ShoppingAmount_Function(CString MS_Order_ShoppingUnitPrice, CString MS_Order_ShoppingAmount, int* MS_Order_ShoppingAmount_ptr);
	void CLSMenuSystemDlg::ClearArray();
	
	afx_msg void MS_Order_ShoppingDelete_B0_CLI();
	void MS_Order_ShoppingDelete_B0_Function();
	afx_msg void MS_Order_ShoppingDelete_B1_CLI();
	void MS_Order_ShoppingDelete_B1_Function();
	afx_msg void MS_Order_ShoppingDelete_B2_CLI();
	void MS_Order_ShoppingDelete_B2_Function();
	afx_msg void MS_Order_ShoppingDelete_B3_CLI();
	void MS_Order_ShoppingDelete_B3_Function();
	afx_msg void MS_Order_ShoppingDelete_B4_CLI();
	void MS_Order_ShoppingDelete_B4_Function();
	afx_msg void MS_Order_ShoppingDelete_B5_CLI();
	void MS_Order_ShoppingDelete_B5_Function();
	afx_msg void MS_Order_ShoppingDelete_B6_CLI();
	void MS_Order_ShoppingDelete_B6_Function();
	afx_msg void MS_Order_ShoppingDelete_B7_CLI();
	void MS_Order_ShoppingDelete_B7_Function();
	afx_msg void MS_Order_ShoppingDelete_B8_CLI();
	void MS_Order_ShoppingDelete_B8_Function();
	afx_msg void MS_Order_ShoppingDelete_B9_CLI();
	void MS_Order_ShoppingDelete_B9_Function();
	afx_msg void MS_Order_ResetCart_B_CLI();
	afx_msg void MS_Order_Pay_B_CLI();
	void MS_Order_ShoppingDelete_MinusPrice_Function(CString MS_Order_ShoppingUnitPrice);
	/*****************************************
	*			历史记录界面控件注册
	*****************************************/
	CStatic MS_History_Detail_T_IDC, 
		MS_History_Detail_T0_IDC, MS_History_Detail_T1_IDC, MS_History_Detail_T2_IDC, MS_History_Detail_T3_IDC, MS_History_Detail_T4_IDC,
		MS_History_Detail_T5_IDC, MS_History_Detail_T6_IDC, MS_History_Detail_T7_IDC, MS_History_Detail_T8_IDC, MS_History_Detail_T9_IDC;
	CString MS_History_Detail_T0_V, MS_History_Detail_T1_V, MS_History_Detail_T2_V, MS_History_Detail_T3_V, MS_History_Detail_T4_V,
		MS_History_Detail_T5_V, MS_History_Detail_T6_V, MS_History_Detail_T7_V, MS_History_Detail_T8_V, MS_History_Detail_T9_V;
	CStatic MS_History_Consume_T_IDC,
		MS_History_Consume_T0_IDC, MS_History_Consume_T1_IDC, MS_History_Consume_T2_IDC, MS_History_Consume_T3_IDC, MS_History_Consume_T4_IDC,
		MS_History_Consume_T5_IDC, MS_History_Consume_T6_IDC, MS_History_Consume_T7_IDC, MS_History_Consume_T8_IDC, MS_History_Consume_T9_IDC;
	CString MS_History_Consume_T0_V, MS_History_Consume_T1_V, MS_History_Consume_T2_V, MS_History_Consume_T3_V, MS_History_Consume_T4_V,
		MS_History_Consume_T5_V, MS_History_Consume_T6_V, MS_History_Consume_T7_V, MS_History_Consume_T8_V, MS_History_Consume_T9_V;
	CStatic MS_History_Time_T_IDC,
		MS_History_Time_T0_IDC, MS_History_Time_T1_IDC, MS_History_Time_T2_IDC, MS_History_Time_T3_IDC, MS_History_Time_T4_IDC,
		MS_History_Time_T5_IDC, MS_History_Time_T6_IDC, MS_History_Time_T7_IDC, MS_History_Time_T8_IDC, MS_History_Time_T9_IDC;
	CString MS_History_Time_T0_V, MS_History_Time_T1_V, MS_History_Time_T2_V, MS_History_Time_T3_V, MS_History_Time_T4_V,
		MS_History_Time_T5_V, MS_History_Time_T6_V, MS_History_Time_T7_V, MS_History_Time_T8_V, MS_History_Time_T9_V;
	CStatic MS_History_Delete_B0_IDC, MS_History_Delete_B1_IDC, MS_History_Delete_B2_IDC, MS_History_Delete_B3_IDC, MS_History_Delete_B4_IDC,
		MS_History_Delete_B5_IDC, MS_History_Delete_B6_IDC, MS_History_Delete_B7_IDC, MS_History_Delete_B8_IDC, MS_History_Delete_B9_IDC;
	CStatic MS_History_CR0_IDC, MS_History_CR1_IDC, MS_History_CR2_IDC, MS_History_CR3_IDC, MS_History_CR4_IDC, MS_History_CR5_IDC, MS_History_CR6_IDC;
	afx_msg void MS_History_B_CLI();
	afx_msg void MS_History_Delete_B0_CLI();
	void MS_History_Delete_B0_CLI_Function();
	afx_msg void MS_History_Delete_B1_CLI();
	void MS_History_Delete_B1_CLI_Function();
	afx_msg void MS_History_Delete_B2_CLI();
	void MS_History_Delete_B2_CLI_Function();
	afx_msg void MS_History_Delete_B3_CLI();
	void MS_History_Delete_B3_CLI_Function();
	afx_msg void MS_History_Delete_B4_CLI();
	void MS_History_Delete_B4_CLI_Function();
	afx_msg void MS_History_Delete_B5_CLI();
	void MS_History_Delete_B5_CLI_Function();
	afx_msg void MS_History_Delete_B6_CLI();
	void MS_History_Delete_B6_CLI_Function();
	afx_msg void MS_History_Delete_B7_CLI();
	void MS_History_Delete_B7_CLI_Function();
	afx_msg void MS_History_Delete_B8_CLI();
	void MS_History_Delete_B8_CLI_Function();
	afx_msg void MS_History_Delete_B9_CLI();
	void MS_History_Delete_B9_CLI_Function();
	/*****************************************
	*			全局食谱界面控件注册
	*****************************************/
	CStatic Admin_Order_UpData_T_IDC, Admin_Order_UpData_B_IDC, Admin_Order_DeleteOrder_B_IDC, Admin_Order_UpDataFile_B_IDC, 
		Admin_Order_UpDataMenuname_ET_IDC, Admin_Order_UpDataInformation_ET_IDC, Admin_Order_UpDataPerfer_ET_IDC, 
		Admin_Order_UpDataMenuPrice_ET_IDC, Admin_Order_UpDataMenuSpecs_ET_IDC, Admin_Order_UpDataMenuImagePath_ET_IDC;

	CButton Admin_Order_Label_B0_IDC, Admin_Order_Label_B1_IDC, Admin_Order_Label_B2_IDC, Admin_Order_Label_B3_IDC, Admin_Order_Label_B4_IDC;
	CButton	Admin_Order_Label_B5_IDC, Admin_Order_Label_B6_IDC, Admin_Order_Label_B7_IDC, Admin_Order_Label_B8_IDC, Admin_Order_Label_B9_IDC;

	CStatic Admin_Order_CutRule_CR_IDC;

	CButton Admin_Order_MenuImage_B00_IDC, Admin_Order_MenuImage_B01_IDC, Admin_Order_MenuImage_B02_IDC, Admin_Order_MenuImage_B03_IDC;
	CButton Admin_Order_MenuImage_B10_IDC, Admin_Order_MenuImage_B11_IDC, Admin_Order_MenuImage_B12_IDC, Admin_Order_MenuImage_B13_IDC;
	CButton Admin_Order_MenuImage_B20_IDC, Admin_Order_MenuImage_B21_IDC, Admin_Order_MenuImage_B22_IDC, Admin_Order_MenuImage_B23_IDC;

	CStatic Admin_Order_MenuImagePitch_P00_IDC, Admin_Order_MenuImagePitch_P01_IDC, Admin_Order_MenuImagePitch_P02_IDC, Admin_Order_MenuImagePitch_P03_IDC;
	CStatic Admin_Order_MenuImagePitch_P10_IDC, Admin_Order_MenuImagePitch_P11_IDC, Admin_Order_MenuImagePitch_P12_IDC, Admin_Order_MenuImagePitch_P13_IDC;
	CStatic Admin_Order_MenuImagePitch_P20_IDC, Admin_Order_MenuImagePitch_P21_IDC, Admin_Order_MenuImagePitch_P22_IDC, Admin_Order_MenuImagePitch_P23_IDC;

	CStatic Admin_Order_MenuName_T00_IDC, Admin_Order_MenuName_T01_IDC, Admin_Order_MenuName_T02_IDC, Admin_Order_MenuName_T03_IDC;
	CStatic Admin_Order_MenuName_T10_IDC, Admin_Order_MenuName_T11_IDC, Admin_Order_MenuName_T12_IDC, Admin_Order_MenuName_T13_IDC;
	CStatic Admin_Order_MenuName_T20_IDC, Admin_Order_MenuName_T21_IDC, Admin_Order_MenuName_T22_IDC, Admin_Order_MenuName_T23_IDC;

	CStatic Admin_Order_MenuPrice_T00_IDC, Admin_Order_MenuPrice_T01_IDC, Admin_Order_MenuPrice_T02_IDC, Admin_Order_MenuPrice_T03_IDC;
	CStatic Admin_Order_MenuPrice_T10_IDC, Admin_Order_MenuPrice_T11_IDC, Admin_Order_MenuPrice_T12_IDC, Admin_Order_MenuPrice_T13_IDC;
	CStatic Admin_Order_MenuPrice_T20_IDC, Admin_Order_MenuPrice_T21_IDC, Admin_Order_MenuPrice_T22_IDC, Admin_Order_MenuPrice_T23_IDC;

	CString Admin_Order_UpDataMenuname_ET_V, Admin_Order_UpDataInformation_ET_V, Admin_Order_UpDataPerfer_ET_V, 
		Admin_Order_UpDataMenuPrice_ET_V, Admin_Order_UpDataMenuSpecs_ET_V, Admin_Order_UpDataMenuImagePath_ET_V;

	CString Admin_Order_MenuName_T00_V, Admin_Order_MenuName_T01_V, Admin_Order_MenuName_T02_V, Admin_Order_MenuName_T03_V;
	CString Admin_Order_MenuName_T10_V, Admin_Order_MenuName_T11_V, Admin_Order_MenuName_T12_V, Admin_Order_MenuName_T13_V;
	CString Admin_Order_MenuName_T20_V, Admin_Order_MenuName_T21_V, Admin_Order_MenuName_T22_V, Admin_Order_MenuName_T23_V;

	CString Admin_Order_MenuPrice_T00_V, Admin_Order_MenuPrice_T01_V, Admin_Order_MenuPrice_T02_V, Admin_Order_MenuPrice_T03_V;
	CString Admin_Order_MenuPrice_T10_V, Admin_Order_MenuPrice_T11_V, Admin_Order_MenuPrice_T12_V, Admin_Order_MenuPrice_T13_V;
	CString Admin_Order_MenuPrice_T20_V, Admin_Order_MenuPrice_T21_V, Admin_Order_MenuPrice_T22_V, Admin_Order_MenuPrice_T23_V;

	CString Admin_Order_MenuName_CS00, Admin_Order_MenuName_CS01, Admin_Order_MenuName_CS02, Admin_Order_MenuName_CS03;
	CString Admin_Order_MenuName_CS10, Admin_Order_MenuName_CS11, Admin_Order_MenuName_CS12, Admin_Order_MenuName_CS13;
	CString Admin_Order_MenuName_CS20, Admin_Order_MenuName_CS21, Admin_Order_MenuName_CS22, Admin_Order_MenuName_CS23;

	CString Admin_Order_MenuPrice_CS00, Admin_Order_MenuPrice_CS01, Admin_Order_MenuPrice_CS02, Admin_Order_MenuPrice_CS03;
	CString Admin_Order_MenuPrice_CS10, Admin_Order_MenuPrice_CS11, Admin_Order_MenuPrice_CS12, Admin_Order_MenuPrice_CS13;
	CString Admin_Order_MenuPrice_CS20, Admin_Order_MenuPrice_CS21, Admin_Order_MenuPrice_CS22, Admin_Order_MenuPrice_CS23;

	int Admin_Order_Price_I00 = 0, Admin_Order_Price_I01 = 0, Admin_Order_Price_I02 = 0, Admin_Order_Price_I03 = 0;
	int Admin_Order_Price_I10 = 0, Admin_Order_Price_I11 = 0, Admin_Order_Price_I12 = 0, Admin_Order_Price_I13 = 0;
	int Admin_Order_Price_I20 = 0, Admin_Order_Price_I21 = 0, Admin_Order_Price_I22 = 0, Admin_Order_Price_I23 = 0;

	afx_msg void Admin_Order_B_CLI();
	void Admin_Order_B_Function(CString Perfer);
	afx_msg void Admin_Order_Label_B0_CLI();
	afx_msg void Admin_Order_Label_B1_CLI();
	afx_msg void Admin_Order_Label_B2_CLI();
	afx_msg void Admin_Order_Label_B3_CLI();
	afx_msg void Admin_Order_Label_B4_CLI();
	afx_msg void Admin_Order_Label_B5_CLI();
	afx_msg void Admin_Order_Label_B6_CLI();
	afx_msg void Admin_Order_Label_B7_CLI();
	afx_msg void Admin_Order_Label_B8_CLI();
	afx_msg void Admin_Order_Label_B9_CLI();
	afx_msg void Admin_Order_MenuImage_B00_CLI();
	afx_msg void Admin_Order_MenuImage_B01_CLI();
	afx_msg void Admin_Order_MenuImage_B02_CLI();
	afx_msg void Admin_Order_MenuImage_B03_CLI();
	afx_msg void Admin_Order_MenuImage_B10_CLI();
	afx_msg void Admin_Order_MenuImage_B11_CLI();
	afx_msg void Admin_Order_MenuImage_B12_CLI();
	afx_msg void Admin_Order_MenuImage_B13_CLI();
	afx_msg void Admin_Order_MenuImage_B20_CLI();
	afx_msg void Admin_Order_MenuImage_B21_CLI();
	afx_msg void Admin_Order_MenuImage_B22_CLI();
	afx_msg void Admin_Order_MenuImage_B23_CLI();

	afx_msg void Admin_Order_UpDataFile_B_CLI();
	afx_msg void Admin_Order_DeleteOrder_B_CLI();
	afx_msg void Admin_Order_UpData_B_CLI();

	CString Temp;
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P00_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P01_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P02_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P03_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P10_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P11_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P12_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P13_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P20_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P21_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P22_IDC_Function();
	void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P23_IDC_Function();
	/*****************************************
	*			用户管理界面控件注册
	*****************************************/
	CStatic
		Admin_UserManage_T_IDC, Admin_UserManage_Save_B_IDC;

	CButton
		Admin_UserManage_Delete_B0_IDC, Admin_UserManage_Delete_B1_IDC,
		Admin_UserManage_Delete_B2_IDC, Admin_UserManage_Delete_B3_IDC,
		Admin_UserManage_Delete_B4_IDC, Admin_UserManage_Delete_B5_IDC,
		Admin_UserManage_Delete_B6_IDC, Admin_UserManage_Delete_B7_IDC,
		Admin_UserManage_Delete_B8_IDC, Admin_UserManage_Delete_B9_IDC;

	CStatic
		Admin_UserManage_Username_T0_IDC, Admin_UserManage_Username_T1_IDC,
		Admin_UserManage_Username_T2_IDC, Admin_UserManage_Username_T3_IDC,
		Admin_UserManage_Username_T4_IDC, Admin_UserManage_Username_T5_IDC,
		Admin_UserManage_Username_T6_IDC, Admin_UserManage_Username_T7_IDC,
		Admin_UserManage_Username_T8_IDC, Admin_UserManage_Username_T9_IDC;

	CStatic
		Admin_UserManage_Password_ET0_IDC, Admin_UserManage_Password_ET1_IDC,
		Admin_UserManage_Password_ET2_IDC, Admin_UserManage_Password_ET3_IDC,
		Admin_UserManage_Password_ET4_IDC, Admin_UserManage_Password_ET5_IDC,
		Admin_UserManage_Password_ET6_IDC, Admin_UserManage_Password_ET7_IDC,
		Admin_UserManage_Password_ET8_IDC, Admin_UserManage_Password_ET9_IDC;

	CStatic
		Admin_UserManage_PhoneNumber_ET0_IDC, Admin_UserManage_PhoneNumber_ET1_IDC,
		Admin_UserManage_PhoneNumber_ET2_IDC, Admin_UserManage_PhoneNumber_ET3_IDC,
		Admin_UserManage_PhoneNumber_ET4_IDC, Admin_UserManage_PhoneNumber_ET5_IDC,
		Admin_UserManage_PhoneNumber_ET6_IDC, Admin_UserManage_PhoneNumber_ET7_IDC,
		Admin_UserManage_PhoneNumber_ET8_IDC, Admin_UserManage_PhoneNumber_ET9_IDC;

	CStatic
		Admin_UserManage_Sex_ET0_IDC, Admin_UserManage_Sex_ET1_IDC,
		Admin_UserManage_Sex_ET2_IDC, Admin_UserManage_Sex_ET3_IDC,
		Admin_UserManage_Sex_ET4_IDC, Admin_UserManage_Sex_ET5_IDC,
		Admin_UserManage_Sex_ET6_IDC, Admin_UserManage_Sex_ET7_IDC,
		Admin_UserManage_Sex_ET8_IDC, Admin_UserManage_Sex_ET9_IDC;

	CStatic
		Admin_UserManage_Perfer_ET0_IDC, Admin_UserManage_Perfer_ET1_IDC,
		Admin_UserManage_Perfer_ET2_IDC, Admin_UserManage_Perfer_ET3_IDC,
		Admin_UserManage_Perfer_ET4_IDC, Admin_UserManage_Perfer_ET5_IDC,
		Admin_UserManage_Perfer_ET6_IDC, Admin_UserManage_Perfer_ET7_IDC,
		Admin_UserManage_Perfer_ET8_IDC, Admin_UserManage_Perfer_ET9_IDC;

	CString
		Admin_UserManage_Username_T0_V, Admin_UserManage_Username_T1_V,
		Admin_UserManage_Username_T2_V, Admin_UserManage_Username_T3_V,
		Admin_UserManage_Username_T4_V, Admin_UserManage_Username_T5_V,
		Admin_UserManage_Username_T6_V, Admin_UserManage_Username_T7_V,
		Admin_UserManage_Username_T8_V, Admin_UserManage_Username_T9_V;

	CString
		Admin_UserManage_Password_ET0_V, Admin_UserManage_Password_ET1_V,
		Admin_UserManage_Password_ET2_V, Admin_UserManage_Password_ET3_V,
		Admin_UserManage_Password_ET4_V, Admin_UserManage_Password_ET5_V,
		Admin_UserManage_Password_ET6_V, Admin_UserManage_Password_ET7_V,
		Admin_UserManage_Password_ET8_V, Admin_UserManage_Password_ET9_V;

	CString
		Admin_UserManage_PhoneNumber_ET0_V, Admin_UserManage_PhoneNumber_ET1_V,
		Admin_UserManage_PhoneNumber_ET2_V, Admin_UserManage_PhoneNumber_ET3_V,
		Admin_UserManage_PhoneNumber_ET4_V, Admin_UserManage_PhoneNumber_ET5_V,
		Admin_UserManage_PhoneNumber_ET6_V, Admin_UserManage_PhoneNumber_ET7_V,
		Admin_UserManage_PhoneNumber_ET8_V, Admin_UserManage_PhoneNumber_ET9_V;

	CString
		Admin_UserManage_Sex_ET0_V, Admin_UserManage_Sex_ET1_V,
		Admin_UserManage_Sex_ET2_V, Admin_UserManage_Sex_ET3_V,
		Admin_UserManage_Sex_ET4_V, Admin_UserManage_Sex_ET5_V,
		Admin_UserManage_Sex_ET6_V, Admin_UserManage_Sex_ET7_V,
		Admin_UserManage_Sex_ET8_V, Admin_UserManage_Sex_ET9_V;

	CString
		Admin_UserManage_Perfer_ET0_V, Admin_UserManage_Perfer_ET1_V,
		Admin_UserManage_Perfer_ET2_V, Admin_UserManage_Perfer_ET3_V,
		Admin_UserManage_Perfer_ET4_V, Admin_UserManage_Perfer_ET5_V,
		Admin_UserManage_Perfer_ET6_V, Admin_UserManage_Perfer_ET7_V,
		Admin_UserManage_Perfer_ET8_V, Admin_UserManage_Perfer_ET9_V;

	afx_msg void Admin_UserManage_B_CLI();
	afx_msg void Admin_UserManage_Save_B_CLI();
	afx_msg void Admin_UserManage_Delete_B0_CLI();
	afx_msg void Admin_UserManage_Delete_B1_CLI();
	afx_msg void Admin_UserManage_Delete_B2_CLI();
	afx_msg void Admin_UserManage_Delete_B3_CLI();
	afx_msg void Admin_UserManage_Delete_B4_CLI();
	afx_msg void Admin_UserManage_Delete_B5_CLI();
	afx_msg void Admin_UserManage_Delete_B6_CLI();
	afx_msg void Admin_UserManage_Delete_B7_CLI();
	afx_msg void Admin_UserManage_Delete_B8_CLI();
	afx_msg void Admin_UserManage_Delete_B9_CLI();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B0_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B1_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B2_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B3_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B4_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B5_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B6_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B7_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B8_CLI_Function();
	void CLSMenuSystemDlg::Admin_UserManage_Delete_B9_CLI_Function();
	/*****************************************
	*			全局设置界面控件注册
	*****************************************/

	CStatic
		Admin_Setting_Search_T_IDC,
		Admin_Setting_Search_CK_IDC,
		Admin_Setting_Histroy_T_IDC,
		Admin_Setting_Histroy_CK_IDC,
		Admin_Setting_Order_T_IDC,
		Admin_Setting_Order_CK_IDC,
		Admin_Setting_AdminLogin_T_IDC,
		Admin_Setting_AdminLogin_CK_IDC,
		Admin_Setting_Register_T_IDC,
		Admin_Setting_Register_CK_IDC,
		Admin_Setting_Save_B_IDC,
		Admin_Setting_LoginOut_B_IDC,
		Admin_Setting_CR_IDC;

	BOOL Admin_Setting_Search_CK_V;
	BOOL Admin_Setting_Histroy_CK_V;
	BOOL Admin_Setting_Order_CK_V;
	BOOL Admin_Setting_AdminLogin_CK_V;
	BOOL Admin_Setting_Register_CK_V;

	afx_msg void Admin_Setting_B_CLI();
	afx_msg void Admin_Setting_Save_B_CLI();
	afx_msg void Admin_Setting_LoginOut_B_CLI();
};

