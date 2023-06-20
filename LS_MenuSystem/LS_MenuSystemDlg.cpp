
// LS_MenuSystemDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLSMenuSystemDlg 对话框

CLSMenuSystemDlg::CLSMenuSystemDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LS_MENUSYSTEM_DIALOG, pParent)
	, MS_Message_T_V(TEXT(""))
	, MS_User_T_V(TEXT("请登录"))
	, Reg_User_ET_V(TEXT(""))
	, Reg_Password_ET_V(TEXT(""))
	, Reg_PasswordIdentify_ET_V(TEXT(""))
	, Reg_PhoneNumber_ET_V(TEXT(""))
	, Login_User_ET_V(TEXT(""))
	, Login_Password_ET_V(TEXT(""))
	, MS_Seting_UserLogin_T_V(TEXT(""))
	, MS_Seting_Password_ET_V(TEXT(""))
	, MS_Seting_PhoneNumber_ET_V(TEXT(""))
	, MS_Seting_Sex_R_V(NULL)
	, Reg_Sex_R_V(-1)//清空注册界面的性别按钮选项
	, MS_Seting_UserAvatarPath_ET_V(TEXT(""))
	, MS_Seting_Recom_R_V(FALSE)
	, Reg_Perfer_CK0_V(FALSE)
	, Reg_Perfer_CK1_V(FALSE)
	, Reg_Perfer_CK2_V(FALSE)
	, Reg_Perfer_CK3_V(FALSE)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLSMenuSystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, Login_UserDefault_P, Login_UserDefault_P_IDC);
	DDX_Control(pDX, Login_User_T, Login_User_T_IDC);
	DDX_Control(pDX, Login_Password_T, Login_Password_T_IDC);
	DDX_Control(pDX, Login_User_ET, Login_User_ET_IDC);
	DDX_Control(pDX, Login_Password_ET, Login_Password_ET_IDC);
	DDX_Control(pDX, Login_Reset_B, Login_Reset_B_IDC);
	DDX_Control(pDX, Reg_User_ET, Reg_User_ET_IDC);
	DDX_Control(pDX, Reg_Password_ET, Reg_Password_ET_IDC);
	DDX_Control(pDX, Reg_PasswordIdentify_T0, Reg_PasswordIdentify_T0_IDC);
	DDX_Control(pDX, Reg_PasswordIdentify_T1, Reg_PasswordIdentify_T1_IDC);
	DDX_Control(pDX, Reg_PasswordIdentify_ET, Reg_PasswordIdentify_ET_IDC);
	DDX_Control(pDX, Reg_PhoneNumber_T, Reg_PhoneNumber_T_IDC);
	DDX_Control(pDX, Reg_PhoneNumber_ET, Reg_PhoneNumber_ET_IDC);
	DDX_Control(pDX, Reg_Sex_T, Reg_Sex_T_IDC);
	DDX_Control(pDX, Reg_Perfer_T0, Reg_Perfer_T0_IDC);
	DDX_Control(pDX, Reg_Perfer_CK0, Reg_Perfer_CK0_IDC);
	DDX_Control(pDX, Reg_Perfer_CK1, Reg_Perfer_CK1_IDC);
	DDX_Control(pDX, Reg_Perfer_CK2, Reg_Perfer_CK2_IDC);
	DDX_Control(pDX, Reg_Perfer_CK4, Reg_Perfer_CK3_IDC);
	DDX_Control(pDX, Reg_Reset_B, Reg_Reset_B_IDC);
	DDX_Control(pDX, Login_Reg_B, Login_Reg_B_IDC);
	DDX_Control(pDX, Login_Help_B, Login_Help_B_IDC);
	DDX_Control(pDX, Reg_Sex_R0, Reg_Sex_R0_IDC);
	DDX_Control(pDX, Reg_Sex_R1, Reg_Sex_R1_IDC);
	DDX_Control(pDX, Reg_Perfer_T1, Reg_Perfer_T1_IDC);
	DDX_Control(pDX, Reg_RegisterUser_B, Reg_RegisterUser_B_IDC);
	DDX_Control(pDX, Login_LoginUser_B, Login_LoginUser_B_IDC);
	DDX_Control(pDX, MS_DayRecom_T, MS_DayRecom_T_IDC);
	DDX_Text(pDX, MS_DayRecom_T, MS_DayRecom_T_V);
	DDX_Text(pDX, MS_Message_T, MS_Message_T_V);
	DDX_Text(pDX, Reg_User_ET, Reg_User_ET_V);
	DDX_Text(pDX, Reg_Password_ET, Reg_Password_ET_V);
	DDX_Text(pDX, Reg_PasswordIdentify_ET, Reg_PasswordIdentify_ET_V);
	DDX_Text(pDX, Reg_PhoneNumber_ET, Reg_PhoneNumber_ET_V);
	DDX_Text(pDX, Login_User_ET, Login_User_ET_V);
	DDX_Text(pDX, Login_Password_ET, Login_Password_ET_V);
	DDX_Control(pDX, MS_Seting_B, MS_Seting_B_IDC);
	DDX_Control(pDX, MS_History_B, MS_History_B_IDC);
	DDX_Control(pDX, MS_Order_B, MS_Order_B_IDC);
	DDX_Control(pDX, MS_Search_B, MS_Search_B_IDC);
	DDX_Control(pDX, MS_B_P, MS_BP_IDC);
	DDX_Control(pDX, Login_CutRule_CR, Login_CutRule_CR_IDC);
	DDX_Control(pDX, MS_Seting_User_T, MS_Seting_User_T_IDC);
	DDX_Control(pDX, MS_Seting_UserLogin_T, MS_Seting_UserLogin_T_IDC);
	DDX_Control(pDX, MS_Seting_Password_T, MS_Seting_Password_T_IDC);
	DDX_Control(pDX, MS_Seting_Password_ET, MS_Seting_Password_ET_IDC);
	DDX_Control(pDX, MS_Seting_Sex_T, MS_Seting_Sex_T_IDC);
	DDX_Control(pDX, MS_Seting_Sex_R0, MS_Seting_Sex_R0_IDC);
	DDX_Control(pDX, MS_Seting_Sex_R1, MS_Seting_Sex_R1_IDC);
	DDX_Control(pDX, MS_Seting_UserAvatarPath_T, MS_Seting_UserAvatarPath_T_IDC);
	DDX_Control(pDX, MS_Seting_UserAvatarPath_ET, MS_Seting_UserAvatarPath_ET_IDC);
	DDX_Control(pDX, MS_Seting_UserAvatarPath_B, MS_Seting_UserAvatarPath_B_IDC);
	DDX_Control(pDX, MS_Seting_Recom_T, MS_Seting_Recom_T_IDC);
	DDX_Control(pDX, MS_Seting_Recom_R0, MS_Seting_Recom_R0_IDC);
	DDX_Control(pDX, MS_Seting_Recom_R1, MS_Seting_Recom_R1_IDC);
	DDX_Control(pDX, MS_Seting_Logout_B, MS_Seting_Logout_B_IDC);
	DDX_Control(pDX, MS_Seting_SaveInfo_B, MS_Seting_SaveInfo_B_IDC);
	DDX_Text(pDX, MS_Seting_UserLogin_T, MS_Seting_UserLogin_T_V);
	DDX_Text(pDX, MS_Seting_Password_ET, MS_Seting_Password_ET_V);
	DDX_Control(pDX, MS_Seting_PhoneNmber_ET, MS_Seting_PhoneNmber_ET_IDC);
	DDX_Control(pDX, MS_Seting_PhoneNumber_T, MS_Seting_PhoneNumber_T_IDC);
	DDX_Text(pDX, MS_Seting_PhoneNmber_ET, MS_Seting_PhoneNumber_ET_V);
	DDX_Radio(pDX, MS_Seting_Sex_R0, MS_Seting_Sex_R_V);
	DDX_Radio(pDX, Reg_Sex_R0, Reg_Sex_R_V);
	DDX_Control(pDX, MS_Message_T, MS_Message_T_IDC);
	DDX_Text(pDX, MS_Seting_UserAvatarPath_ET, MS_Seting_UserAvatarPath_ET_V);
	DDX_Radio(pDX, MS_Seting_Recom_R0, MS_Seting_Recom_R_V);
	DDX_Text(pDX, MS_User_T, MS_User_T_V);
	DDX_Control(pDX, MS_User_T, MS_User_T_IDC);
	DDX_Check(pDX, Reg_Perfer_CK0, Reg_Perfer_CK0_V);
	DDX_Check(pDX, Reg_Perfer_CK1, Reg_Perfer_CK1_V);
	DDX_Check(pDX, Reg_Perfer_CK2, Reg_Perfer_CK2_V);
	DDX_Check(pDX, Reg_Perfer_CK3, Reg_Perfer_CK3_V);

	DDX_Control(pDX, MS_Order_Label_B0, MS_Order_Label_B0_IDC);
	DDX_Control(pDX, MS_Order_Label_B1, MS_Order_Label_B1_IDC);
	DDX_Control(pDX, MS_Order_Label_B2, MS_Order_Label_B2_IDC);
	DDX_Control(pDX, MS_Order_Label_B3, MS_Order_Label_B3_IDC);
	DDX_Control(pDX, MS_Order_Label_B4, MS_Order_Label_B4_IDC);
	DDX_Control(pDX, MS_Order_Label_B5, MS_Order_Label_B5_IDC);
	DDX_Control(pDX, MS_Order_Label_B6, MS_Order_Label_B6_IDC);
	DDX_Control(pDX, MS_Order_Label_B7, MS_Order_Label_B7_IDC);
	DDX_Control(pDX, MS_Order_Label_B8, MS_Order_Label_B8_IDC);
	DDX_Control(pDX, MS_Order_Label_B9, MS_Order_Label_B9_IDC);

	DDX_Control(pDX, MS_Order_CutRule_CR, MS_Order_CutRule_CR_IDC);
	
	DDX_Control(pDX, MS_Order_MenuImage_B00, MS_Order_MenuImage_B00_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B01, MS_Order_MenuImage_B01_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B02, MS_Order_MenuImage_B02_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B03, MS_Order_MenuImage_B03_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B10, MS_Order_MenuImage_B10_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B11, MS_Order_MenuImage_B11_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B12, MS_Order_MenuImage_B12_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B13, MS_Order_MenuImage_B13_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B20, MS_Order_MenuImage_B20_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B21, MS_Order_MenuImage_B21_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B22, MS_Order_MenuImage_B22_IDC);
	DDX_Control(pDX, MS_Order_MenuImage_B23, MS_Order_MenuImage_B23_IDC);

	DDX_Control(pDX, MS_Order_MenuImagePitch_P00, MS_Order_MenuImagePitch_P00_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P01, MS_Order_MenuImagePitch_P01_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P02, MS_Order_MenuImagePitch_P02_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P03, MS_Order_MenuImagePitch_P03_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P10, MS_Order_MenuImagePitch_P10_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P11, MS_Order_MenuImagePitch_P11_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P12, MS_Order_MenuImagePitch_P12_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P13, MS_Order_MenuImagePitch_P13_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P20, MS_Order_MenuImagePitch_P20_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P21, MS_Order_MenuImagePitch_P21_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P22, MS_Order_MenuImagePitch_P22_IDC);
	DDX_Control(pDX, MS_Order_MenuImagePitch_P23, MS_Order_MenuImagePitch_P23_IDC);

	DDX_Control(pDX, MS_Order_MenuName_T00, MS_Order_MenuName_T00_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T01, MS_Order_MenuName_T01_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T02, MS_Order_MenuName_T02_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T03, MS_Order_MenuName_T03_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T10, MS_Order_MenuName_T10_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T11, MS_Order_MenuName_T11_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T12, MS_Order_MenuName_T12_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T13, MS_Order_MenuName_T13_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T20, MS_Order_MenuName_T20_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T21, MS_Order_MenuName_T21_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T22, MS_Order_MenuName_T22_IDC);
	DDX_Control(pDX, MS_Order_MenuName_T23, MS_Order_MenuName_T23_IDC);

	DDX_Control(pDX, MS_Order_MenuPrice_T00, MS_Order_MenuPrice_T00_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T01, MS_Order_MenuPrice_T01_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T02, MS_Order_MenuPrice_T02_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T03, MS_Order_MenuPrice_T03_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T10, MS_Order_MenuPrice_T10_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T11, MS_Order_MenuPrice_T11_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T12, MS_Order_MenuPrice_T12_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T13, MS_Order_MenuPrice_T13_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T20, MS_Order_MenuPrice_T20_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T21, MS_Order_MenuPrice_T21_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T22, MS_Order_MenuPrice_T22_IDC);
	DDX_Control(pDX, MS_Order_MenuPrice_T23, MS_Order_MenuPrice_T23_IDC);

	DDX_Text(pDX, MS_Order_MenuName_T00, MS_Order_MenuName_T00_V);
	DDX_Text(pDX, MS_Order_MenuName_T01, MS_Order_MenuName_T01_V);
	DDX_Text(pDX, MS_Order_MenuName_T02, MS_Order_MenuName_T02_V);
	DDX_Text(pDX, MS_Order_MenuName_T03, MS_Order_MenuName_T03_V);
	DDX_Text(pDX, MS_Order_MenuName_T10, MS_Order_MenuName_T10_V);
	DDX_Text(pDX, MS_Order_MenuName_T11, MS_Order_MenuName_T11_V);
	DDX_Text(pDX, MS_Order_MenuName_T12, MS_Order_MenuName_T12_V);
	DDX_Text(pDX, MS_Order_MenuName_T13, MS_Order_MenuName_T13_V);
	DDX_Text(pDX, MS_Order_MenuName_T20, MS_Order_MenuName_T20_V);
	DDX_Text(pDX, MS_Order_MenuName_T21, MS_Order_MenuName_T21_V);
	DDX_Text(pDX, MS_Order_MenuName_T22, MS_Order_MenuName_T22_V);
	DDX_Text(pDX, MS_Order_MenuName_T23, MS_Order_MenuName_T23_V);

	DDX_Text(pDX, MS_Order_MenuPrice_T00, MS_Order_MenuPrice_T00_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T01, MS_Order_MenuPrice_T01_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T02, MS_Order_MenuPrice_T02_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T03, MS_Order_MenuPrice_T03_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T10, MS_Order_MenuPrice_T10_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T11, MS_Order_MenuPrice_T11_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T12, MS_Order_MenuPrice_T12_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T13, MS_Order_MenuPrice_T13_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T20, MS_Order_MenuPrice_T20_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T21, MS_Order_MenuPrice_T21_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T22, MS_Order_MenuPrice_T22_V);
	DDX_Text(pDX, MS_Order_MenuPrice_T23, MS_Order_MenuPrice_T23_V);

	DDX_Control(pDX, MS_Order_ShoppingName_T0, MS_Order_ShoppingName_T0_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T1, MS_Order_ShoppingName_T1_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T2, MS_Order_ShoppingName_T2_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T3, MS_Order_ShoppingName_T3_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T4, MS_Order_ShoppingName_T4_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T5, MS_Order_ShoppingName_T5_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T6, MS_Order_ShoppingName_T6_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T7, MS_Order_ShoppingName_T7_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T8, MS_Order_ShoppingName_T8_IDC);
	DDX_Control(pDX, MS_Order_ShoppingName_T9, MS_Order_ShoppingName_T9_IDC);

	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T0, MS_Order_ShoppingUnitPrice_T0_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T1, MS_Order_ShoppingUnitPrice_T1_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T2, MS_Order_ShoppingUnitPrice_T2_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T3, MS_Order_ShoppingUnitPrice_T3_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T4, MS_Order_ShoppingUnitPrice_T4_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T5, MS_Order_ShoppingUnitPrice_T5_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T6, MS_Order_ShoppingUnitPrice_T6_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T7, MS_Order_ShoppingUnitPrice_T7_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T8, MS_Order_ShoppingUnitPrice_T8_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T9, MS_Order_ShoppingUnitPrice_T9_IDC);

	DDX_Control(pDX, MS_Order_ShoppingAmount_ET0, MS_Order_ShoppingAmount_ET0_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET1, MS_Order_ShoppingAmount_ET1_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET2, MS_Order_ShoppingAmount_ET2_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET3, MS_Order_ShoppingAmount_ET3_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET4, MS_Order_ShoppingAmount_ET4_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET5, MS_Order_ShoppingAmount_ET5_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET6, MS_Order_ShoppingAmount_ET6_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET7, MS_Order_ShoppingAmount_ET7_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET8, MS_Order_ShoppingAmount_ET8_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_ET9, MS_Order_ShoppingAmount_ET9_IDC);

	DDX_Control(pDX, MS_Order_ShoppingDelete_B0, MS_Order_ShoppingDelete_B0_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B1, MS_Order_ShoppingDelete_B1_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B2, MS_Order_ShoppingDelete_B2_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B3, MS_Order_ShoppingDelete_B3_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B4, MS_Order_ShoppingDelete_B4_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B5, MS_Order_ShoppingDelete_B5_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B6, MS_Order_ShoppingDelete_B6_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B7, MS_Order_ShoppingDelete_B7_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B8, MS_Order_ShoppingDelete_B8_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_B9, MS_Order_ShoppingDelete_B9_IDC);
	
	DDX_Text(pDX, MS_Order_ShoppingName_T0, MS_Order_ShoppingName_T0_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T1, MS_Order_ShoppingName_T1_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T2, MS_Order_ShoppingName_T2_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T3, MS_Order_ShoppingName_T3_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T4, MS_Order_ShoppingName_T4_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T5, MS_Order_ShoppingName_T5_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T6, MS_Order_ShoppingName_T6_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T7, MS_Order_ShoppingName_T7_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T8, MS_Order_ShoppingName_T8_V);
	DDX_Text(pDX, MS_Order_ShoppingName_T9, MS_Order_ShoppingName_T9_V);

	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T0, MS_Order_ShoppingUnitPrice_T0_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T1, MS_Order_ShoppingUnitPrice_T1_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T2, MS_Order_ShoppingUnitPrice_T2_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T3, MS_Order_ShoppingUnitPrice_T3_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T4, MS_Order_ShoppingUnitPrice_T4_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T5, MS_Order_ShoppingUnitPrice_T5_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T6, MS_Order_ShoppingUnitPrice_T6_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T7, MS_Order_ShoppingUnitPrice_T7_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T8, MS_Order_ShoppingUnitPrice_T8_V);
	DDX_Text(pDX, MS_Order_ShoppingUnitPrice_T9, MS_Order_ShoppingUnitPrice_T9_V);

	DDX_Text(pDX, MS_Order_ShoppingAmount_ET0, MS_Order_ShoppingAmount_ET0_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET1, MS_Order_ShoppingAmount_ET1_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET2, MS_Order_ShoppingAmount_ET2_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET3, MS_Order_ShoppingAmount_ET3_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET4, MS_Order_ShoppingAmount_ET4_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET5, MS_Order_ShoppingAmount_ET5_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET6, MS_Order_ShoppingAmount_ET6_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET7, MS_Order_ShoppingAmount_ET7_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET8, MS_Order_ShoppingAmount_ET8_V);
	DDX_Text(pDX, MS_Order_ShoppingAmount_ET9, MS_Order_ShoppingAmount_ET9_V);
	DDX_Control(pDX, MS_Order_Shopping_T, MS_Order_Shopping_T_IDC);
	DDX_Control(pDX, MS_Order_Shopping_CR, MS_Order_Shopping_CR_IDC);
	DDX_Control(pDX, MS_Order__ShoppingName_T, MS_Order_ShoppingName_T_IDC);
	DDX_Control(pDX, MS_Order_ShoppingUnitPrice_T, MS_Order_ShoppingUnitPrice_T_IDC);
	DDX_Control(pDX, MS_Order_ShoppingAmount_T, MS_Order_ShoppingAmount_T_IDC);
	DDX_Control(pDX, MS_Order_ShoppingDelete_T, MS_Order_ShoppingDelete_T_IDC);
	DDX_Control(pDX, MS_Order_Pay_B, MS_Order_Pay_B_IDC);
	DDX_Control(pDX, MS_Order_Shopping_B, MS_Order_Shopping_B_IDC);
	DDX_Control(pDX, MS_Order_AddCart_B, MS_Order_AddCart_B_IDC);
	DDX_Control(pDX, MS_Order_ResetCart_B, MS_Order_ResetCart_B_IDC);
	DDX_Control(pDX, MS_Order_Amount_T, MS_Order_Amount_T_IDC);
	DDX_Control(pDX, MS_Order_Price_T, MS_Order_Price_T_IDC);
	DDX_Text(pDX, MS_Order_Price_T, MS_Order_Price_T_V);
	
	DDX_Control(pDX, MS_History_Detail_T, MS_History_Detail_T_IDC);
	DDX_Control(pDX, MS_History_Detail_T0, MS_History_Detail_T0_IDC);
	DDX_Control(pDX, MS_History_Detail_T1, MS_History_Detail_T1_IDC);
	DDX_Control(pDX, MS_History_Detail_T2, MS_History_Detail_T2_IDC);
	DDX_Control(pDX, MS_History_Detail_T3, MS_History_Detail_T3_IDC);
	DDX_Control(pDX, MS_History_Detail_T4, MS_History_Detail_T4_IDC);
	DDX_Control(pDX, MS_History_Detail_T5, MS_History_Detail_T5_IDC);
	DDX_Control(pDX, MS_History_Detail_T6, MS_History_Detail_T6_IDC);
	DDX_Control(pDX, MS_History_Detail_T7, MS_History_Detail_T7_IDC);
	DDX_Control(pDX, MS_History_Detail_T8, MS_History_Detail_T8_IDC);
	DDX_Control(pDX, MS_History_Detail_T9, MS_History_Detail_T9_IDC);
	DDX_Control(pDX, MS_History_Consume_T, MS_History_Consume_T_IDC);
	DDX_Control(pDX, MS_History_Consume_T0, MS_History_Consume_T0_IDC);
	DDX_Control(pDX, MS_History_Consume_T1, MS_History_Consume_T1_IDC);
	DDX_Control(pDX, MS_History_Consume_T2, MS_History_Consume_T2_IDC);
	DDX_Control(pDX, MS_History_Consume_T3, MS_History_Consume_T3_IDC);
	DDX_Control(pDX, MS_History_Consume_T4, MS_History_Consume_T4_IDC);
	DDX_Control(pDX, MS_History_Consume_T5, MS_History_Consume_T5_IDC);
	DDX_Control(pDX, MS_History_Consume_T6, MS_History_Consume_T6_IDC);
	DDX_Control(pDX, MS_History_Consume_T7, MS_History_Consume_T7_IDC);
	DDX_Control(pDX, MS_History_Consume_T8, MS_History_Consume_T8_IDC);
	DDX_Control(pDX, MS_History_Consume_T9, MS_History_Consume_T9_IDC);
	DDX_Control(pDX, MS_History_Time_T, MS_History_Time_T_IDC);
	DDX_Control(pDX, MS_History_Time_T0, MS_History_Time_T0_IDC);
	DDX_Control(pDX, MS_History_Time_T1, MS_History_Time_T1_IDC);
	DDX_Control(pDX, MS_History_Time_T2, MS_History_Time_T2_IDC);
	DDX_Control(pDX, MS_History_Time_T3, MS_History_Time_T3_IDC);
	DDX_Control(pDX, MS_History_Time_T4, MS_History_Time_T4_IDC);
	DDX_Control(pDX, MS_History_Time_T5, MS_History_Time_T5_IDC);
	DDX_Control(pDX, MS_History_Time_T6, MS_History_Time_T6_IDC);
	DDX_Control(pDX, MS_History_Time_T7, MS_History_Time_T7_IDC);
	DDX_Control(pDX, MS_History_Time_T8, MS_History_Time_T8_IDC);
	DDX_Control(pDX, MS_History_Time_T9, MS_History_Time_T9_IDC);
	DDX_Control(pDX, MS_History_Delete_B0, MS_History_Delete_B0_IDC);
	DDX_Control(pDX, MS_History_Delete_B1, MS_History_Delete_B1_IDC);
	DDX_Control(pDX, MS_History_Delete_B2, MS_History_Delete_B2_IDC);
	DDX_Control(pDX, MS_History_Delete_B3, MS_History_Delete_B3_IDC);
	DDX_Control(pDX, MS_History_Delete_B4, MS_History_Delete_B4_IDC);
	DDX_Control(pDX, MS_History_Delete_B5, MS_History_Delete_B5_IDC);
	DDX_Control(pDX, MS_History_Delete_B6, MS_History_Delete_B6_IDC);
	DDX_Control(pDX, MS_History_Delete_B7, MS_History_Delete_B7_IDC);
	DDX_Control(pDX, MS_History_Delete_B8, MS_History_Delete_B8_IDC);
	DDX_Control(pDX, MS_History_Delete_B9, MS_History_Delete_B9_IDC);
	DDX_Control(pDX, MS_History_CR0, MS_History_CR0_IDC);
	DDX_Control(pDX, MS_History_CR1, MS_History_CR1_IDC);
	DDX_Control(pDX, MS_History_CR2, MS_History_CR2_IDC);
	DDX_Control(pDX, MS_History_CR3, MS_History_CR3_IDC);
	DDX_Control(pDX, MS_History_CR4, MS_History_CR4_IDC);
	DDX_Control(pDX, MS_History_CR5, MS_History_CR5_IDC);
	DDX_Control(pDX, MS_History_CR6, MS_History_CR6_IDC);
	DDX_Text(pDX, MS_History_Detail_T0, MS_History_Detail_T0_V);
	DDX_Text(pDX, MS_History_Detail_T1, MS_History_Detail_T1_V);
	DDX_Text(pDX, MS_History_Detail_T2, MS_History_Detail_T2_V);
	DDX_Text(pDX, MS_History_Detail_T3, MS_History_Detail_T3_V);
	DDX_Text(pDX, MS_History_Detail_T4, MS_History_Detail_T4_V);
	DDX_Text(pDX, MS_History_Detail_T5, MS_History_Detail_T5_V);
	DDX_Text(pDX, MS_History_Detail_T6, MS_History_Detail_T6_V);
	DDX_Text(pDX, MS_History_Detail_T7, MS_History_Detail_T7_V);
	DDX_Text(pDX, MS_History_Detail_T8, MS_History_Detail_T8_V);
	DDX_Text(pDX, MS_History_Detail_T9, MS_History_Detail_T9_V);
	DDX_Text(pDX, MS_History_Consume_T0, MS_History_Consume_T0_V);
	DDX_Text(pDX, MS_History_Consume_T1, MS_History_Consume_T1_V);
	DDX_Text(pDX, MS_History_Consume_T2, MS_History_Consume_T2_V);
	DDX_Text(pDX, MS_History_Consume_T3, MS_History_Consume_T3_V);
	DDX_Text(pDX, MS_History_Consume_T4, MS_History_Consume_T4_V);
	DDX_Text(pDX, MS_History_Consume_T5, MS_History_Consume_T5_V);
	DDX_Text(pDX, MS_History_Consume_T6, MS_History_Consume_T6_V);
	DDX_Text(pDX, MS_History_Consume_T7, MS_History_Consume_T7_V);
	DDX_Text(pDX, MS_History_Consume_T8, MS_History_Consume_T8_V);
	DDX_Text(pDX, MS_History_Consume_T9, MS_History_Consume_T9_V);
	DDX_Text(pDX, MS_History_Time_T0, MS_History_Time_T0_V);
	DDX_Text(pDX, MS_History_Time_T1, MS_History_Time_T1_V);
	DDX_Text(pDX, MS_History_Time_T2, MS_History_Time_T2_V);
	DDX_Text(pDX, MS_History_Time_T3, MS_History_Time_T3_V);
	DDX_Text(pDX, MS_History_Time_T4, MS_History_Time_T4_V);
	DDX_Text(pDX, MS_History_Time_T5, MS_History_Time_T5_V);
	DDX_Text(pDX, MS_History_Time_T6, MS_History_Time_T6_V);
	DDX_Text(pDX, MS_History_Time_T7, MS_History_Time_T7_V);
	DDX_Text(pDX, MS_History_Time_T8, MS_History_Time_T8_V);
	DDX_Text(pDX, MS_History_Time_T9, MS_History_Time_T9_V);

	DDX_Control (pDX, MS_Search_Lookup_ET, MS_Search_Lookup_ET_IDC);
	DDX_Control (pDX, MS_Search_Lookup_B, MS_Search_Lookup_B_IDC);
	DDX_Control (pDX, LS_Tip_T, LS_Tip_T_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P00, MS_Search_Lookup_P00_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P01, MS_Search_Lookup_P01_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P02, MS_Search_Lookup_P02_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P03, MS_Search_Lookup_P03_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P04, MS_Search_Lookup_P04_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P10, MS_Search_Lookup_P10_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P11, MS_Search_Lookup_P11_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P12, MS_Search_Lookup_P12_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P13, MS_Search_Lookup_P13_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P14, MS_Search_Lookup_P14_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P20, MS_Search_Lookup_P20_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P21, MS_Search_Lookup_P21_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P22, MS_Search_Lookup_P22_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P23, MS_Search_Lookup_P23_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P24, MS_Search_Lookup_P23_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P30, MS_Search_Lookup_P30_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P31, MS_Search_Lookup_P31_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P32, MS_Search_Lookup_P32_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P33, MS_Search_Lookup_P33_IDC);
	DDX_Control (pDX, MS_Search_Lookup_P34, MS_Search_Lookup_P34_IDC);

	DDX_Control (pDX, MS_Search_Lookup_T00, MS_Search_Lookup_T00_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T01, MS_Search_Lookup_T01_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T02, MS_Search_Lookup_T02_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T03, MS_Search_Lookup_T03_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T04, MS_Search_Lookup_T04_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T10, MS_Search_Lookup_T10_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T11, MS_Search_Lookup_T11_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T12, MS_Search_Lookup_T12_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T13, MS_Search_Lookup_T13_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T14, MS_Search_Lookup_T14_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T20, MS_Search_Lookup_T20_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T21, MS_Search_Lookup_T21_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T22, MS_Search_Lookup_T22_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T23, MS_Search_Lookup_T23_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T24, MS_Search_Lookup_T23_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T30, MS_Search_Lookup_T30_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T31, MS_Search_Lookup_T31_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T32, MS_Search_Lookup_T32_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T33, MS_Search_Lookup_T33_IDC);
	DDX_Control (pDX, MS_Search_Lookup_T34, MS_Search_Lookup_T34_IDC);

	DDX_Text (pDX, MS_Search_Lookup_ET, MS_Search_Lookup_ET_V);
	DDX_Text (pDX, LS_Tip_T, LS_Tip_T_V);
	DDX_Text (pDX, MS_Search_Lookup_T00, MS_Search_Lookup_T00_V);
	DDX_Text (pDX, MS_Search_Lookup_T01, MS_Search_Lookup_T01_V);
	DDX_Text (pDX, MS_Search_Lookup_T02, MS_Search_Lookup_T02_V);
	DDX_Text (pDX, MS_Search_Lookup_T03, MS_Search_Lookup_T03_V);
	DDX_Text (pDX, MS_Search_Lookup_T04, MS_Search_Lookup_T04_V);
	DDX_Text (pDX, MS_Search_Lookup_T10, MS_Search_Lookup_T10_V);
	DDX_Text (pDX, MS_Search_Lookup_T11, MS_Search_Lookup_T11_V);
	DDX_Text (pDX, MS_Search_Lookup_T12, MS_Search_Lookup_T12_V);
	DDX_Text (pDX, MS_Search_Lookup_T13, MS_Search_Lookup_T13_V);
	DDX_Text (pDX, MS_Search_Lookup_T14, MS_Search_Lookup_T14_V);
	DDX_Text (pDX, MS_Search_Lookup_T20, MS_Search_Lookup_T20_V);
	DDX_Text (pDX, MS_Search_Lookup_T21, MS_Search_Lookup_T21_V);
	DDX_Text (pDX, MS_Search_Lookup_T22, MS_Search_Lookup_T22_V);
	DDX_Text (pDX, MS_Search_Lookup_T23, MS_Search_Lookup_T23_V);
	DDX_Text (pDX, MS_Search_Lookup_T24, MS_Search_Lookup_T23_V);
	DDX_Text (pDX, MS_Search_Lookup_T30, MS_Search_Lookup_T30_V);
	DDX_Text (pDX, MS_Search_Lookup_T31, MS_Search_Lookup_T31_V);
	DDX_Text (pDX, MS_Search_Lookup_T32, MS_Search_Lookup_T32_V);
	DDX_Text (pDX, MS_Search_Lookup_T33, MS_Search_Lookup_T33_V);
	DDX_Text (pDX, MS_Search_Lookup_T34, MS_Search_Lookup_T34_V);
	//管理员界面
	DDX_Control (pDX, Admin_Order_B, Admin_Order_B_IDC);
	DDX_Control (pDX, Admin_UserManage_B, Admin_UserManage_B_IDC);
	DDX_Control (pDX, Admin_Setting_B, Admin_Setting_B_IDC);
	//全局食谱界面
	DDX_Control(pDX, Admin_Order_UpData_T, Admin_Order_UpData_T_IDC);
	DDX_Control(pDX, Admin_Order_UpDataMenuname_ET, Admin_Order_UpDataMenuname_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataInformation_ET, Admin_Order_UpDataInformation_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataPerfer_ET, Admin_Order_UpDataPerfer_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataMenuPrice_ET, Admin_Order_UpDataMenuPrice_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataMenuSpecs_ET, Admin_Order_UpDataMenuSpecs_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataMenuImagePath_ET, Admin_Order_UpDataMenuImagePath_ET_IDC);
	DDX_Control(pDX, Admin_Order_UpDataFile_B, Admin_Order_UpDataFile_B_IDC);
	DDX_Control(pDX, Admin_Order_UpData_B, Admin_Order_UpData_B_IDC);
	DDX_Control(pDX, Admin_Order_DeleteOrder_B, Admin_Order_DeleteOrder_B_IDC);

	DDX_Control(pDX, Admin_Order_Label_B0, Admin_Order_Label_B0_IDC);
	DDX_Control(pDX, Admin_Order_Label_B1, Admin_Order_Label_B1_IDC);
	DDX_Control(pDX, Admin_Order_Label_B2, Admin_Order_Label_B2_IDC);
	DDX_Control(pDX, Admin_Order_Label_B3, Admin_Order_Label_B3_IDC);
	DDX_Control(pDX, Admin_Order_Label_B4, Admin_Order_Label_B4_IDC);
	DDX_Control(pDX, Admin_Order_Label_B5, Admin_Order_Label_B5_IDC);
	DDX_Control(pDX, Admin_Order_Label_B6, Admin_Order_Label_B6_IDC);
	DDX_Control(pDX, Admin_Order_Label_B7, Admin_Order_Label_B7_IDC);
	DDX_Control(pDX, Admin_Order_Label_B8, Admin_Order_Label_B8_IDC);
	DDX_Control(pDX, Admin_Order_Label_B9, Admin_Order_Label_B9_IDC);

	DDX_Control(pDX, Admin_Order_CutRule_CR, Admin_Order_CutRule_CR_IDC);

	DDX_Control(pDX, Admin_Order_MenuImage_B00, Admin_Order_MenuImage_B00_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B01, Admin_Order_MenuImage_B01_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B02, Admin_Order_MenuImage_B02_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B03, Admin_Order_MenuImage_B03_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B10, Admin_Order_MenuImage_B10_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B11, Admin_Order_MenuImage_B11_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B12, Admin_Order_MenuImage_B12_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B13, Admin_Order_MenuImage_B13_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B20, Admin_Order_MenuImage_B20_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B21, Admin_Order_MenuImage_B21_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B22, Admin_Order_MenuImage_B22_IDC);
	DDX_Control(pDX, Admin_Order_MenuImage_B23, Admin_Order_MenuImage_B23_IDC);

	DDX_Control(pDX, Admin_Order_MenuImagePitch_P00, Admin_Order_MenuImagePitch_P00_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P01, Admin_Order_MenuImagePitch_P01_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P02, Admin_Order_MenuImagePitch_P02_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P03, Admin_Order_MenuImagePitch_P03_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P10, Admin_Order_MenuImagePitch_P10_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P11, Admin_Order_MenuImagePitch_P11_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P12, Admin_Order_MenuImagePitch_P12_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P13, Admin_Order_MenuImagePitch_P13_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P20, Admin_Order_MenuImagePitch_P20_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P21, Admin_Order_MenuImagePitch_P21_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P22, Admin_Order_MenuImagePitch_P22_IDC);
	DDX_Control(pDX, Admin_Order_MenuImagePitch_P23, Admin_Order_MenuImagePitch_P23_IDC);

	DDX_Control(pDX, Admin_Order_MenuName_T00, Admin_Order_MenuName_T00_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T01, Admin_Order_MenuName_T01_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T02, Admin_Order_MenuName_T02_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T03, Admin_Order_MenuName_T03_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T10, Admin_Order_MenuName_T10_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T11, Admin_Order_MenuName_T11_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T12, Admin_Order_MenuName_T12_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T13, Admin_Order_MenuName_T13_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T20, Admin_Order_MenuName_T20_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T21, Admin_Order_MenuName_T21_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T22, Admin_Order_MenuName_T22_IDC);
	DDX_Control(pDX, Admin_Order_MenuName_T23, Admin_Order_MenuName_T23_IDC);

	DDX_Control(pDX, Admin_Order_MenuPrice_T00, Admin_Order_MenuPrice_T00_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T01, Admin_Order_MenuPrice_T01_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T02, Admin_Order_MenuPrice_T02_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T03, Admin_Order_MenuPrice_T03_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T10, Admin_Order_MenuPrice_T10_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T11, Admin_Order_MenuPrice_T11_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T12, Admin_Order_MenuPrice_T12_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T13, Admin_Order_MenuPrice_T13_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T20, Admin_Order_MenuPrice_T20_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T21, Admin_Order_MenuPrice_T21_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T22, Admin_Order_MenuPrice_T22_IDC);
	DDX_Control(pDX, Admin_Order_MenuPrice_T23, Admin_Order_MenuPrice_T23_IDC);

	DDX_Text(pDX, Admin_Order_MenuName_T00, Admin_Order_MenuName_T00_V);
	DDX_Text(pDX, Admin_Order_MenuName_T01, Admin_Order_MenuName_T01_V);
	DDX_Text(pDX, Admin_Order_MenuName_T02, Admin_Order_MenuName_T02_V);
	DDX_Text(pDX, Admin_Order_MenuName_T03, Admin_Order_MenuName_T03_V);
	DDX_Text(pDX, Admin_Order_MenuName_T10, Admin_Order_MenuName_T10_V);
	DDX_Text(pDX, Admin_Order_MenuName_T11, Admin_Order_MenuName_T11_V);
	DDX_Text(pDX, Admin_Order_MenuName_T12, Admin_Order_MenuName_T12_V);
	DDX_Text(pDX, Admin_Order_MenuName_T13, Admin_Order_MenuName_T13_V);
	DDX_Text(pDX, Admin_Order_MenuName_T20, Admin_Order_MenuName_T20_V);
	DDX_Text(pDX, Admin_Order_MenuName_T21, Admin_Order_MenuName_T21_V);
	DDX_Text(pDX, Admin_Order_MenuName_T22, Admin_Order_MenuName_T22_V);
	DDX_Text(pDX, Admin_Order_MenuName_T23, Admin_Order_MenuName_T23_V);

	DDX_Text(pDX, Admin_Order_MenuPrice_T00, Admin_Order_MenuPrice_T00_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T01, Admin_Order_MenuPrice_T01_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T02, Admin_Order_MenuPrice_T02_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T03, Admin_Order_MenuPrice_T03_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T10, Admin_Order_MenuPrice_T10_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T11, Admin_Order_MenuPrice_T11_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T12, Admin_Order_MenuPrice_T12_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T13, Admin_Order_MenuPrice_T13_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T20, Admin_Order_MenuPrice_T20_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T21, Admin_Order_MenuPrice_T21_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T22, Admin_Order_MenuPrice_T22_V);
	DDX_Text(pDX, Admin_Order_MenuPrice_T23, Admin_Order_MenuPrice_T23_V);
	DDX_Text(pDX, Admin_Order_UpDataMenuname_ET, Admin_Order_UpDataMenuname_ET_V);
	DDX_Text(pDX, Admin_Order_UpDataInformation_ET, Admin_Order_UpDataInformation_ET_V);
	DDX_Text(pDX, Admin_Order_UpDataPerfer_ET, Admin_Order_UpDataPerfer_ET_V);
	DDX_Text(pDX, Admin_Order_UpDataMenuPrice_ET, Admin_Order_UpDataMenuPrice_ET_V);
	DDX_Text(pDX, Admin_Order_UpDataMenuSpecs_ET, Admin_Order_UpDataMenuSpecs_ET_V);
	DDX_Text(pDX, Admin_Order_UpDataMenuImagePath_ET, Admin_Order_UpDataMenuImagePath_ET_V);
	/*****************************************
	*			用户管理界面控件注册
	*****************************************/
	DDX_Control(pDX, Admin_UserManage_T, Admin_UserManage_T_IDC);
	DDX_Control(pDX, Admin_UserManage_Save_B, Admin_UserManage_Save_B_IDC);	

	DDX_Control(pDX, Admin_UserManage_Delete_B0, Admin_UserManage_Delete_B0_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B1, Admin_UserManage_Delete_B1_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B2, Admin_UserManage_Delete_B2_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B3, Admin_UserManage_Delete_B3_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B4, Admin_UserManage_Delete_B4_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B5, Admin_UserManage_Delete_B5_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B6, Admin_UserManage_Delete_B6_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B7, Admin_UserManage_Delete_B7_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B8, Admin_UserManage_Delete_B8_IDC);
	DDX_Control(pDX, Admin_UserManage_Delete_B9, Admin_UserManage_Delete_B9_IDC);

	DDX_Control(pDX, Admin_UserManage_Username_T0, Admin_UserManage_Username_T0_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T1, Admin_UserManage_Username_T1_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T2, Admin_UserManage_Username_T2_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T3, Admin_UserManage_Username_T3_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T4, Admin_UserManage_Username_T4_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T5, Admin_UserManage_Username_T5_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T6, Admin_UserManage_Username_T6_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T7, Admin_UserManage_Username_T7_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T8, Admin_UserManage_Username_T8_IDC);
	DDX_Control(pDX, Admin_UserManage_Username_T9, Admin_UserManage_Username_T9_IDC);

	DDX_Control(pDX, Admin_UserManage_Password_ET0, Admin_UserManage_Password_ET0_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET1, Admin_UserManage_Password_ET1_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET2, Admin_UserManage_Password_ET2_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET3, Admin_UserManage_Password_ET3_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET4, Admin_UserManage_Password_ET4_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET5, Admin_UserManage_Password_ET5_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET6, Admin_UserManage_Password_ET6_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET7, Admin_UserManage_Password_ET7_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET8, Admin_UserManage_Password_ET8_IDC);
	DDX_Control(pDX, Admin_UserManage_Password_ET9, Admin_UserManage_Password_ET9_IDC);

	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET0, Admin_UserManage_PhoneNumber_ET0_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET1, Admin_UserManage_PhoneNumber_ET1_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET2, Admin_UserManage_PhoneNumber_ET2_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET3, Admin_UserManage_PhoneNumber_ET3_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET4, Admin_UserManage_PhoneNumber_ET4_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET5, Admin_UserManage_PhoneNumber_ET5_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET6, Admin_UserManage_PhoneNumber_ET6_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET7, Admin_UserManage_PhoneNumber_ET7_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET8, Admin_UserManage_PhoneNumber_ET8_IDC);
	DDX_Control(pDX, Admin_UserManage_PhoneNumber_ET9, Admin_UserManage_PhoneNumber_ET9_IDC);

	DDX_Control(pDX, Admin_UserManage_Sex_ET0, Admin_UserManage_Sex_ET0_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET1, Admin_UserManage_Sex_ET1_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET2, Admin_UserManage_Sex_ET2_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET3, Admin_UserManage_Sex_ET3_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET4, Admin_UserManage_Sex_ET4_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET5, Admin_UserManage_Sex_ET5_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET6, Admin_UserManage_Sex_ET6_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET7, Admin_UserManage_Sex_ET7_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET8, Admin_UserManage_Sex_ET8_IDC);
	DDX_Control(pDX, Admin_UserManage_Sex_ET9, Admin_UserManage_Sex_ET9_IDC);

	DDX_Control(pDX, Admin_UserManage_Perfer_ET0, Admin_UserManage_Perfer_ET0_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET1, Admin_UserManage_Perfer_ET1_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET2, Admin_UserManage_Perfer_ET2_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET3, Admin_UserManage_Perfer_ET3_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET4, Admin_UserManage_Perfer_ET4_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET5, Admin_UserManage_Perfer_ET5_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET6, Admin_UserManage_Perfer_ET6_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET7, Admin_UserManage_Perfer_ET7_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET8, Admin_UserManage_Perfer_ET8_IDC);
	DDX_Control(pDX, Admin_UserManage_Perfer_ET9, Admin_UserManage_Perfer_ET9_IDC);

	DDX_Text(pDX, Admin_UserManage_Username_T0, Admin_UserManage_Username_T0_V);
	DDX_Text(pDX, Admin_UserManage_Username_T1, Admin_UserManage_Username_T1_V);
	DDX_Text(pDX, Admin_UserManage_Username_T2, Admin_UserManage_Username_T2_V);
	DDX_Text(pDX, Admin_UserManage_Username_T3, Admin_UserManage_Username_T3_V);
	DDX_Text(pDX, Admin_UserManage_Username_T4, Admin_UserManage_Username_T4_V);
	DDX_Text(pDX, Admin_UserManage_Username_T5, Admin_UserManage_Username_T5_V);
	DDX_Text(pDX, Admin_UserManage_Username_T6, Admin_UserManage_Username_T6_V);
	DDX_Text(pDX, Admin_UserManage_Username_T7, Admin_UserManage_Username_T7_V);
	DDX_Text(pDX, Admin_UserManage_Username_T8, Admin_UserManage_Username_T8_V);
	DDX_Text(pDX, Admin_UserManage_Username_T9, Admin_UserManage_Username_T9_V);

	DDX_Text(pDX, Admin_UserManage_Password_ET0, Admin_UserManage_Password_ET0_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET1, Admin_UserManage_Password_ET1_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET2, Admin_UserManage_Password_ET2_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET3, Admin_UserManage_Password_ET3_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET4, Admin_UserManage_Password_ET4_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET5, Admin_UserManage_Password_ET5_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET6, Admin_UserManage_Password_ET6_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET7, Admin_UserManage_Password_ET7_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET8, Admin_UserManage_Password_ET8_V);
	DDX_Text(pDX, Admin_UserManage_Password_ET9, Admin_UserManage_Password_ET9_V);

	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET0, Admin_UserManage_PhoneNumber_ET0_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET1, Admin_UserManage_PhoneNumber_ET1_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET2, Admin_UserManage_PhoneNumber_ET2_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET3, Admin_UserManage_PhoneNumber_ET3_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET4, Admin_UserManage_PhoneNumber_ET4_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET5, Admin_UserManage_PhoneNumber_ET5_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET6, Admin_UserManage_PhoneNumber_ET6_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET7, Admin_UserManage_PhoneNumber_ET7_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET8, Admin_UserManage_PhoneNumber_ET8_V);
	DDX_Text(pDX, Admin_UserManage_PhoneNumber_ET9, Admin_UserManage_PhoneNumber_ET9_V);

	DDX_Text(pDX, Admin_UserManage_Sex_ET0, Admin_UserManage_Sex_ET0_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET1, Admin_UserManage_Sex_ET1_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET2, Admin_UserManage_Sex_ET2_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET3, Admin_UserManage_Sex_ET3_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET4, Admin_UserManage_Sex_ET4_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET5, Admin_UserManage_Sex_ET5_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET6, Admin_UserManage_Sex_ET6_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET7, Admin_UserManage_Sex_ET7_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET8, Admin_UserManage_Sex_ET8_V);
	DDX_Text(pDX, Admin_UserManage_Sex_ET9, Admin_UserManage_Sex_ET9_V);

	DDX_Text(pDX, Admin_UserManage_Perfer_ET0, Admin_UserManage_Perfer_ET0_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET1, Admin_UserManage_Perfer_ET1_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET2, Admin_UserManage_Perfer_ET2_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET3, Admin_UserManage_Perfer_ET3_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET4, Admin_UserManage_Perfer_ET4_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET5, Admin_UserManage_Perfer_ET5_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET6, Admin_UserManage_Perfer_ET6_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET7, Admin_UserManage_Perfer_ET7_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET8, Admin_UserManage_Perfer_ET8_V);
	DDX_Text(pDX, Admin_UserManage_Perfer_ET9, Admin_UserManage_Perfer_ET9_V);

	//全局设置
	DDX_Control(pDX, Admin_Setting_Search_T, Admin_Setting_Search_T_IDC);
	DDX_Control(pDX, Admin_Setting_Search_CK, Admin_Setting_Search_CK_IDC);
	DDX_Control(pDX, Admin_Setting_Histroy_T, Admin_Setting_Histroy_T_IDC);
	DDX_Control(pDX, Admin_Setting_Histroy_CK, Admin_Setting_Histroy_CK_IDC);
	DDX_Control(pDX, Admin_Setting_Order_T, Admin_Setting_Order_T_IDC);
	DDX_Control(pDX, Admin_Setting_Order_CK, Admin_Setting_Order_CK_IDC);
	DDX_Control(pDX, Admin_Setting_AdminLogin_T, Admin_Setting_AdminLogin_T_IDC);
	DDX_Control(pDX, Admin_Setting_AdminLogin_CK, Admin_Setting_AdminLogin_CK_IDC);
	DDX_Control(pDX, Admin_Setting_Register_T, Admin_Setting_Register_T_IDC);
	DDX_Control(pDX, Admin_Setting_Register_CK, Admin_Setting_Register_CK_IDC);
	DDX_Control(pDX, Admin_Setting_Save_B, Admin_Setting_Save_B_IDC);
	DDX_Control(pDX, Admin_Setting_LoginOut_B, Admin_Setting_LoginOut_B_IDC);
	DDX_Control(pDX, Admin_Setting_CR, Admin_Setting_CR_IDC);

	DDX_Check(pDX, Admin_Setting_Search_CK, Admin_Setting_Search_CK_V);
	DDX_Check(pDX, Admin_Setting_Histroy_CK, Admin_Setting_Histroy_CK_V);
	DDX_Check(pDX, Admin_Setting_Order_CK, Admin_Setting_Order_CK_V);
	DDX_Check(pDX, Admin_Setting_AdminLogin_CK, Admin_Setting_AdminLogin_CK_V);
	DDX_Check(pDX, Admin_Setting_Register_CK, Admin_Setting_Register_CK_V);
}

