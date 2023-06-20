#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 


void CLSMenuSystemDlg::MS_Order_Shopping_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_Shopping_T_IDC.IsWindowVisible())
	{
		Turn_Of_Window(MS_Order_Menu_Window, FALSE);
		Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
		Turn_Of_Window(MS_Order_Shopping_Window, TRUE);
		MS_Order_Shopping_B_Function(TRUE, 0);
		MS_Order_Shopping_B_Function(TRUE, 1);
		MS_Order_Shopping_B_Function(TRUE, 2);
		MS_Order_Shopping_B_Function(TRUE, 3);
		MS_Order_Shopping_B_Function(TRUE, 4);
		MS_Order_Shopping_B_Function(TRUE, 5);
		MS_Order_Shopping_B_Function(TRUE, 6);
		MS_Order_Shopping_B_Function(TRUE, 7);
		MS_Order_Shopping_B_Function(TRUE, 8);
		MS_Order_Shopping_B_Function(TRUE, 9);

		MS_Order_Label_B0_IDC.EnableWindow(FALSE);
		MS_Order_Label_B1_IDC.EnableWindow(FALSE);
		MS_Order_Label_B2_IDC.EnableWindow(FALSE);
		MS_Order_Label_B3_IDC.EnableWindow(FALSE);
		MS_Order_Label_B4_IDC.EnableWindow(FALSE);
		MS_Order_Label_B5_IDC.EnableWindow(FALSE);
		MS_Order_Label_B6_IDC.EnableWindow(FALSE);
		MS_Order_Label_B7_IDC.EnableWindow(FALSE);
		MS_Order_Label_B8_IDC.EnableWindow(FALSE);
		MS_Order_Label_B9_IDC.EnableWindow(FALSE);
	}
	else
	{

		if (MS_Order_Menu_Window_I[0][0] == 1)
		{
			MS_Order_MenuImage_B00_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T00_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T00_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[0][1] == 1)
		{
			MS_Order_MenuImage_B01_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T01_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T01_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[0][2] == 1)
		{
			MS_Order_MenuImage_B02_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T02_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T02_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[0][3] == 1)
		{
			MS_Order_MenuImage_B03_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T03_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T03_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[1][0] == 1)
		{
			MS_Order_MenuImage_B10_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T10_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T10_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[1][1] == 1)
		{
			MS_Order_MenuImage_B11_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T11_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T11_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[1][2] == 1)
		{
			MS_Order_MenuImage_B12_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T12_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T12_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[1][3] == 1)
		{
			MS_Order_MenuImage_B13_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T13_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T13_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[2][0] == 1)
		{
			MS_Order_MenuImage_B20_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T20_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T20_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[2][1] == 1)
		{
			MS_Order_MenuImage_B21_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T21_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T21_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[2][2] == 1)
		{
			MS_Order_MenuImage_B22_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T22_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T22_IDC.ShowWindow(TRUE);
		}
		if (MS_Order_Menu_Window_I[2][3] == 1)
		{
			MS_Order_MenuImage_B23_IDC.ShowWindow(TRUE);
			MS_Order_MenuName_T23_IDC.ShowWindow(TRUE);
			MS_Order_MenuPrice_T23_IDC.ShowWindow(TRUE);
		}
		//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
		Turn_Of_Window(MS_Order_Shopping_Window, FALSE);
		MS_Order_Shopping_B_Function(FALSE, 0);
		MS_Order_Shopping_B_Function(FALSE, 1);
		MS_Order_Shopping_B_Function(FALSE, 2);
		MS_Order_Shopping_B_Function(FALSE, 3);
		MS_Order_Shopping_B_Function(FALSE, 4);
		MS_Order_Shopping_B_Function(FALSE, 5);
		MS_Order_Shopping_B_Function(FALSE, 6);
		MS_Order_Shopping_B_Function(FALSE, 7);
		MS_Order_Shopping_B_Function(FALSE, 8);
		MS_Order_Shopping_B_Function(FALSE, 9);
		MS_Order_Label_B0_IDC.EnableWindow(TRUE);
		MS_Order_Label_B1_IDC.EnableWindow(TRUE);
		MS_Order_Label_B2_IDC.EnableWindow(TRUE);
		MS_Order_Label_B3_IDC.EnableWindow(TRUE);
		MS_Order_Label_B4_IDC.EnableWindow(TRUE);
		MS_Order_Label_B5_IDC.EnableWindow(TRUE);
		MS_Order_Label_B6_IDC.EnableWindow(TRUE);
		MS_Order_Label_B7_IDC.EnableWindow(TRUE);
		MS_Order_Label_B8_IDC.EnableWindow(TRUE);
		MS_Order_Label_B9_IDC.EnableWindow(TRUE);
	}
}
void CLSMenuSystemDlg::MS_Order_Shopping_B_Function(BOOL TrunofWindows, int Number)
{
	std::string MS_Order_ShoppingName_T0_V_S = CT2A(MS_Order_ShoppingName_T0_V.GetString());
	std::string MS_Order_ShoppingName_T1_V_S = CT2A(MS_Order_ShoppingName_T1_V.GetString());
	std::string MS_Order_ShoppingName_T2_V_S = CT2A(MS_Order_ShoppingName_T2_V.GetString());
	std::string MS_Order_ShoppingName_T3_V_S = CT2A(MS_Order_ShoppingName_T3_V.GetString());
	std::string MS_Order_ShoppingName_T4_V_S = CT2A(MS_Order_ShoppingName_T4_V.GetString());
	std::string MS_Order_ShoppingName_T5_V_S = CT2A(MS_Order_ShoppingName_T5_V.GetString());
	std::string MS_Order_ShoppingName_T6_V_S = CT2A(MS_Order_ShoppingName_T6_V.GetString());
	std::string MS_Order_ShoppingName_T7_V_S = CT2A(MS_Order_ShoppingName_T7_V.GetString());
	std::string MS_Order_ShoppingName_T8_V_S = CT2A(MS_Order_ShoppingName_T8_V.GetString());
	std::string MS_Order_ShoppingName_T9_V_S = CT2A(MS_Order_ShoppingName_T9_V.GetString());

	std::string MS_order_ShoppingNameFlag_Temp = "";
	std::regex MS_Order_ShoppingName_T0_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T1_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T2_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T3_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T4_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T5_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T6_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T7_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T8_V_Regex(MS_order_ShoppingNameFlag_Temp);
	std::regex MS_Order_ShoppingName_T9_V_Regex(MS_order_ShoppingNameFlag_Temp);


	if (!std::regex_match(MS_Order_ShoppingName_T0_V_S, MS_Order_ShoppingName_T0_V_Regex) && Number == 0)
	{
		MS_Order_ShoppingName_T0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B0_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T1_V_S, MS_Order_ShoppingName_T1_V_Regex) && Number == 1)
	{
		MS_Order_ShoppingName_T1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET1_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B1_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T2_V_S, MS_Order_ShoppingName_T2_V_Regex) && Number == 2)
	{
		MS_Order_ShoppingName_T2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET2_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B2_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T3_V_S, MS_Order_ShoppingName_T3_V_Regex) && Number == 3)
	{
		MS_Order_ShoppingName_T3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET3_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B3_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T4_V_S, MS_Order_ShoppingName_T4_V_Regex) && Number == 4)
	{
		MS_Order_ShoppingName_T4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET4_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B4_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T5_V_S, MS_Order_ShoppingName_T5_V_Regex) && Number == 5)
	{
		MS_Order_ShoppingName_T5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET5_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B5_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T6_V_S, MS_Order_ShoppingName_T6_V_Regex) && Number == 6)
	{
		MS_Order_ShoppingName_T6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET6_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B6_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T7_V_S, MS_Order_ShoppingName_T7_V_Regex) && Number == 7)
	{
		MS_Order_ShoppingName_T7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET7_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B7_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T8_V_S, MS_Order_ShoppingName_T8_V_Regex) && Number == 8)
	{
		MS_Order_ShoppingName_T8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET8_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B8_IDC.ShowWindow(TrunofWindows);
	}
	if (!std::regex_match(MS_Order_ShoppingName_T9_V_S, MS_Order_ShoppingName_T9_V_Regex) && Number == 9)
	{
		MS_Order_ShoppingName_T9_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingUnitPrice_T9_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingAmount_ET9_IDC.ShowWindow(TrunofWindows);
		MS_Order_ShoppingDelete_B9_IDC.ShowWindow(TrunofWindows);
	}
}

