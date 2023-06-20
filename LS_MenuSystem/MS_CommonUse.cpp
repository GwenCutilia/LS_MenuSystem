#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

unsigned CLSMenuSystemDlg::Random(unsigned Rand, int Offset)
{
	time_t Timeseed = time(NULL);
	srand((unsigned)Timeseed);
	unsigned Random_Temo = (rand() + Offset) % Rand;

	return Random_Temo;
}

BOOL CLSMenuSystemDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	if (pMsg->message == WM_MOUSEMOVE)
		Ttc.RelayEvent(pMsg);

	return CDialogEx::PreTranslateMessage(pMsg);
}

HBRUSH CLSMenuSystemDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	UINT id = pWnd->GetDlgCtrlID();
	if (nCtlColor == CTLCOLOR_STATIC)
	{
		pDC->SetBkMode(TRANSPARENT);
		CRect rc;
		pWnd->GetWindowRect(&rc);
		ScreenToClient(&rc);
		CDC* dc = GetDC();
		pDC->BitBlt(0, 0, rc.Width(), rc.Height(), dc, rc.left, rc.top, SRCCOPY);  //<把父窗口背景图片先画到按钮上
		ReleaseDC(dc);

		hbr = (HBRUSH) ::GetStockObject(NULL_BRUSH);
	}

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}