BEGIN_MESSAGE_MAP(CLSMenuSystemDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(Login_Reg_B, &CLSMenuSystemDlg::Login_Reg_B_CLI)
	ON_BN_CLICKED(Reg_RegisterUser_B, &CLSMenuSystemDlg::Reg_RegisterUser_B_CLI)
	ON_BN_CLICKED(Login_LoginUser_B, &CLSMenuSystemDlg::Login_LoginUser_B_CLI)
	ON_BN_CLICKED(Login_Reset_B, &CLSMenuSystemDlg::Login_Reset_B_CLI)
	ON_BN_CLICKED(MS_Seting_B, &CLSMenuSystemDlg::MS_Seting_B_CLI)
	ON_BN_CLICKED(MS_Seting_SaveInfo_B, &CLSMenuSystemDlg::MS_Seting_SaveInfo_B_CLI)
	ON_BN_CLICKED(MS_Seting_Logout_B, &CLSMenuSystemDlg::MS_Seting_Logout_B_CLI)
	ON_BN_CLICKED(Reg_Reset_B, &CLSMenuSystemDlg::Reg_Reset_B_CLI)
	ON_BN_CLICKED(MS_Order_B, &CLSMenuSystemDlg::MS_Order_B_CLI)
	ON_BN_CLICKED(MS_Order_Label_B0, &CLSMenuSystemDlg::MS_Order_Label_B0_CLI)
	ON_BN_CLICKED(MS_Order_Label_B1, &CLSMenuSystemDlg::MS_Order_Label_B1_CLI)
	ON_BN_CLICKED(MS_Order_Label_B2, &CLSMenuSystemDlg::MS_Order_Label_B2_CLI)
	ON_BN_CLICKED(MS_Order_Label_B3, &CLSMenuSystemDlg::MS_Order_Label_B3_CLI)
	ON_BN_CLICKED(MS_Order_Label_B4, &CLSMenuSystemDlg::MS_Order_Label_B4_CLI)
	ON_BN_CLICKED(MS_Order_Label_B5, &CLSMenuSystemDlg::MS_Order_Label_B5_CLI)
	ON_BN_CLICKED(MS_Order_Label_B6, &CLSMenuSystemDlg::MS_Order_Label_B6_CLI)
	ON_BN_CLICKED(MS_Order_Label_B7, &CLSMenuSystemDlg::MS_Order_Label_B7_CLI)
	ON_BN_CLICKED(MS_Order_Label_B8, &CLSMenuSystemDlg::MS_Order_Label_B8_CLI)
	ON_BN_CLICKED(MS_Order_Label_B9, &CLSMenuSystemDlg::MS_Order_Label_B9_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B00, &CLSMenuSystemDlg::MS_Order_MenuImage_B00_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B01, &CLSMenuSystemDlg::MS_Order_MenuImage_B01_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B02, &CLSMenuSystemDlg::MS_Order_MenuImage_B02_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B03, &CLSMenuSystemDlg::MS_Order_MenuImage_B03_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B10, &CLSMenuSystemDlg::MS_Order_MenuImage_B10_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B11, &CLSMenuSystemDlg::MS_Order_MenuImage_B11_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B12, &CLSMenuSystemDlg::MS_Order_MenuImage_B12_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B13, &CLSMenuSystemDlg::MS_Order_MenuImage_B13_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B20, &CLSMenuSystemDlg::MS_Order_MenuImage_B20_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B21, &CLSMenuSystemDlg::MS_Order_MenuImage_B21_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B22, &CLSMenuSystemDlg::MS_Order_MenuImage_B22_CLI)
	ON_BN_CLICKED(MS_Order_MenuImage_B23, &CLSMenuSystemDlg::MS_Order_MenuImage_B23_CLI)
	ON_BN_CLICKED(MS_Order_Shopping_B, &CLSMenuSystemDlg::MS_Order_Shopping_B_CLI)
	ON_BN_CLICKED(MS_Order_AddCart_B, &CLSMenuSystemDlg::MS_Order_AddCart_B_CLI)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET0, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET0_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET1, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET1_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET2, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET2_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET3, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET3_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET4, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET4_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET5, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET5_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET6, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET6_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET7, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET7_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET8, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET8_EKF)
	ON_EN_KILLFOCUS(MS_Order_ShoppingAmount_ET9, &CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET9_EKF)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B0, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B0_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B1, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B1_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B2, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B2_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B3, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B3_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B4, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B4_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B5, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B5_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B6, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B6_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B7, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B7_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B8, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B8_CLI)
	ON_BN_CLICKED(MS_Order_ShoppingDelete_B9, &CLSMenuSystemDlg::MS_Order_ShoppingDelete_B9_CLI)
	ON_BN_CLICKED(MS_Order_ResetCart_B, &CLSMenuSystemDlg::MS_Order_ResetCart_B_CLI)
	ON_BN_CLICKED(MS_Order_Pay_B, &CLSMenuSystemDlg::MS_Order_Pay_B_CLI)
	ON_BN_CLICKED(MS_History_B, &CLSMenuSystemDlg::MS_History_B_CLI)
	ON_BN_CLICKED(MS_History_Delete_B0, &CLSMenuSystemDlg::MS_History_Delete_B0_CLI)
	ON_BN_CLICKED(MS_History_Delete_B1, &CLSMenuSystemDlg::MS_History_Delete_B1_CLI)
	ON_BN_CLICKED(MS_History_Delete_B2, &CLSMenuSystemDlg::MS_History_Delete_B2_CLI)
	ON_BN_CLICKED(MS_History_Delete_B3, &CLSMenuSystemDlg::MS_History_Delete_B3_CLI)
	ON_BN_CLICKED(MS_History_Delete_B4, &CLSMenuSystemDlg::MS_History_Delete_B4_CLI)
	ON_BN_CLICKED(MS_History_Delete_B5, &CLSMenuSystemDlg::MS_History_Delete_B5_CLI)
	ON_BN_CLICKED(MS_History_Delete_B6, &CLSMenuSystemDlg::MS_History_Delete_B6_CLI)
	ON_BN_CLICKED(MS_History_Delete_B7, &CLSMenuSystemDlg::MS_History_Delete_B7_CLI)
	ON_BN_CLICKED(MS_History_Delete_B8, &CLSMenuSystemDlg::MS_History_Delete_B8_CLI)
	ON_BN_CLICKED(MS_History_Delete_B9, &CLSMenuSystemDlg::MS_History_Delete_B9_CLI)

	ON_BN_CLICKED (MS_Search_B, &CLSMenuSystemDlg::MS_Search_B_CLI)
	ON_BN_CLICKED(MS_Search_Lookup_B, &CLSMenuSystemDlg::MS_Search_Lookup_B_CLI)

	ON_BN_CLICKED(Admin_Order_B, &CLSMenuSystemDlg::Admin_Order_B_CLI)
	ON_BN_CLICKED(Admin_UserManage_B, &CLSMenuSystemDlg::Admin_UserManage_B_CLI)
	ON_BN_CLICKED(Admin_Setting_B, &CLSMenuSystemDlg::Admin_Setting_B_CLI)

	ON_BN_CLICKED(Admin_Order_Label_B0, &CLSMenuSystemDlg::Admin_Order_Label_B0_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B1, &CLSMenuSystemDlg::Admin_Order_Label_B1_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B2, &CLSMenuSystemDlg::Admin_Order_Label_B2_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B3, &CLSMenuSystemDlg::Admin_Order_Label_B3_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B4, &CLSMenuSystemDlg::Admin_Order_Label_B4_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B5, &CLSMenuSystemDlg::Admin_Order_Label_B5_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B6, &CLSMenuSystemDlg::Admin_Order_Label_B6_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B7, &CLSMenuSystemDlg::Admin_Order_Label_B7_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B8, &CLSMenuSystemDlg::Admin_Order_Label_B8_CLI)
	ON_BN_CLICKED(Admin_Order_Label_B9, &CLSMenuSystemDlg::Admin_Order_Label_B9_CLI)
	
	ON_BN_CLICKED(Admin_Order_MenuImage_B00, &CLSMenuSystemDlg::Admin_Order_MenuImage_B00_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B01, &CLSMenuSystemDlg::Admin_Order_MenuImage_B01_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B02, &CLSMenuSystemDlg::Admin_Order_MenuImage_B02_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B03, &CLSMenuSystemDlg::Admin_Order_MenuImage_B03_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B10, &CLSMenuSystemDlg::Admin_Order_MenuImage_B10_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B11, &CLSMenuSystemDlg::Admin_Order_MenuImage_B11_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B12, &CLSMenuSystemDlg::Admin_Order_MenuImage_B12_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B13, &CLSMenuSystemDlg::Admin_Order_MenuImage_B13_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B20, &CLSMenuSystemDlg::Admin_Order_MenuImage_B20_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B21, &CLSMenuSystemDlg::Admin_Order_MenuImage_B21_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B22, &CLSMenuSystemDlg::Admin_Order_MenuImage_B22_CLI)
	ON_BN_CLICKED(Admin_Order_MenuImage_B23, &CLSMenuSystemDlg::Admin_Order_MenuImage_B23_CLI)
	ON_BN_CLICKED(Admin_Order_DeleteOrder_B, &CLSMenuSystemDlg::Admin_Order_DeleteOrder_B_CLI)
	ON_BN_CLICKED(Admin_Order_UpDataFile_B, &CLSMenuSystemDlg::Admin_Order_UpDataFile_B_CLI)
	ON_BN_CLICKED(Admin_Order_UpData_B, &CLSMenuSystemDlg::Admin_Order_UpData_B_CLI)

	ON_BN_CLICKED(Admin_UserManage_Save_B, &CLSMenuSystemDlg::Admin_UserManage_Save_B_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B0, &CLSMenuSystemDlg::Admin_UserManage_Delete_B0_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B1, &CLSMenuSystemDlg::Admin_UserManage_Delete_B1_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B2, &CLSMenuSystemDlg::Admin_UserManage_Delete_B2_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B3, &CLSMenuSystemDlg::Admin_UserManage_Delete_B3_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B4, &CLSMenuSystemDlg::Admin_UserManage_Delete_B4_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B5, &CLSMenuSystemDlg::Admin_UserManage_Delete_B5_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B6, &CLSMenuSystemDlg::Admin_UserManage_Delete_B6_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B7, &CLSMenuSystemDlg::Admin_UserManage_Delete_B7_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B8, &CLSMenuSystemDlg::Admin_UserManage_Delete_B8_CLI)
	ON_BN_CLICKED(Admin_UserManage_Delete_B9, &CLSMenuSystemDlg::Admin_UserManage_Delete_B9_CLI)

	ON_BN_CLICKED(Admin_Setting_Save_B, &CLSMenuSystemDlg::Admin_Setting_Save_B_CLI)
	ON_BN_CLICKED(Admin_Setting_LoginOut_B, &CLSMenuSystemDlg::Admin_Setting_LoginOut_B_CLI)
		END_MESSAGE_MAP()

