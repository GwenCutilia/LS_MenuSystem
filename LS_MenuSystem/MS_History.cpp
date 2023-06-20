#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 


void CLSMenuSystemDlg::MS_History_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	CString MS_History_User_Temp = MS_User_CS;

	CString MS_History_Detail_Temp_Sql = TEXT("select Menuname from History where Username = '") + MS_History_User_Temp + TEXT("'");
	_RecordsetPtr MS_History_Detail_Temp_RP = pMyConnect->Execute(_bstr_t(MS_History_Detail_Temp_Sql), NULL, adCmdText);
	CString MS_History_Detail_Temp_CS;

	CString MS_History_Consume_Temp_Sql = TEXT("select Price from History where Username = '") + MS_History_User_Temp + TEXT("'");
	_RecordsetPtr MS_History_Consume_Temp_RP = pMyConnect->Execute(_bstr_t(MS_History_Consume_Temp_Sql), NULL, adCmdText);
	CString MS_History_Consume_Temp_CS;

	CString MS_History_Time_Temp_Sql = TEXT("select Time from History where Username = '") + MS_History_User_Temp + TEXT("'");
	_RecordsetPtr MS_History_Time_Temp_RP = pMyConnect->Execute(_bstr_t(MS_History_Time_Temp_Sql), NULL, adCmdText);
	CString MS_History_Time_Temp_CS;

	for (int i = 0; i <= 9 && (!MS_History_Time_Temp_RP->adoEOF); i++)
	{
		MS_History_Detail_Temp_CS = (TCHAR*)(_bstr_t)MS_History_Detail_Temp_RP->GetFields()->GetItem("Menuname")->Value;
		MS_History_Detail_Temp_CS.TrimRight();

		MS_History_Consume_Temp_CS = (TCHAR*)(_bstr_t)MS_History_Consume_Temp_RP->GetFields()->GetItem("Price")->Value;
		MS_History_Consume_Temp_CS.TrimRight();

		MS_History_Time_Temp_CS = (TCHAR*)(_bstr_t)MS_History_Time_Temp_RP->GetFields()->GetItem("Time")->Value;
		MS_History_Time_Temp_CS.TrimRight();

		if (i == 0)
		{
			MS_History_Detail_T0_IDC.ShowWindow(TRUE);
			MS_History_Consume_T0_IDC.ShowWindow(TRUE);
			MS_History_Time_T0_IDC.ShowWindow(TRUE);
			MS_History_Delete_B0_IDC.ShowWindow(TRUE);
			MS_History_Detail_T0_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T0_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T0_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T0_IDC.ShowWindow(TRUE);
			MS_History_Consume_T0_IDC.ShowWindow(TRUE);
			MS_History_Time_T0_IDC.ShowWindow(TRUE);
			MS_History_Delete_B0_IDC.ShowWindow(TRUE);
		}
		if (i == 1)
		{
			MS_History_Detail_T1_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T1_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T1_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T1_IDC.ShowWindow(TRUE);
			MS_History_Consume_T1_IDC.ShowWindow(TRUE);
			MS_History_Time_T1_IDC.ShowWindow(TRUE);
			MS_History_Delete_B1_IDC.ShowWindow(TRUE);
		}
		if (i == 2)
		{
			MS_History_Detail_T2_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T2_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T2_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T2_IDC.ShowWindow(TRUE);
			MS_History_Consume_T2_IDC.ShowWindow(TRUE);
			MS_History_Time_T2_IDC.ShowWindow(TRUE);
			MS_History_Delete_B2_IDC.ShowWindow(TRUE);
		}
		if (i == 3)
		{
			MS_History_Detail_T3_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T3_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T3_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T3_IDC.ShowWindow(TRUE);
			MS_History_Consume_T3_IDC.ShowWindow(TRUE);
			MS_History_Time_T3_IDC.ShowWindow(TRUE);
			MS_History_Delete_B3_IDC.ShowWindow(TRUE);
		}
		if (i == 4)
		{
			MS_History_Detail_T4_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T4_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T4_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T4_IDC.ShowWindow(TRUE);
			MS_History_Consume_T4_IDC.ShowWindow(TRUE);
			MS_History_Time_T4_IDC.ShowWindow(TRUE);
			MS_History_Delete_B4_IDC.ShowWindow(TRUE);
		}
		if (i == 5)
		{
			MS_History_Detail_T5_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T5_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T5_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T5_IDC.ShowWindow(TRUE);
			MS_History_Consume_T5_IDC.ShowWindow(TRUE);
			MS_History_Time_T5_IDC.ShowWindow(TRUE);
			MS_History_Delete_B5_IDC.ShowWindow(TRUE);
		}
		if (i == 6)
		{
			MS_History_Detail_T6_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T6_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T6_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T6_IDC.ShowWindow(TRUE);
			MS_History_Consume_T6_IDC.ShowWindow(TRUE);
			MS_History_Time_T6_IDC.ShowWindow(TRUE);
			MS_History_Delete_B6_IDC.ShowWindow(TRUE);
		}
		if (i == 7)
		{
			MS_History_Detail_T7_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T7_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T7_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T7_IDC.ShowWindow(TRUE);
			MS_History_Consume_T7_IDC.ShowWindow(TRUE);
			MS_History_Time_T7_IDC.ShowWindow(TRUE);
			MS_History_Delete_B7_IDC.ShowWindow(TRUE);
		}
		if (i == 8)
		{
			MS_History_Detail_T8_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T8_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T8_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T8_IDC.ShowWindow(TRUE);
			MS_History_Consume_T8_IDC.ShowWindow(TRUE);
			MS_History_Time_T8_IDC.ShowWindow(TRUE);
			MS_History_Delete_B8_IDC.ShowWindow(TRUE);
		}
		if (i == 9)
		{
			MS_History_Detail_T9_V = MS_History_Detail_Temp_CS;
			MS_History_Consume_T9_V = MS_History_Consume_Temp_CS;
			MS_History_Time_T9_V = MS_History_Time_Temp_CS;
			UpdateData(FALSE);
			MS_History_Detail_T9_IDC.ShowWindow(TRUE);
			MS_History_Consume_T9_IDC.ShowWindow(TRUE);
			MS_History_Time_T9_IDC.ShowWindow(TRUE);
			MS_History_Delete_B9_IDC.ShowWindow(TRUE);
		}
		MS_History_Detail_Temp_RP->MoveNext();
		MS_History_Consume_Temp_RP->MoveNext();
		MS_History_Time_Temp_RP->MoveNext();
	}

	MS_DayRecom_T_IDC.ShowWindow(FALSE);
	MS_DayRecom_T_V = TEXT("历史界面");
	UpdateData(FALSE);
	MS_DayRecom_T_IDC.ShowWindow(TRUE);

	Turn_Of_Window(MS_Search_Window, FALSE);
	Turn_Of_Window(MS_SearchMenu_Window, FALSE);
	Turn_Of_Window(MS_History_Window, TRUE);
	//Turn_Of_Window(MS_HistoryMenu_Window, FALSE);
	Turn_Of_Window(MS_Order_Window, FALSE);
	Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
	Turn_Of_Window(MS_Order_Shopping_Window, FALSE);
	Turn_Of_Window(MS_Order_ShoppingMenu_Window, FALSE);
	Turn_Of_Window(MS_Seting_Window, FALSE);
}