void CLSMenuSystemDlg::Turn_Of_Window(CString Windows, BOOL TrunofWindows)
{
	// TODO: 在此添加控件通知处理程序代码
	
	if (Login_Window.Compare(Windows) == 0)
	{
		Login_User_T_IDC.ShowWindow(TrunofWindows);
		Login_User_ET_IDC.ShowWindow(TrunofWindows);

		Login_Password_T_IDC.ShowWindow(TrunofWindows);
		Login_Password_ET_IDC.ShowWindow(TrunofWindows);

		Login_LoginUser_B_IDC.ShowWindow(TrunofWindows);
		Login_Reset_B_IDC.ShowWindow(TrunofWindows);

		Login_Reg_B_IDC.ShowWindow(TrunofWindows);
		Login_CutRule_CR_IDC.ShowWindow(TrunofWindows);
		Login_Help_B_IDC.ShowWindow(TrunofWindows);

	}

	if (Register_Window.Compare(Windows) == 0)
	{
		Reg_User_ET_IDC.ShowWindow(TrunofWindows);
		Reg_Password_ET_IDC.ShowWindow(TrunofWindows);

		Reg_PasswordIdentify_T0_IDC.ShowWindow(TrunofWindows);
		Reg_PasswordIdentify_T1_IDC.ShowWindow(TrunofWindows);
		Reg_PasswordIdentify_ET_IDC.ShowWindow(TrunofWindows);

		Reg_PhoneNumber_T_IDC.ShowWindow(TrunofWindows);
		Reg_PhoneNumber_ET_IDC.ShowWindow(TrunofWindows);

		Reg_Sex_T_IDC.ShowWindow(TrunofWindows);
		Reg_Sex_R0_IDC.ShowWindow(TrunofWindows);
		Reg_Sex_R1_IDC.ShowWindow(TrunofWindows);

		Reg_Perfer_T0_IDC.ShowWindow(TrunofWindows);
		Reg_Perfer_T1_IDC.ShowWindow(TrunofWindows);
		Reg_Perfer_CK0_IDC.ShowWindow(TrunofWindows);
		Reg_Perfer_CK1_IDC.ShowWindow(TrunofWindows);
		Reg_Perfer_CK2_IDC.ShowWindow(TrunofWindows);
		Reg_Perfer_CK3_IDC.ShowWindow(TrunofWindows);

		Reg_RegisterUser_B_IDC.ShowWindow(TrunofWindows);
		Reg_Reset_B_IDC.ShowWindow(TrunofWindows);

	}
		
	if (MS_Window.Compare(Windows) == 0)
	{
		MS_Seting_B_IDC.ShowWindow(TrunofWindows);
		MS_History_B_IDC.ShowWindow(TrunofWindows);
		MS_Order_B_IDC.ShowWindow(TrunofWindows);
		MS_Search_B_IDC.ShowWindow(TrunofWindows);
	}

	if (MS_Seting_Window.Compare(Windows) == 0)
	{
		MS_Seting_User_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_UserLogin_T_IDC.ShowWindow(TrunofWindows);

		MS_Seting_Password_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_Password_ET_IDC.ShowWindow(TrunofWindows);

		MS_Seting_PhoneNumber_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_PhoneNmber_ET_IDC.ShowWindow(TrunofWindows);

		MS_Seting_Sex_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_Sex_R0_IDC.ShowWindow(TrunofWindows);
		MS_Seting_Sex_R1_IDC.ShowWindow(TrunofWindows);

		MS_Seting_UserAvatarPath_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_UserAvatarPath_ET_IDC.ShowWindow(TrunofWindows);
		MS_Seting_UserAvatarPath_B_IDC.ShowWindow(TrunofWindows);

		MS_Seting_Recom_T_IDC.ShowWindow(TrunofWindows);
		MS_Seting_Recom_R0_IDC.ShowWindow(TrunofWindows);
		MS_Seting_Recom_R1_IDC.ShowWindow(TrunofWindows);

		MS_Seting_Logout_B_IDC.ShowWindow(TrunofWindows);
		MS_Seting_SaveInfo_B_IDC.ShowWindow(TrunofWindows);

	}
	//开关点餐界面
	if (MS_Order_Window.Compare(Windows) == 0)
	{
		MS_Order_Label_B0_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B1_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B2_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B3_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B4_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B5_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B6_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B7_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B8_IDC.ShowWindow(TrunofWindows);
		MS_Order_Label_B9_IDC.ShowWindow(TrunofWindows);

		MS_Order_CutRule_CR_IDC.ShowWindow(TrunofWindows);

		MS_Order_Shopping_B_IDC.ShowWindow(TrunofWindows);
		MS_Order_AddCart_B_IDC.ShowWindow(TrunofWindows);
		MS_Order_ResetCart_B_IDC.ShowWindow(TrunofWindows);
		MS_Order_Pay_B_IDC.ShowWindow(TrunofWindows);

		MS_Order_Amount_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_Price_T_IDC.ShowWindow(TrunofWindows);
	}

	if (MS_Order_Menu_Window.Compare(Windows) == 0)
	{
		MS_Order_MenuImage_B00_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B01_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B02_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B03_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B10_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B11_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B12_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B13_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B20_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B21_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B22_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImage_B23_IDC.ShowWindow(TrunofWindows);

		MS_Order_MenuName_T00_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T01_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T02_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T03_IDC.ShowWindow(TrunofWindows);;
		MS_Order_MenuName_T10_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T11_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T12_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T13_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T20_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T21_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T22_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuName_T23_IDC.ShowWindow(TrunofWindows);

		MS_Order_MenuPrice_T00_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T01_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T02_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T03_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T10_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T11_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T12_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T13_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T20_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T21_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T22_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuPrice_T23_IDC.ShowWindow(TrunofWindows);
	}

	if (MS_Order_Shopping_Window.Compare(Windows) == 0)
	{
		MS_Order_Shopping_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_Shopping_CR_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_T_IDC.ShowWindow(TrunofWindows);

	}

	if (MS_Order_ShoppingMenu_Window.Compare(Windows) == 0)
	{
		MS_Order_ShoppingName_T0_V = "";
		MS_Order_ShoppingName_T1_V = "";
		MS_Order_ShoppingName_T2_V = "";
		MS_Order_ShoppingName_T3_V = "";
		MS_Order_ShoppingName_T4_V = "";
		MS_Order_ShoppingName_T5_V = "";
		MS_Order_ShoppingName_T6_V = "";
		MS_Order_ShoppingName_T7_V = "";
		MS_Order_ShoppingName_T8_V = "";
		MS_Order_ShoppingName_T9_V = "";
		MS_Order_ShoppingName_T0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingName_T9_IDC.ShowWindow(TrunofWindows);

		MS_Order_ShoppingUnitPrice_T0_V = "";
		MS_Order_ShoppingUnitPrice_T1_V = "";
		MS_Order_ShoppingUnitPrice_T2_V = "";
		MS_Order_ShoppingUnitPrice_T3_V = "";
		MS_Order_ShoppingUnitPrice_T4_V = "";
		MS_Order_ShoppingUnitPrice_T5_V = "";
		MS_Order_ShoppingUnitPrice_T6_V = "";
		MS_Order_ShoppingUnitPrice_T7_V = "";
		MS_Order_ShoppingUnitPrice_T8_V = "";
		MS_Order_ShoppingUnitPrice_T9_V = "";
		MS_Order_ShoppingUnitPrice_T0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T9_IDC.ShowWindow(TrunofWindows);

		MS_Order_ShoppingAmount_ET0_V = "";
		MS_Order_ShoppingAmount_ET1_V = "";
		MS_Order_ShoppingAmount_ET2_V = "";
		MS_Order_ShoppingAmount_ET3_V = "";
		MS_Order_ShoppingAmount_ET4_V = "";
		MS_Order_ShoppingAmount_ET5_V = "";
		MS_Order_ShoppingAmount_ET6_V = "";
		MS_Order_ShoppingAmount_ET7_V = "";
		MS_Order_ShoppingAmount_ET8_V = "";
		MS_Order_ShoppingAmount_ET9_V = "";
		MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET9_IDC.ShowWindow(TrunofWindows);

		MS_Order_ShoppingDelete_B0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B9_IDC.ShowWindow(TrunofWindows);

		MS_Order_Price_T_V = "";
		MS_Order_Price_T_IDC.ShowWindow(TrunofWindows);

		*Price_ptr = 0;
		*MS_Order_ShoppingAmount_I0_ptr = 0;
		*MS_Order_ShoppingAmount_I1_ptr = 0;
		*MS_Order_ShoppingAmount_I2_ptr = 0;
		*MS_Order_ShoppingAmount_I3_ptr = 0;
		*MS_Order_ShoppingAmount_I4_ptr = 0;
		*MS_Order_ShoppingAmount_I5_ptr = 0;
		*MS_Order_ShoppingAmount_I6_ptr = 0;
		*MS_Order_ShoppingAmount_I7_ptr = 0;
		*MS_Order_ShoppingAmount_I8_ptr = 0;
		*MS_Order_ShoppingAmount_I9_ptr = 0;
	}
	if (MS_Order_MenuImagePitch_Window.Compare(Windows) == 0)
	{
		MS_Order_MenuImagePitch_P00_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P01_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P02_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P03_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P10_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P11_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P12_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P13_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P20_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P21_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P22_IDC.ShowWindow(TrunofWindows);
		MS_Order_MenuImagePitch_P23_IDC.ShowWindow(TrunofWindows);
	}
	if (MS_History_Window.Compare(Windows) == 0)
	{
		MS_History_Detail_T_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T9_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T_IDC.ShowWindow(TrunofWindows);
		MS_History_CR0_IDC.ShowWindow(TrunofWindows);
		MS_History_CR1_IDC.ShowWindow(TrunofWindows);
		MS_History_CR2_IDC.ShowWindow(TrunofWindows);
		MS_History_CR3_IDC.ShowWindow(TrunofWindows);
		MS_History_CR4_IDC.ShowWindow(TrunofWindows);
		MS_History_CR5_IDC.ShowWindow(TrunofWindows);
		MS_History_CR6_IDC.ShowWindow(TrunofWindows);
	}
	if (MS_HistoryMenu_Window.Compare(Windows) == 0)
	{
		MS_History_Detail_T0_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T1_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T2_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T3_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T4_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T5_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T6_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T7_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T8_IDC.ShowWindow(TrunofWindows);
		MS_History_Detail_T9_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T0_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T1_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T2_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T3_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T4_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T5_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T6_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T7_IDC.ShowWindow(TrunofWindows);
		MS_History_Consume_T8_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T0_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T1_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T2_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T3_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T4_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T5_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T6_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T7_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T8_IDC.ShowWindow(TrunofWindows);
		MS_History_Time_T9_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B0_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B1_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B2_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B3_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B4_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B5_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B6_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B7_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B8_IDC.ShowWindow(TrunofWindows);
		MS_History_Delete_B9_IDC.ShowWindow(TrunofWindows);
	}
	if (MS_Search_Window.Compare(Windows) == 0)
	{
		MS_Search_Lookup_ET_IDC.ShowWindow(TrunofWindows);
		MS_Search_Lookup_B_IDC.ShowWindow(TrunofWindows);
		LS_Tip_T_IDC.ShowWindow(TrunofWindows);

		MS_Order_Amount_T_IDC.ShowWindow(TrunofWindows);
		MS_Order_Price_T_IDC.ShowWindow(TrunofWindows);
	}
	if (MS_SearchMenu_Window.Compare(Windows) == 0)
	{
		MS_Search_Lookup_P00_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P01_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P02_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P03_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P04_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P10_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P11_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P12_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P13_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P14_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P20_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P21_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P22_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P23_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P23_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P30_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P31_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P32_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P33_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_P34_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T00_V = "";
		MS_Search_Lookup_T01_V = "";
		MS_Search_Lookup_T02_V = "";
		MS_Search_Lookup_T03_V = "";
		MS_Search_Lookup_T04_V = "";
		MS_Search_Lookup_T10_V = "";
		MS_Search_Lookup_T11_V = "";
		MS_Search_Lookup_T12_V = "";
		MS_Search_Lookup_T13_V = "";
		MS_Search_Lookup_T14_V = "";
		MS_Search_Lookup_T20_V = "";
		MS_Search_Lookup_T21_V = "";
		MS_Search_Lookup_T22_V = "";
		MS_Search_Lookup_T23_V = "";
		MS_Search_Lookup_T23_V = "";
		MS_Search_Lookup_T30_V = "";
		MS_Search_Lookup_T31_V = "";
		MS_Search_Lookup_T32_V = "";
		MS_Search_Lookup_T33_V = "";
		MS_Search_Lookup_T34_V = "";
		UpdateData(FALSE);
		MS_Search_Lookup_T00_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T01_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T02_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T03_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T04_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T10_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T11_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T12_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T13_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T14_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T20_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T21_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T22_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T23_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T23_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T30_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T31_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T32_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T33_IDC.ShowWindow (TrunofWindows);
		MS_Search_Lookup_T34_IDC.ShowWindow (TrunofWindows);
	}
	//管理员界面
	if (Admin_Window.Compare(Windows) == 0)
	{
		Admin_Order_B_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_B_IDC.ShowWindow(TrunofWindows);
		Admin_Setting_B_IDC.ShowWindow(TrunofWindows);
	}
	//全局食谱界面
	if (Admin_Order_Window.Compare(Windows) == 0)
	{
		Admin_Order_UpData_T_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataMenuname_ET_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataInformation_ET_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataPerfer_ET_IDC.ShowWindow(TrunofWindows); 
		Admin_Order_UpDataMenuPrice_ET_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataMenuSpecs_ET_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataMenuImagePath_ET_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpDataFile_B_IDC.ShowWindow(TrunofWindows);
		Admin_Order_UpData_B_IDC.ShowWindow(TrunofWindows);
		Admin_Order_DeleteOrder_B_IDC.ShowWindow(TrunofWindows);

		Admin_Order_Label_B0_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B1_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B2_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B3_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B4_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B5_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B6_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B7_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B8_IDC.ShowWindow(TrunofWindows);
		Admin_Order_Label_B9_IDC.ShowWindow(TrunofWindows);

		Admin_Order_CutRule_CR_IDC.ShowWindow(TrunofWindows);

	}
	if (Admin_OrderMenu_Window.Compare(Windows) == 0)
	{
		Admin_Order_MenuImage_B00_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B01_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B02_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B03_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B10_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B11_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B12_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B13_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B20_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B21_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B22_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImage_B23_IDC.ShowWindow(TrunofWindows);

		Admin_Order_MenuName_T00_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T01_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T02_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T03_IDC.ShowWindow(TrunofWindows);;
		Admin_Order_MenuName_T10_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T11_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T12_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T13_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T20_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T21_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T22_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuName_T23_IDC.ShowWindow(TrunofWindows);

		Admin_Order_MenuPrice_T00_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T01_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T02_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T03_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T10_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T11_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T12_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T13_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T20_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T21_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T22_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuPrice_T23_IDC.ShowWindow(TrunofWindows);
	}	
	if (Admin_Order_MenuImagePitch_Window.Compare(Windows) == 0)
	{
		Admin_Order_MenuImagePitch_P00_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P01_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P02_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P03_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P10_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P11_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P12_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P13_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P20_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P21_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P22_IDC.ShowWindow(TrunofWindows);
		Admin_Order_MenuImagePitch_P23_IDC.ShowWindow(TrunofWindows);
	}
	//用户管理界面
	if (Admin_UserManage_Window.Compare(Windows) == 0)
	{
		Admin_UserManage_T_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Save_B_IDC.ShowWindow(TrunofWindows);

	}
	if (Admin_UserManageMenu_Window.Compare(Windows) == 0)
	{
		Admin_UserManage_Delete_B0_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Delete_B9_IDC.ShowWindow(TrunofWindows);

		Admin_UserManage_Username_T0_IDC.ShowWindow(TrunofWindows); 
		Admin_UserManage_Username_T1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Username_T9_IDC.ShowWindow(TrunofWindows);

		Admin_UserManage_Password_ET0_IDC.ShowWindow(TrunofWindows); 
		Admin_UserManage_Password_ET1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Password_ET9_IDC.ShowWindow(TrunofWindows);

		Admin_UserManage_PhoneNumber_ET0_IDC.ShowWindow(TrunofWindows); 
		Admin_UserManage_PhoneNumber_ET1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_PhoneNumber_ET9_IDC.ShowWindow(TrunofWindows);

		Admin_UserManage_Sex_ET0_IDC.ShowWindow(TrunofWindows); 
		Admin_UserManage_Sex_ET1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Sex_ET9_IDC.ShowWindow(TrunofWindows);

		Admin_UserManage_Perfer_ET0_IDC.ShowWindow(TrunofWindows); 
		Admin_UserManage_Perfer_ET1_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET2_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET3_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET4_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET5_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET6_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET7_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET8_IDC.ShowWindow(TrunofWindows);
		Admin_UserManage_Perfer_ET9_IDC.ShowWindow(TrunofWindows);
	}
	//全局设置界面
	if (Admin_Setting_Window.Compare(Windows) == 0)
	{
		Admin_Setting_Search_T_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Search_CK_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Histroy_T_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Histroy_CK_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Order_T_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Order_CK_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_AdminLogin_T_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_AdminLogin_CK_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Register_T_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Register_CK_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_Save_B_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_LoginOut_B_IDC.ShowWindow(TrunofWindows); 
		Admin_Setting_CR_IDC.ShowWindow(TrunofWindows); 
	}
}

void CLSMenuSystemDlg::Update_Window(CString Windows, CString Update_Window_CS)
{
	std::string Windows_Temp = CT2A(Windows.GetString());
	std::regex Windows_Temp_Regex(Windows_Temp);

	std::string MS_Message_T_Window_Temp = CT2A(MS_Message_T_Window.GetString());
	if (std::regex_match(MS_Message_T_Window_Temp, Windows_Temp_Regex))
	{
		MS_Message_T_IDC.ShowWindow(FALSE);
		MS_Message_T_V = Update_Window_CS;
		MS_Message_T_IDC.ShowWindow(TRUE);
	}

	std::string MS_User_T_Window_Temp = CT2A(MS_User_T_Window.GetString());
	if (std::regex_match(MS_User_T_Window_Temp, Windows_Temp_Regex))
	{
		MS_User_T_IDC.ShowWindow(FALSE);
		MS_User_T_V = Update_Window_CS;
		MS_User_T_IDC.ShowWindow(TRUE);
	}
}