// CLSMenuSystemDlg 消息处理程序

BOOL CLSMenuSystemDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	
	//*****************************************************************************************
	//控件的提示信息
	Ttc.Create(this); //必需
	Ttc.EnableToolTips(true); //设置是否启用提示 
	Ttc.SetDelayTime(0); //设置延迟，如果为0则不等待 
	Ttc.SetTipTextColor(RGB(0, 0, 255)); //设置提示文本的颜色 
	Ttc.SetTipBkColor(RGB(255, 255, 255)); //设置提示框的背景颜色 
	Ttc.SetMaxTipWidth(600);//设置提示文本框的最大宽度
	Ttc.Activate(TRUE); //设置是否启用提示 

	//链接数据库
	//初始化指针
	pMyConnect = NULL;
	HRESULT hr;
	hr = CoInitialize(NULL);
	hr = pMyConnect.CreateInstance(__uuidof(Connection));
	if (FAILED(hr))
	{
		AfxMessageBox(TEXT("open fail"));
		return FALSE;
	}
	//初始化连接字符串
	_bstr_t strConnect = "Driver={sql server};server=127.0.0.1;uid=sa;pwd=ange0608;database=LS_MenuSystem;";
	//执行连接
	try
	{
		// 调用Open方法
		pMyConnect->Open(strConnect, "", "", NULL);
	}
	catch (_com_error& e) //连接异常
	{
		MessageBox(e.Description());
	}

	//开发者选项
	
	MS_Sql_CS = TEXT("select Admin_Setting_Search from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Search_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Search")->Value;
	Admin_Setting_Search_CS.TrimRight();
	Search_Setting = _ttoi(Admin_Setting_Search_CS);
	pRecordset.Release();//释放数据库操作集指针

	MS_Sql_CS = TEXT("select Admin_Setting_Histroy from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Histroy_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Histroy")->Value;
	Admin_Setting_Histroy_CS.TrimRight();
	Histroy_Setting = _ttoi(Admin_Setting_Histroy_CS);
	//MessageBox(Admin_Setting_Histroy_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_Order from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Order_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Order")->Value;
	Admin_Setting_Order_CS.TrimRight();
	Order_Setting = _ttoi(Admin_Setting_Order_CS);
	//MessageBox(Admin_Setting_Order_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_AdminLogin from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_AdminLogin_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_AdminLogin")->Value;
	Admin_Setting_AdminLogin_CS.TrimRight();
	AdminLogin_Setting = _ttoi(Admin_Setting_AdminLogin_CS);
	//MessageBox(Admin_Setting_AdminLogin_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_Register from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Register_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Register")->Value;
	Admin_Setting_Register_CS.TrimRight();
	Register_Setting = _ttoi(Admin_Setting_Register_CS);
	//MessageBox(Admin_Setting_Histroy_CS);
	pRecordset.Release();

	//*****************************************************************************************

	//登录界面控件绘制环境
	Login_LoginUser_B_IDC.GetWindowRect(Rect);
	Login_LoginUser_B_IDC.SetBitmap(HBMP(TEXT("./image/Login_LoginUser_B.bmp"), Rect.Width(), Rect.Height()));
	Login_Reset_B_IDC.GetWindowRect(Rect);
	Login_Reset_B_IDC.SetBitmap(HBMP(TEXT("./image/Login_Reset_B.bmp"), Rect.Width(), Rect.Height()));
	Login_UserDefault_P_IDC.GetWindowRect(Rect);
	Login_UserDefault_P_IDC.SetBitmap(HBMP(TEXT("./image/Login_UserDefault_P.bmp"), Rect.Width(), Rect.Height()));
	MS_BP_IDC.GetWindowRect(Rect);
	MS_BP_IDC.SetBitmap(HBMP(TEXT("./image/6.bmp"), Rect.Width(), Rect.Height()));

	//登录界面的提示信息
	Ttc.AddTool(GetDlgItem(Login_Reg_B), TEXT("点击切换登录与注册"));

	//注册界面控件绘制环境
	Reg_Reset_B_IDC.GetWindowRect(Rect);
	Reg_Reset_B_IDC.SetBitmap(HBMP(TEXT("./image/Reg_Reset_B.bmp"), Rect.Width(), Rect.Height()));
	Reg_RegisterUser_B_IDC.GetWindowRect(Rect);//获取窗体的大小
	Reg_RegisterUser_B_IDC.SetBitmap(HBMP(TEXT("./image/Reg_Register_B.bmp"), Rect.Width(), Rect.Height()));//登录按钮位图显示

	//注册界面的提示信息
	Ttc.AddTool(GetDlgItem(Reg_RegisterUser_B), TEXT("点击提交注册信息"));
	Ttc.AddTool(GetDlgItem(Reg_Password_ET), TEXT("请输出八位密码"));
	Ttc.AddTool(GetDlgItem(Reg_PasswordIdentify_ET), TEXT("请保持与密码一致"));
	Ttc.AddTool(GetDlgItem(Reg_PhoneNumber_ET), TEXT("请键入11位手机号"));

	//食谱种类的初始化
	MS_Perfer_CSA->Add(TEXT("谷类"));
	MS_Perfer_CSA->Add(TEXT("蔬菜类"));
	MS_Perfer_CSA->Add(TEXT("水果类"));
	MS_Perfer_CSA->Add(TEXT("坚果类"));
	MS_Perfer_CSA->Add(TEXT("畜肉类"));
	MS_Perfer_CSA->Add(TEXT("禽肉类"));
	MS_Perfer_CSA->Add(TEXT("蛋类"));
	MS_Perfer_CSA->Add(TEXT("水产类"));
	MS_Perfer_CSA->Add(TEXT("饮品类"));
	MS_Perfer_CSA->Add(TEXT("油脂类"));

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CLSMenuSystemDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect Rect;
		GetClientRect(&Rect);
		int x = (Rect.Width() - cxIcon + 1) / 2;
		int y = (Rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CLSMenuSystemDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
