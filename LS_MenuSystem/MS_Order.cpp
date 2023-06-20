#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::MS_Order_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(0));

	MS_DayRecom_T_IDC.ShowWindow(FALSE);
	MS_DayRecom_T_V = TEXT("点餐界面");
	UpdateData(FALSE);
	MS_DayRecom_T_IDC.ShowWindow(TRUE);

	Turn_Of_Window(MS_Search_Window, FALSE);
	Turn_Of_Window(MS_SearchMenu_Window, FALSE);
	Turn_Of_Window(MS_History_Window, FALSE);
	Turn_Of_Window(MS_HistoryMenu_Window, FALSE);
	Turn_Of_Window(MS_Order_Window, TRUE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
	Turn_Of_Window(MS_Order_Shopping_Window, FALSE);
	Turn_Of_Window(MS_Order_ShoppingMenu_Window, FALSE);
	Turn_Of_Window(MS_Seting_Window, FALSE);
}
void CLSMenuSystemDlg::MS_Order_AddCart_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	if (MS_Order_MenuImagePitch_P00_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P00_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I00;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS00, MS_Order_MenuPrice_CS00);
	}
	if (MS_Order_MenuImagePitch_P01_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P01_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I01;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS01, MS_Order_MenuPrice_CS01);
	}
	if (MS_Order_MenuImagePitch_P02_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P02_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I02;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS02, MS_Order_MenuPrice_CS03);
	}
	if (MS_Order_MenuImagePitch_P03_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P03_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I03;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS03, MS_Order_MenuPrice_CS03);
	}
	if (MS_Order_MenuImagePitch_P10_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P10_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I10;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS10, MS_Order_MenuPrice_CS10);
	}
	if (MS_Order_MenuImagePitch_P11_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P11_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I11;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS11, MS_Order_MenuPrice_CS11);
	}
	if (MS_Order_MenuImagePitch_P12_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P12_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I12;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS12, MS_Order_MenuPrice_CS12);
	}
	if (MS_Order_MenuImagePitch_P13_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P13_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I13;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS13, MS_Order_MenuPrice_CS13);
	}
	if (MS_Order_MenuImagePitch_P20_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P20_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I20;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS20, MS_Order_MenuPrice_CS20);
	}
	if (MS_Order_MenuImagePitch_P21_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P21_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I21;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS21, MS_Order_MenuPrice_CS21);
	}
	if (MS_Order_MenuImagePitch_P22_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P22_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I22;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS22, MS_Order_MenuPrice_CS22);
	}
	if (MS_Order_MenuImagePitch_P23_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P23_IDC.ShowWindow(FALSE);
		*Price_ptr += MS_Order_Price_I23;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);
		MS_Order_AddCart_B_Function(MS_Order_MenuName_CS23, MS_Order_MenuPrice_CS23);
	}
}
void CLSMenuSystemDlg::MS_Order_AddCart_B_Function(CString MS_Order_MenuName_CS, CString MS_Order_MenuPrice_CS)
{
	UpdateData(FALSE);

	std::string MS_Order_MenuName_S = CT2A(MS_Order_MenuName_CS.GetString());
	std::regex MS_Order_MenuName_Regex(MS_Order_MenuName_S);

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

	if (std::regex_match(MS_Order_ShoppingName_T0_V_S, MS_Order_ShoppingName_T0_V_Regex) && *MS_Order_ShoppingAmount_I0_ptr == 0)
	{
		MS_Order_ShoppingName_T0_V = MS_Order_MenuName_CS;
		//MessageBox(MS_Order_ShoppingName_T0_V);
		MS_Order_ShoppingUnitPrice_T0_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I0_ptr += 1;
		MS_Order_ShoppingAmount_ET0_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I0_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T0_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I0_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I0_ptr += 1;
		MS_Order_ShoppingAmount_ET0_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I0_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T1_V_S, MS_Order_ShoppingName_T1_V_Regex) && *MS_Order_ShoppingAmount_I1_ptr == 0)
	{
		MS_Order_ShoppingName_T1_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T1_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I1_ptr += 1;
		MS_Order_ShoppingAmount_ET1_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T1_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I1_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I1_ptr += 1;
		MS_Order_ShoppingAmount_ET1_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I1_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T2_V_S, MS_Order_ShoppingName_T2_V_Regex) && *MS_Order_ShoppingAmount_I2_ptr == 0)
	{
		MS_Order_ShoppingName_T2_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T2_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I2_ptr += 1;
		MS_Order_ShoppingAmount_ET2_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T2_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I2_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I2_ptr += 1;
		MS_Order_ShoppingAmount_ET2_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I2_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T3_V_S, MS_Order_ShoppingName_T3_V_Regex) && *MS_Order_ShoppingAmount_I3_ptr == 0)
	{
		MS_Order_ShoppingName_T3_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T3_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I3_ptr += 1;
		MS_Order_ShoppingAmount_ET3_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T3_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I3_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I3_ptr += 1;
		MS_Order_ShoppingAmount_ET3_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I3_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T4_V_S, MS_Order_ShoppingName_T4_V_Regex) && *MS_Order_ShoppingAmount_I4_ptr == 0)
	{
		MS_Order_ShoppingName_T4_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T4_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I4_ptr += 1;
		MS_Order_ShoppingAmount_ET4_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T4_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I4_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I4_ptr += 1;
		MS_Order_ShoppingAmount_ET4_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I4_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T5_V_S, MS_Order_ShoppingName_T5_V_Regex) && *MS_Order_ShoppingAmount_I5_ptr == 0)
	{
		MS_Order_ShoppingName_T5_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T5_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I5_ptr += 1;
		MS_Order_ShoppingAmount_ET5_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T5_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I5_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I5_ptr += 1;
		MS_Order_ShoppingAmount_ET5_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I5_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T6_V_S, MS_Order_ShoppingName_T6_V_Regex) && *MS_Order_ShoppingAmount_I6_ptr == 0)
	{
		MS_Order_ShoppingName_T6_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T6_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I6_ptr += 1;
		MS_Order_ShoppingAmount_ET6_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T6_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I6_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I6_ptr += 1;
		MS_Order_ShoppingAmount_ET6_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I6_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T7_V_S, MS_Order_ShoppingName_T7_V_Regex) && *MS_Order_ShoppingAmount_I7_ptr == 0)
	{
		MS_Order_ShoppingName_T7_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T7_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I7_ptr += 1;
		MS_Order_ShoppingAmount_ET7_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T7_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I7_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I7_ptr += 1;
		MS_Order_ShoppingAmount_ET7_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I7_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T8_V_S, MS_Order_ShoppingName_T8_V_Regex) && *MS_Order_ShoppingAmount_I8_ptr == 0)
	{
		MS_Order_ShoppingName_T8_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T8_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I8_ptr += 1;
		MS_Order_ShoppingAmount_ET8_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T8_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I8_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I8_ptr += 1;
		MS_Order_ShoppingAmount_ET8_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I8_ptr);
	}
	else if (std::regex_match(MS_Order_ShoppingName_T9_V_S, MS_Order_ShoppingName_T9_V_Regex) && *MS_Order_ShoppingAmount_I9_ptr == 0)
	{
		MS_Order_ShoppingName_T9_V = MS_Order_MenuName_CS;
		MS_Order_ShoppingUnitPrice_T9_V = MS_Order_MenuPrice_CS;
		*MS_Order_ShoppingAmount_I9_ptr += 1;
		MS_Order_ShoppingAmount_ET9_V = TEXT("1");
	}
	else if (std::regex_match(MS_Order_ShoppingName_T9_V_S, MS_Order_MenuName_Regex) && *MS_Order_ShoppingAmount_I9_ptr >= 1)
	{
		*MS_Order_ShoppingAmount_I9_ptr += 1;
		MS_Order_ShoppingAmount_ET9_V.Format(TEXT("%d"), *MS_Order_ShoppingAmount_I9_ptr);
	}
	UpdateData(FALSE);
}