void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B0_CLI()
{
	MS_Order_ShoppingDelete_MinusPrice_Function(MS_Order_ShoppingUnitPrice_T0_V);
	// TODO: 在此添加控件通知处理程序代码
	MS_Order_ShoppingDelete_B0_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B0_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 0);
	MS_Order_ShoppingName_T0_V = MS_Order_ShoppingName_T1_V;
	MS_Order_ShoppingUnitPrice_T0_V = MS_Order_ShoppingUnitPrice_T1_V;
	MS_Order_ShoppingAmount_ET0_V = MS_Order_ShoppingAmount_ET1_V;
	MS_Order_ShoppingDelete_B1_Function();
	UpdateData(FALSE);
	MS_Order_Shopping_B_Function(TRUE, 0);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B1_CLI()
{
	MS_Order_ShoppingDelete_B1_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B1_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 1);
	MS_Order_ShoppingName_T1_V = MS_Order_ShoppingName_T2_V;
	MS_Order_ShoppingUnitPrice_T1_V = MS_Order_ShoppingUnitPrice_T2_V;
	MS_Order_ShoppingAmount_ET1_V = MS_Order_ShoppingAmount_ET2_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B2_Function();
	MS_Order_Shopping_B_Function(TRUE, 1);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B2_CLI()
{
	MS_Order_ShoppingDelete_B2_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B2_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 2);
	MS_Order_ShoppingName_T2_V = MS_Order_ShoppingName_T3_V;
	MS_Order_ShoppingUnitPrice_T2_V = MS_Order_ShoppingUnitPrice_T3_V;
	MS_Order_ShoppingAmount_ET2_V = MS_Order_ShoppingAmount_ET3_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B3_Function();
	MS_Order_Shopping_B_Function(TRUE, 2);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B3_CLI()
{
	MS_Order_ShoppingDelete_B3_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B3_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 3);
	MS_Order_ShoppingName_T3_V = MS_Order_ShoppingName_T4_V;
	MS_Order_ShoppingUnitPrice_T3_V = MS_Order_ShoppingUnitPrice_T4_V;
	MS_Order_ShoppingAmount_ET3_V = MS_Order_ShoppingAmount_ET4_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B4_Function();
	MS_Order_Shopping_B_Function(TRUE, 3);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B4_CLI()
{
	MS_Order_ShoppingDelete_B4_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B4_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 4);
	MS_Order_ShoppingName_T4_V = MS_Order_ShoppingName_T5_V;
	MS_Order_ShoppingUnitPrice_T4_V = MS_Order_ShoppingUnitPrice_T5_V;
	MS_Order_ShoppingAmount_ET4_V = MS_Order_ShoppingAmount_ET5_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B5_Function();
	MS_Order_Shopping_B_Function(TRUE, 4);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B5_CLI()
{
	MS_Order_ShoppingDelete_B5_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B5_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 5);
	MS_Order_ShoppingName_T5_V = MS_Order_ShoppingName_T6_V;
	MS_Order_ShoppingUnitPrice_T5_V = MS_Order_ShoppingUnitPrice_T6_V;
	MS_Order_ShoppingAmount_ET5_V = MS_Order_ShoppingAmount_ET6_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B6_Function();
	MS_Order_Shopping_B_Function(TRUE, 5);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B6_CLI()
{
	MS_Order_ShoppingDelete_B6_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B6_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 6);
	MS_Order_ShoppingName_T6_V = MS_Order_ShoppingName_T7_V;
	MS_Order_ShoppingUnitPrice_T6_V = MS_Order_ShoppingUnitPrice_T7_V;
	MS_Order_ShoppingAmount_ET6_V = MS_Order_ShoppingAmount_ET7_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B7_Function();
	MS_Order_Shopping_B_Function(TRUE, 6);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B7_CLI()
{
	MS_Order_ShoppingDelete_B7_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B7_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 7);
	MS_Order_ShoppingName_T7_V = MS_Order_ShoppingName_T8_V;
	MS_Order_ShoppingUnitPrice_T7_V = MS_Order_ShoppingUnitPrice_T8_V;
	MS_Order_ShoppingAmount_ET7_V = MS_Order_ShoppingAmount_ET8_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B8_Function();
	MS_Order_Shopping_B_Function(TRUE, 7);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B8_CLI()
{
	MS_Order_ShoppingDelete_B8_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B8_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 8);
	MS_Order_ShoppingName_T8_V = MS_Order_ShoppingName_T9_V;
	MS_Order_ShoppingUnitPrice_T8_V = MS_Order_ShoppingUnitPrice_T9_V;
	MS_Order_ShoppingAmount_ET8_V = MS_Order_ShoppingAmount_ET9_V;
	UpdateData(FALSE);
	MS_Order_ShoppingDelete_B9_Function();
	MS_Order_Shopping_B_Function(TRUE, 8);
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B9_CLI()
{
	MS_Order_ShoppingDelete_B9_Function();
}
void CLSMenuSystemDlg::MS_Order_ShoppingDelete_B9_Function()
{
	MS_Order_Shopping_B_Function(FALSE, 9);
	MS_Order_ShoppingName_T9_V = "";
	MS_Order_ShoppingUnitPrice_T9_V = "";
	MS_Order_ShoppingAmount_ET9_V = "";
	UpdateData(FALSE);
	MS_Order_Shopping_B_Function(TRUE, 9);

	CString MS_Order_ShoppingUnitPrice_T0_Temp = MS_Order_ShoppingUnitPrice_T0_V;
	CString MS_Order_ShoppingUnitPrice_T1_Temp = MS_Order_ShoppingUnitPrice_T1_V;
	CString MS_Order_ShoppingUnitPrice_T2_Temp = MS_Order_ShoppingUnitPrice_T2_V;
	CString MS_Order_ShoppingUnitPrice_T3_Temp = MS_Order_ShoppingUnitPrice_T3_V;
	CString MS_Order_ShoppingUnitPrice_T4_Temp = MS_Order_ShoppingUnitPrice_T4_V;
	CString MS_Order_ShoppingUnitPrice_T5_Temp = MS_Order_ShoppingUnitPrice_T5_V;
	CString MS_Order_ShoppingUnitPrice_T6_Temp = MS_Order_ShoppingUnitPrice_T6_V;
	CString MS_Order_ShoppingUnitPrice_T7_Temp = MS_Order_ShoppingUnitPrice_T7_V;
	CString MS_Order_ShoppingUnitPrice_T8_Temp = MS_Order_ShoppingUnitPrice_T8_V;
	CString MS_Order_ShoppingUnitPrice_T9_Temp = MS_Order_ShoppingUnitPrice_T9_V;

	CString MS_Order_ShoppingAmount_ET0_Temp = MS_Order_ShoppingAmount_ET0_V;
	CString MS_Order_ShoppingAmount_ET1_Temp = MS_Order_ShoppingAmount_ET1_V;
	CString MS_Order_ShoppingAmount_ET2_Temp = MS_Order_ShoppingAmount_ET2_V;
	CString MS_Order_ShoppingAmount_ET3_Temp = MS_Order_ShoppingAmount_ET3_V;
	CString MS_Order_ShoppingAmount_ET4_Temp = MS_Order_ShoppingAmount_ET4_V;
	CString MS_Order_ShoppingAmount_ET5_Temp = MS_Order_ShoppingAmount_ET5_V;
	CString MS_Order_ShoppingAmount_ET6_Temp = MS_Order_ShoppingAmount_ET6_V;
	CString MS_Order_ShoppingAmount_ET7_Temp = MS_Order_ShoppingAmount_ET7_V;
	CString MS_Order_ShoppingAmount_ET8_Temp = MS_Order_ShoppingAmount_ET8_V;
	CString MS_Order_ShoppingAmount_ET9_Temp = MS_Order_ShoppingAmount_ET9_V;


	MS_Order_ShoppingUnitPrice_T0_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T0_Temp.Delete(MS_Order_ShoppingUnitPrice_T0_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T1_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T1_Temp.Delete(MS_Order_ShoppingUnitPrice_T1_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T2_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T2_Temp.Delete(MS_Order_ShoppingUnitPrice_T2_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T3_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T3_Temp.Delete(MS_Order_ShoppingUnitPrice_T3_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T4_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T4_Temp.Delete(MS_Order_ShoppingUnitPrice_T4_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T5_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T5_Temp.Delete(MS_Order_ShoppingUnitPrice_T5_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T6_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T6_Temp.Delete(MS_Order_ShoppingUnitPrice_T6_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T7_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T7_Temp.Delete(MS_Order_ShoppingUnitPrice_T7_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T8_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T8_Temp.Delete(MS_Order_ShoppingUnitPrice_T8_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_ShoppingUnitPrice_T9_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_T9_Temp.Delete(MS_Order_ShoppingUnitPrice_T9_Temp.FindOneOf(TEXT("/")), 5);

	MS_Order_Price_T_IDC.ShowWindow(FALSE);
	*Price_ptr = ((int)_ttoi(MS_Order_ShoppingUnitPrice_T0_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET0_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T1_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET1_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T2_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET2_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T3_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET3_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T4_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET4_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T5_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET5_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T6_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET6_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T7_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET7_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T8_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET8_Temp)) +
		((int)_ttoi(MS_Order_ShoppingUnitPrice_T9_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_ET9_Temp));
	MS_Order_Price_T_V.Format(TEXT("%d"), *Price_ptr);
	*MS_Order_ShoppingAmount_I0_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET0_Temp);
	*MS_Order_ShoppingAmount_I1_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET1_Temp);
	*MS_Order_ShoppingAmount_I2_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET2_Temp);
	*MS_Order_ShoppingAmount_I3_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET3_Temp);
	*MS_Order_ShoppingAmount_I4_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET4_Temp);
	*MS_Order_ShoppingAmount_I5_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET5_Temp);
	*MS_Order_ShoppingAmount_I6_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET6_Temp);
	*MS_Order_ShoppingAmount_I7_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET7_Temp);
	*MS_Order_ShoppingAmount_I8_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET8_Temp);
	*MS_Order_ShoppingAmount_I9_ptr = (int)_ttoi(MS_Order_ShoppingAmount_ET9_Temp);
	UpdateData(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(TRUE);

}

void CLSMenuSystemDlg::MS_Order_ShoppingDelete_MinusPrice_Function(CString MS_Order_ShoppingUnitPrice)
{
	CString MS_Order_ShoppingUnitPrice_Temp = MS_Order_ShoppingUnitPrice;
	MS_Order_ShoppingUnitPrice_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_Temp.Delete(MS_Order_ShoppingUnitPrice_Temp.FindOneOf(TEXT("/")), 5);
	MS_Order_Price_T_IDC.ShowWindow(FALSE);
	*Price_ptr = (int)_ttoi(MS_Order_Price_T_V) - (int)_ttoi(MS_Order_ShoppingUnitPrice_Temp);
	MS_Order_Price_T_V.Format(TEXT("%d"), *Price_ptr);
	UpdateData(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(TRUE);
}

void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET0_EKF()
{
	UpdateData(TRUE);
	if ((!MS_Order_ShoppingAmount_ET0_V.Compare(_T("")) || !MS_Order_ShoppingAmount_ET0_V.Compare(_T("0"))))
	{
		MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(FALSE);
		MS_Order_ShoppingAmount_ET0_IDC.SetWindowTextW(TEXT("1"));
		MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(TRUE);
	}
	else
	{
		MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T0_V, MS_Order_ShoppingAmount_ET0_V, MS_Order_ShoppingAmount_I0_ptr);
	}
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET1_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T1_V, MS_Order_ShoppingAmount_ET1_V, MS_Order_ShoppingAmount_I1_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET2_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T2_V, MS_Order_ShoppingAmount_ET2_V, MS_Order_ShoppingAmount_I2_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET3_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T3_V, MS_Order_ShoppingAmount_ET3_V, MS_Order_ShoppingAmount_I3_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET4_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T4_V, MS_Order_ShoppingAmount_ET4_V, MS_Order_ShoppingAmount_I4_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET5_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T5_V, MS_Order_ShoppingAmount_ET5_V, MS_Order_ShoppingAmount_I5_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET6_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T6_V, MS_Order_ShoppingAmount_ET6_V, MS_Order_ShoppingAmount_I6_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET7_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T7_V, MS_Order_ShoppingAmount_ET7_V, MS_Order_ShoppingAmount_I7_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET8_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T8_V, MS_Order_ShoppingAmount_ET8_V, MS_Order_ShoppingAmount_I8_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_ET9_EKF()
{
	UpdateData(TRUE);
	MS_Order_ShoppingAmount_Function(MS_Order_ShoppingUnitPrice_T9_V, MS_Order_ShoppingAmount_ET9_V, MS_Order_ShoppingAmount_I9_ptr);
}
void CLSMenuSystemDlg::MS_Order_ShoppingAmount_Function(CString MS_Order_ShoppingUnitPrice, CString MS_Order_ShoppingAmount, int* MS_Order_ShoppingAmount_ptr)
{
	CString MS_Order_ShoppingUnitPrice_Temp = MS_Order_ShoppingUnitPrice;
	CString MS_Order_ShoppingAmount_Temp = MS_Order_ShoppingAmount;
	MS_Order_ShoppingUnitPrice_Temp.Delete(0, 1);
	MS_Order_ShoppingUnitPrice_Temp.Delete(MS_Order_ShoppingUnitPrice_Temp.FindOneOf(TEXT("/")), 5);
	if (((int)_ttoi(MS_Order_ShoppingAmount_Temp) != *MS_Order_ShoppingAmount_ptr))
	{
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		*Price_ptr = (int)_ttoi(MS_Order_Price_T_V) - ((int)_ttoi(MS_Order_ShoppingUnitPrice_Temp) * *MS_Order_ShoppingAmount_ptr);
		MS_Order_Price_T_V.Format(TEXT("%d"), *Price_ptr);
		*MS_Order_ShoppingAmount_ptr = (int)_ttoi(MS_Order_ShoppingAmount_Temp);

		*Price_ptr = (int)_ttoi(MS_Order_Price_T_V) + ((int)_ttoi(MS_Order_ShoppingUnitPrice_Temp) * (int)_ttoi(MS_Order_ShoppingAmount_Temp));
		MS_Order_Price_T_V.Format(TEXT("%d"), *Price_ptr);
		*MS_Order_ShoppingAmount_ptr = (int)_ttoi(MS_Order_ShoppingAmount_Temp);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
	}
}
void CLSMenuSystemDlg::MS_Order_ResetCart_B_CLI()
{
	MS_Order_ShoppingName_T0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T9_IDC.ShowWindow(FALSE);

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

	MS_Order_ShoppingUnitPrice_T0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T9_IDC.ShowWindow(FALSE);

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

	MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET9_IDC.ShowWindow(FALSE);

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

	MS_Order_Price_T_V = "";
	*Price_ptr = 0;

	MS_Order_ShoppingDelete_B0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B9_IDC.ShowWindow(FALSE);

	UpdateData(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(TRUE);
}

void CLSMenuSystemDlg::MS_Order_Pay_B_CLI()
{
	UpdateData(TRUE);
	CString MS_Order_ShoppingUnitPrice_T0_Temp = MS_Order_ShoppingUnitPrice_T0_V;
	MS_Order_ShoppingUnitPrice_T0_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T0_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T1_Temp = MS_Order_ShoppingUnitPrice_T1_V;
	MS_Order_ShoppingUnitPrice_T1_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T1_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T2_Temp = MS_Order_ShoppingUnitPrice_T2_V;
	MS_Order_ShoppingUnitPrice_T2_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T2_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T3_Temp = MS_Order_ShoppingUnitPrice_T3_V;
	MS_Order_ShoppingUnitPrice_T3_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T3_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T4_Temp = MS_Order_ShoppingUnitPrice_T4_V;
	MS_Order_ShoppingUnitPrice_T4_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T4_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T5_Temp = MS_Order_ShoppingUnitPrice_T5_V;
	MS_Order_ShoppingUnitPrice_T5_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T5_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T6_Temp = MS_Order_ShoppingUnitPrice_T6_V;
	MS_Order_ShoppingUnitPrice_T6_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T6_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T7_Temp = MS_Order_ShoppingUnitPrice_T7_V;
	MS_Order_ShoppingUnitPrice_T7_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T7_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T8_Temp = MS_Order_ShoppingUnitPrice_T8_V;
	MS_Order_ShoppingUnitPrice_T8_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T8_Temp.FindOneOf(TEXT("/")) + 1);
	CString MS_Order_ShoppingUnitPrice_T9_Temp = MS_Order_ShoppingUnitPrice_T9_V;
	MS_Order_ShoppingUnitPrice_T9_Temp.Delete(0, MS_Order_ShoppingUnitPrice_T9_Temp.FindOneOf(TEXT("/")) + 1);

	CString MS_Order_ShoppingName =
		MS_Order_ShoppingName_T0_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T0_V + TEXT(" ") + MS_Order_ShoppingAmount_ET0_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T0_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T1_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T1_V + TEXT(" ") + MS_Order_ShoppingAmount_ET1_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T1_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T2_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T2_V + TEXT(" ") + MS_Order_ShoppingAmount_ET2_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T2_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T3_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T3_V + TEXT(" ") + MS_Order_ShoppingAmount_ET3_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T3_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T4_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T4_V + TEXT(" ") + MS_Order_ShoppingAmount_ET4_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T4_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T5_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T5_V + TEXT(" ") + MS_Order_ShoppingAmount_ET5_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T5_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T6_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T6_V + TEXT(" ") + MS_Order_ShoppingAmount_ET6_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T6_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T7_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T7_V + TEXT(" ") + MS_Order_ShoppingAmount_ET7_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T7_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T8_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T8_V + TEXT(" ") + MS_Order_ShoppingAmount_ET8_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T8_Temp + TEXT("  ") +
		MS_Order_ShoppingName_T9_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T9_V + TEXT(" ") + MS_Order_ShoppingAmount_ET9_V + TEXT(" ") + MS_Order_ShoppingUnitPrice_T9_Temp;
	MS_Order_Price_T_V;

	MS_Time = CTime::GetCurrentTime();
	CString MS_Order_ShoppingTime = MS_Time.Format("%Y/%m/%d %H:%M:%S %A");
	/*MessageBox(MS_Order_ShoppingName);
	MessageBox(MS_Order_ShoppingTime);
	MessageBox(MS_Order_Price_T_V);*/

	CString MS_Sql_CS =
		TEXT("insert into History values('")
		+ MS_Order_ShoppingName + TEXT("','")
		+ MS_Order_Price_T_V + TEXT("','")
		+ MS_Order_ShoppingTime + TEXT("','")
		+ MS_User_CS + TEXT("')");

	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	MS_Order_ShoppingName_T0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingName_T9_IDC.ShowWindow(FALSE);

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

	MS_Order_ShoppingUnitPrice_T0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingUnitPrice_T9_IDC.ShowWindow(FALSE);

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

	MS_Order_ShoppingAmount_ET0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingAmount_ET9_IDC.ShowWindow(FALSE);

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

	MS_Order_Price_T_V = "";
	*Price_ptr = 0;

	MS_Order_ShoppingDelete_B0_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B1_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B2_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B3_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B4_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B5_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B6_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B7_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B8_IDC.ShowWindow(FALSE);
	MS_Order_ShoppingDelete_B9_IDC.ShowWindow(FALSE);

	UpdateData(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(FALSE);
	MS_Order_Price_T_IDC.ShowWindow(TRUE);
}