void CLSMenuSystemDlg::MS_History_Delete_B0_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T0_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B0_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B0_CLI_Function()
{
	MS_History_Detail_T0_V = MS_History_Detail_T1_V;
	MS_History_Consume_T0_V = MS_History_Consume_T1_V;
	MS_History_Time_T0_V = MS_History_Time_T1_V;
	MS_History_Delete_B1_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B1_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T1_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B1_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B1_CLI_Function()
{
	MS_History_Detail_T1_V = MS_History_Detail_T2_V;
	MS_History_Consume_T1_V = MS_History_Consume_T2_V;
	MS_History_Time_T1_V = MS_History_Time_T2_V;
	MS_History_Delete_B2_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B2_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T2_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B2_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B2_CLI_Function()
{
	MS_History_Detail_T2_V = MS_History_Detail_T3_V;
	MS_History_Consume_T2_V = MS_History_Consume_T3_V;
	MS_History_Time_T2_V = MS_History_Time_T3_V;
	MS_History_Delete_B3_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B3_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T3_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B3_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B3_CLI_Function()
{
	MS_History_Detail_T3_V = MS_History_Detail_T4_V;
	MS_History_Consume_T3_V = MS_History_Consume_T4_V;
	MS_History_Time_T3_V = MS_History_Time_T4_V;
	MS_History_Delete_B4_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B4_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T4_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B4_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B4_CLI_Function()
{
	MS_History_Detail_T4_V = MS_History_Detail_T5_V;
	MS_History_Consume_T4_V = MS_History_Consume_T5_V;
	MS_History_Time_T4_V = MS_History_Time_T5_V;
	MS_History_Delete_B5_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B5_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T5_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B5_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B5_CLI_Function()
{
	MS_History_Detail_T5_V = MS_History_Detail_T6_V;
	MS_History_Consume_T5_V = MS_History_Consume_T6_V;
	MS_History_Time_T5_V = MS_History_Time_T6_V;
	MS_History_Delete_B6_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B6_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T6_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B6_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B6_CLI_Function()
{
	MS_History_Detail_T6_V = MS_History_Detail_T7_V;
	MS_History_Consume_T6_V = MS_History_Consume_T7_V;
	MS_History_Time_T6_V = MS_History_Time_T7_V;
	MS_History_Delete_B7_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B7_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T7_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B7_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B7_CLI_Function()
{
	MS_History_Detail_T7_V = MS_History_Detail_T8_V;
	MS_History_Consume_T7_V = MS_History_Consume_T8_V;
	MS_History_Time_T7_V = MS_History_Time_T8_V;
	MS_History_Delete_B8_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B8_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T8_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B8_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B8_CLI_Function()
{
	MS_History_Detail_T8_V = MS_History_Detail_T9_V;
	MS_History_Consume_T8_V = MS_History_Consume_T9_V;
	MS_History_Time_T8_V = MS_History_Time_T9_V;
	MS_History_Delete_B9_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B9_CLI()
{
	// TODO: 在此添加控件通知处理程序代码

	MS_Sql_CS = TEXT("delete from History where Time='") + MS_History_Time_T9_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_History_Delete_B9_CLI_Function();
}
void CLSMenuSystemDlg::MS_History_Delete_B9_CLI_Function()
{
	Turn_Of_Window(MS_HistoryMenu_Window, FALSE);
	MS_History_Detail_T9_V = "";
	MS_History_Consume_T9_V = "";
	MS_History_Time_T9_V = "";
	UpdateData(FALSE);
	Turn_Of_Window(MS_HistoryMenu_Window, TRUE);
}