void CLSMenuSystemDlg::MS_Order_B_Function(CString Perfer)
{
	//初始化sql语句并给指针赋值查询结果
	CString MS_Order_MenuName_Temp_Sql = TEXT("select Menuname from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr MS_Order_MenuName_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Order_MenuName_Temp_Sql), NULL, adCmdText);
	CString MS_Order_MenuName_Temp_CS;
	std::string MS_Order_MenuName_Temp_S;

	CString MS_Order_MenuPrice_Temp_Sql = TEXT("select MenuPrice from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr MS_Order_MenuPrice_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Order_MenuPrice_Temp_Sql), NULL, adCmdText);
	CString MS_Order_MenuPrice_Temp_CS;
	std::string  MS_Order_MenuPrice_Temp_S;

	CString MS_Order_MenuSpecs_Temp_Sql = TEXT("select MenuSpecs from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr MS_Order_MenuSpecs_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Order_MenuSpecs_Temp_Sql), NULL, adCmdText);
	CString MS_Order_MenuSpecs_Temp_CS;
	std::string MS_Order_MenuSpecs_Temp_S;

	CString MS_Order_MenuImagePath_Temp_Sql = TEXT("select MenuImagePath from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr MS_Order_MenuImagePath_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Order_MenuImagePath_Temp_Sql), NULL, adCmdText);
	CString MS_Order_MenuImagePath_Temp_CS;
	std::string MS_Order_MenuImagePath_Temp_S;

	CString MS_Order_MenuInformation_Temp_Sql = TEXT("select MenuInformation from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr MS_Order_MenuInformation_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Order_MenuInformation_Temp_Sql), NULL, adCmdText);
	CString MS_Order_MenuInformation_Temp_CS;
	std::string MS_Order_MenuInformation_Temp_S;
	//遍历组件
	Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	for (int i = 0; i < 3 && (!MS_Order_MenuName_Temp_RP->adoEOF); i++)
	{
		for (int j = 0; j < 4 && (!MS_Order_MenuName_Temp_RP->adoEOF); j++)
		{
			MS_Order_MenuName_Temp_CS = (TCHAR*)(_bstr_t)MS_Order_MenuName_Temp_RP->GetFields()->GetItem("Menuname")->Value;
			MS_Order_MenuName_Temp_S = CT2A(MS_Order_MenuName_Temp_CS.GetString());
			if (!MS_Order_MenuName_Temp_S.empty())
			{
				MS_Order_MenuName_Temp_S.erase(MS_Order_MenuName_Temp_S.find_last_not_of(" ") + 1);
			}
			MS_Order_MenuName_Temp_CS = CA2T(MS_Order_MenuName_Temp_S.c_str());

			MS_Order_MenuPrice_Temp_CS = (TCHAR*)(_bstr_t)MS_Order_MenuPrice_Temp_RP->GetFields()->GetItem("MenuPrice")->Value;
			MS_Order_MenuPrice_Temp_S = CT2A(MS_Order_MenuPrice_Temp_CS.GetString());
			if (!MS_Order_MenuPrice_Temp_S.empty())
			{
				MS_Order_MenuPrice_Temp_S.erase(MS_Order_MenuPrice_Temp_S.find_last_not_of(" ") + 1);
			}
			MS_Order_MenuPrice_Temp_CS = CA2T(MS_Order_MenuPrice_Temp_S.c_str());

			MS_Order_MenuSpecs_Temp_CS = (TCHAR*)(_bstr_t)MS_Order_MenuSpecs_Temp_RP->GetFields()->GetItem("MenuSpecs")->Value;
			MS_Order_MenuSpecs_Temp_S = CT2A(MS_Order_MenuSpecs_Temp_CS.GetString());
			if (!MS_Order_MenuSpecs_Temp_S.empty())
			{
				MS_Order_MenuSpecs_Temp_S.erase(MS_Order_MenuSpecs_Temp_S.find_last_not_of(" ") + 1);
			}
			MS_Order_MenuSpecs_Temp_CS = CA2T(MS_Order_MenuSpecs_Temp_S.c_str());

			MS_Order_MenuImagePath_Temp_CS = (TCHAR*)(_bstr_t)MS_Order_MenuImagePath_Temp_RP->GetFields()->GetItem("MenuImagePath")->Value;
			MS_Order_MenuImagePath_Temp_S = CT2A(MS_Order_MenuImagePath_Temp_CS.GetString());
			if (!MS_Order_MenuImagePath_Temp_S.empty())
			{
				MS_Order_MenuImagePath_Temp_S.erase(MS_Order_MenuImagePath_Temp_S.find_last_not_of(" ") + 1);
			}
			MS_Order_MenuImagePath_Temp_CS = CA2T(MS_Order_MenuImagePath_Temp_S.c_str());

			MS_Order_MenuInformation_Temp_CS = (TCHAR*)(_bstr_t)MS_Order_MenuInformation_Temp_RP->GetFields()->GetItem("MenuInformation")->Value;
			MS_Order_MenuInformation_Temp_S = CT2A(MS_Order_MenuInformation_Temp_CS.GetString());
			if (!MS_Order_MenuInformation_Temp_S.empty())
			{
				MS_Order_MenuInformation_Temp_S.erase(MS_Order_MenuInformation_Temp_S.find_last_not_of(" ") + 1);
			}
			MS_Order_MenuInformation_Temp_CS = CA2T(MS_Order_MenuInformation_Temp_S.c_str());

			if (i == 0 && j == 0)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T00_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS00 = MS_Order_MenuName_T00_V;
				MS_Order_Price_I00 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T00_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS00 = MS_Order_MenuPrice_T00_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T00), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B00_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B00_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B00_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T00_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T00_IDC.ShowWindow(TRUE);

			}
			else if (i == 0 && j == 1)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T01_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS01 = MS_Order_MenuName_T01_V;
				MS_Order_Price_I01 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T01_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS01 = MS_Order_MenuPrice_T01_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T01), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B01_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B01_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B01_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T01_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T01_IDC.ShowWindow(TRUE);
			}
			else if (i == 0 && j == 2)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T02_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS02 = MS_Order_MenuName_T02_V;
				MS_Order_Price_I02 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T02_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS02 = MS_Order_MenuPrice_T02_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T02), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B02_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B02_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B02_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T02_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T02_IDC.ShowWindow(TRUE);
			}
			else if (i == 0 && j == 3)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T03_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS03 = MS_Order_MenuName_T03_V;
				MS_Order_Price_I03 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T03_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS03 = MS_Order_MenuPrice_T03_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T03), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B03_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B03_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B03_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T03_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T03_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 0)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T10_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS10 = MS_Order_MenuName_T10_V;
				MS_Order_Price_I10 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T10_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS10 = MS_Order_MenuPrice_T10_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T10), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B10_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B10_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B10_IDC.ShowWindow(FALSE);
				MS_Order_MenuName_T10_IDC.ShowWindow(FALSE);
				MS_Order_MenuPrice_T10_IDC.ShowWindow(FALSE);
			}
			if (i == 1 && j == 1)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T11_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS11 = MS_Order_MenuName_T11_V;
				MS_Order_Price_I11 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T11_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS11 = MS_Order_MenuPrice_T11_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T11), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B11_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B11_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B11_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T11_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T11_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 2)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T12_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS12 = MS_Order_MenuName_T12_V;
				MS_Order_Price_I12 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T12_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS12 = MS_Order_MenuPrice_T12_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T12), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B12_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B12_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B12_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T12_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T12_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 3)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T13_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS13 = MS_Order_MenuName_T13_V;
				MS_Order_Price_I13 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T13_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS13 = MS_Order_MenuPrice_T13_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T13), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B13_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B13_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B13_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T13_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T13_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 0)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T20_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS20 = MS_Order_MenuName_T20_V;
				MS_Order_Price_I20 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T20_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS20 = MS_Order_MenuPrice_T20_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T20), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B20_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B20_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B20_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T20_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T20_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 1)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T21_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS21 = MS_Order_MenuName_T21_V;
				MS_Order_Price_I21 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T21_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS21 = MS_Order_MenuPrice_T21_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T21), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B21_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B21_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B21_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T21_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T21_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 2)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T22_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS22 = MS_Order_MenuName_T22_V;
				MS_Order_Price_I22 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T22_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS22 = MS_Order_MenuPrice_T22_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T22), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B22_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B22_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B22_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T22_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T22_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 3)
			{
				MS_Order_Menu_Window_I[i][j] = 1;

				MS_Order_MenuName_T23_V = MS_Order_MenuName_Temp_CS;
				MS_Order_MenuName_CS23 = MS_Order_MenuName_T23_V;
				MS_Order_Price_I23 = (int)_ttof(MS_Order_MenuPrice_Temp_CS);
				MS_Order_MenuPrice_T23_V = TEXT("$ ") + MS_Order_MenuPrice_Temp_CS + TEXT(" /") + MS_Order_MenuSpecs_Temp_CS;
				MS_Order_MenuPrice_CS23 = MS_Order_MenuPrice_T23_V;
				Ttc.AddTool(GetDlgItem(MS_Order_MenuName_T23), MS_Order_MenuInformation_Temp_CS);
				MS_Order_MenuImage_B23_IDC.GetWindowRect(Rect);
				MS_Order_MenuImage_B23_IDC.SetBitmap(HBMP(MS_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				MS_Order_MenuImage_B23_IDC.ShowWindow(TRUE);
				MS_Order_MenuName_T23_IDC.ShowWindow(TRUE);
				MS_Order_MenuPrice_T23_IDC.ShowWindow(TRUE);
			}
			MS_Order_MenuName_Temp_RP->MoveNext();
			MS_Order_MenuPrice_Temp_RP->MoveNext();
			MS_Order_MenuSpecs_Temp_RP->MoveNext();
			MS_Order_MenuImagePath_Temp_RP->MoveNext();
			MS_Order_MenuInformation_Temp_RP->MoveNext();
		}
	}

	/*if(!pRecordset->adoEOF)
	{
		pRecordset->MoveNext();
	}*/
	UpdateData(FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B0_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(0));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B1_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(1));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B2_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(2));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B3_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(3));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B4_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(4));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B5_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(5));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B6_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(6));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B7_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(7));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Order_Label_B8_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(8));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::MS_Order_Label_B9_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearArray();
	MS_Order_B_Function(MS_Perfer_CSA->GetAt(9));
	UpdateData(FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	//Turn_Of_Window(MS_Order_Menu_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}

//void CMFC_Test1Dlg::OnBnClickedButton17()
//{
//	// TODO:  在此添加控件通知处理程序代码
//	CImage cim;
//	cim.Load(TEXT("F:\\VSproject\\MFC_project\\0428test\\MFC_Test1\\MFC_Test1\\res\\image.jpg"));
//	HBITMAP hbmp = cim.Detach();
//	m_picture2.SetBitmap(hbmp);
//	m_picture2.SetWindowPos(NULL, 0, 0, 192, 78, SWP_NOACTIVATE | SWP_NOMOVE | SWP_NOZORDER);
//}

void CLSMenuSystemDlg::MS_Order_MenuImage_B00_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P00_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P00_IDC.ShowWindow(TRUE);
		/**Price_ptr += MS_Order_Price_I00;
		MS_Order_Price_T_IDC.ShowWindow(FALSE);
		MS_Order_Price_T_V.Format(TEXT("%d"), Price);
		UpdateData(FALSE);
		MS_Order_Price_T_IDC.ShowWindow(TRUE);*/
	}
	else
		MS_Order_MenuImagePitch_P00_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B01_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P01_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P01_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P01_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B02_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P02_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P02_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P02_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B03_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P03_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P03_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P03_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B10_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P10_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P10_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P10_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B11_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P11_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P11_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P11_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B12_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P12_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P12_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P12_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B13_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P13_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P13_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P13_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B20_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P20_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P20_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P20_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B21_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P21_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P21_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P21_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B22_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P22_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P22_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P22_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::MS_Order_MenuImage_B23_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!MS_Order_MenuImagePitch_P23_IDC.IsWindowVisible())
	{
		MS_Order_MenuImagePitch_P23_IDC.ShowWindow(TRUE);
	}
	else
		MS_Order_MenuImagePitch_P23_IDC.ShowWindow(FALSE);
}
void CLSMenuSystemDlg::ClearArray()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			MS_Order_Menu_Window_I[i][j] = 0;
		}
	}
}