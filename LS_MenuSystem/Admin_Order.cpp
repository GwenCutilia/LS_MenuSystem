#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

int Count = 0;
//全局食谱按钮
void CLSMenuSystemDlg::Admin_Order_B_CLI()
{

	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(0));
#define HBMP(filepath, width, height) (HBITMAP)LoadImage(AfxGetInstanceHandle(), filepath, IMAGE_BITMAP, width, height, LR_LOADFROMFILE | LR_CREATEDIBSECTION)
	MS_DayRecom_T_IDC.ShowWindow(FALSE);
	MS_DayRecom_T_V = TEXT("全局食谱界面 - 管理员");
	UpdateData(FALSE);
	MS_DayRecom_T_IDC.ShowWindow(TRUE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	//Turn_Of_Window(Admin_OrderMenu_Window, FALSE);
	Turn_Of_Window(Admin_UserManage_Window, FALSE);
	Turn_Of_Window(Admin_UserManageMenu_Window, FALSE);
	Turn_Of_Window(Admin_Setting_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_B_Function(CString Perfer)
{

	//初始化sql语句并给指针赋值查询结果
	CString Admin_Order_MenuName_Temp_Sql = TEXT("select Menuname from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr Admin_Order_MenuName_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_Order_MenuName_Temp_Sql), NULL, adCmdText);
	CString Admin_Order_MenuName_Temp_CS;
	std::string Admin_Order_MenuName_Temp_S;

	CString Admin_Order_MenuPrice_Temp_Sql = TEXT("select MenuPrice from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr Admin_Order_MenuPrice_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_Order_MenuPrice_Temp_Sql), NULL, adCmdText);
	CString Admin_Order_MenuPrice_Temp_CS;
	std::string  Admin_Order_MenuPrice_Temp_S;

	CString Admin_Order_MenuSpecs_Temp_Sql = TEXT("select MenuSpecs from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr Admin_Order_MenuSpecs_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_Order_MenuSpecs_Temp_Sql), NULL, adCmdText);
	CString Admin_Order_MenuSpecs_Temp_CS;
	std::string Admin_Order_MenuSpecs_Temp_S;

	CString Admin_Order_MenuImagePath_Temp_Sql = TEXT("select MenuImagePath from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr Admin_Order_MenuImagePath_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_Order_MenuImagePath_Temp_Sql), NULL, adCmdText);
	CString Admin_Order_MenuImagePath_Temp_CS;
	std::string Admin_Order_MenuImagePath_Temp_S;

	CString Admin_Order_MenuInformation_Temp_Sql = TEXT("select MenuInformation from Menu where Perfer = '") + Perfer + TEXT("'");
	_RecordsetPtr Admin_Order_MenuInformation_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_Order_MenuInformation_Temp_Sql), NULL, adCmdText);
	CString Admin_Order_MenuInformation_Temp_CS;
	std::string Admin_Order_MenuInformation_Temp_S;
	//遍历组件
	Turn_Of_Window(Admin_OrderMenu_Window, FALSE);
	for (int i = 0; i < 3 && (!Admin_Order_MenuName_Temp_RP->adoEOF); i++)
	{
		for (int j = 0; j < 4 && (!Admin_Order_MenuName_Temp_RP->adoEOF); j++)
		{
			Admin_Order_MenuName_Temp_CS = (TCHAR*)(_bstr_t)Admin_Order_MenuName_Temp_RP->GetFields()->GetItem("Menuname")->Value;
			Admin_Order_MenuName_Temp_S = CT2A(Admin_Order_MenuName_Temp_CS.GetString());
			if (!Admin_Order_MenuName_Temp_S.empty())
			{
				Admin_Order_MenuName_Temp_S.erase(Admin_Order_MenuName_Temp_S.find_last_not_of(" ") + 1);
			}
			Admin_Order_MenuName_Temp_CS = CA2T(Admin_Order_MenuName_Temp_S.c_str());

			Admin_Order_MenuPrice_Temp_CS = (TCHAR*)(_bstr_t)Admin_Order_MenuPrice_Temp_RP->GetFields()->GetItem("MenuPrice")->Value;
			Admin_Order_MenuPrice_Temp_S = CT2A(Admin_Order_MenuPrice_Temp_CS.GetString());
			if (!Admin_Order_MenuPrice_Temp_S.empty())
			{
				Admin_Order_MenuPrice_Temp_S.erase(Admin_Order_MenuPrice_Temp_S.find_last_not_of(" ") + 1);
			}
			Admin_Order_MenuPrice_Temp_CS = CA2T(Admin_Order_MenuPrice_Temp_S.c_str());

			Admin_Order_MenuSpecs_Temp_CS = (TCHAR*)(_bstr_t)Admin_Order_MenuSpecs_Temp_RP->GetFields()->GetItem("MenuSpecs")->Value;
			Admin_Order_MenuSpecs_Temp_S = CT2A(Admin_Order_MenuSpecs_Temp_CS.GetString());
			if (!Admin_Order_MenuSpecs_Temp_S.empty())
			{
				Admin_Order_MenuSpecs_Temp_S.erase(Admin_Order_MenuSpecs_Temp_S.find_last_not_of(" ") + 1);
			}
			Admin_Order_MenuSpecs_Temp_CS = CA2T(Admin_Order_MenuSpecs_Temp_S.c_str());

			Admin_Order_MenuImagePath_Temp_CS = (TCHAR*)(_bstr_t)Admin_Order_MenuImagePath_Temp_RP->GetFields()->GetItem("MenuImagePath")->Value;
			Admin_Order_MenuImagePath_Temp_S = CT2A(Admin_Order_MenuImagePath_Temp_CS.GetString());
			if (!Admin_Order_MenuImagePath_Temp_S.empty())
			{
				Admin_Order_MenuImagePath_Temp_S.erase(Admin_Order_MenuImagePath_Temp_S.find_last_not_of(" ") + 1);
			}
			Admin_Order_MenuImagePath_Temp_CS = CA2T(Admin_Order_MenuImagePath_Temp_S.c_str());

			Admin_Order_MenuInformation_Temp_CS = (TCHAR*)(_bstr_t)Admin_Order_MenuInformation_Temp_RP->GetFields()->GetItem("MenuInformation")->Value;
			Admin_Order_MenuInformation_Temp_S = CT2A(Admin_Order_MenuInformation_Temp_CS.GetString());
			if (!Admin_Order_MenuInformation_Temp_S.empty())
			{
				Admin_Order_MenuInformation_Temp_S.erase(Admin_Order_MenuInformation_Temp_S.find_last_not_of(" ") + 1);
			}
			Admin_Order_MenuInformation_Temp_CS = CA2T(Admin_Order_MenuInformation_Temp_S.c_str());

			if (i == 0 && j == 0)
			{
				Admin_Order_MenuName_T00_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS00 = Admin_Order_MenuName_T00_V;
				Admin_Order_Price_I00 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T00_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS00 = Admin_Order_MenuPrice_T00_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T00), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B00_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B00_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B00_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T00_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T00_IDC.ShowWindow(TRUE);
			}
			else if (i == 0 && j == 1)
			{
				Admin_Order_MenuName_T01_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS01 = Admin_Order_MenuName_T01_V;
				Admin_Order_Price_I01 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T01_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS01 = Admin_Order_MenuPrice_T01_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T01), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B01_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B01_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B01_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T01_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T01_IDC.ShowWindow(TRUE);
			}
			else if (i == 0 && j == 2)
			{
				Admin_Order_MenuName_T02_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS02 = Admin_Order_MenuName_T02_V;
				Admin_Order_Price_I02 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T02_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS02 = Admin_Order_MenuPrice_T02_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T02), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B02_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B02_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B02_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T02_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T02_IDC.ShowWindow(TRUE);
			}
			else if (i == 0 && j == 3)
			{
				Admin_Order_MenuName_T03_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS03 = Admin_Order_MenuName_T03_V;
				Admin_Order_Price_I03 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T03_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS03 = Admin_Order_MenuPrice_T03_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T03), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B03_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B03_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B03_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T03_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T03_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 0)
			{
				Admin_Order_MenuName_T10_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS10 = Admin_Order_MenuName_T10_V;
				Admin_Order_Price_I10 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T10_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS10 = Admin_Order_MenuPrice_T10_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T10), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B10_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B10_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B10_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T10_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T10_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 1)
			{
				Admin_Order_MenuName_T11_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS11 = Admin_Order_MenuName_T11_V;
				Admin_Order_Price_I11 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T11_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS11 = Admin_Order_MenuPrice_T11_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T11), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B11_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B11_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B11_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T11_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T11_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 2)
			{
				Admin_Order_MenuName_T12_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS12 = Admin_Order_MenuName_T12_V;
				Admin_Order_Price_I12 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T12_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS12 = Admin_Order_MenuPrice_T12_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T12), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B12_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B12_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B12_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T12_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T12_IDC.ShowWindow(TRUE);
			}
			if (i == 1 && j == 3)
			{
				Admin_Order_MenuName_T13_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS13 = Admin_Order_MenuName_T13_V;
				Admin_Order_Price_I13 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T13_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS13 = Admin_Order_MenuPrice_T13_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T13), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B13_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B13_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B13_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T13_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T13_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 0)
			{
				Admin_Order_MenuName_T20_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS20 = Admin_Order_MenuName_T20_V;
				Admin_Order_Price_I20 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T20_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS20 = Admin_Order_MenuPrice_T20_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T20), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B20_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B20_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B20_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T20_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T20_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 1)
			{
				Admin_Order_MenuName_T21_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS21 = Admin_Order_MenuName_T21_V;
				Admin_Order_Price_I21 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T21_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS21 = Admin_Order_MenuPrice_T21_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T21), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B21_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B21_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B21_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T21_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T21_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 2)
			{
				Admin_Order_MenuName_T22_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS22 = Admin_Order_MenuName_T22_V;
				Admin_Order_Price_I22 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T22_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS22 = Admin_Order_MenuPrice_T22_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T22), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B22_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B22_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B22_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T22_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T22_IDC.ShowWindow(TRUE);
			}
			if (i == 2 && j == 3)
			{
				Admin_Order_MenuName_T23_V = Admin_Order_MenuName_Temp_CS;
				Admin_Order_MenuName_CS23 = Admin_Order_MenuName_T23_V;
				Admin_Order_Price_I23 = (int)_ttof(Admin_Order_MenuPrice_Temp_CS);
				Admin_Order_MenuPrice_T23_V = TEXT("$ ") + Admin_Order_MenuPrice_Temp_CS + TEXT(" /") + Admin_Order_MenuSpecs_Temp_CS;
				Admin_Order_MenuPrice_CS23 = Admin_Order_MenuPrice_T23_V;
				Ttc.AddTool(GetDlgItem(Admin_Order_MenuName_T23), Admin_Order_MenuInformation_Temp_CS);
				Admin_Order_MenuImage_B23_IDC.GetWindowRect(Rect);
				Admin_Order_MenuImage_B23_IDC.SetBitmap(HBMP(Admin_Order_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
				Admin_Order_MenuImage_B23_IDC.ShowWindow(TRUE);
				Admin_Order_MenuName_T23_IDC.ShowWindow(TRUE);
				Admin_Order_MenuPrice_T23_IDC.ShowWindow(TRUE);
			}
			Admin_Order_MenuName_Temp_RP->MoveNext();
			Admin_Order_MenuPrice_Temp_RP->MoveNext();
			Admin_Order_MenuSpecs_Temp_RP->MoveNext();
			Admin_Order_MenuImagePath_Temp_RP->MoveNext();
			Admin_Order_MenuInformation_Temp_RP->MoveNext();
		}
	}
	UpdateData(FALSE);
}
//类别标签页监听事件
void CLSMenuSystemDlg::Admin_Order_Label_B0_CLI()
{
	// TODO: 在此添加控件通知处理程序代码

	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(0));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B1_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(1));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B2_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(2));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B3_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(3));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B4_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(4));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B5_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(5));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B6_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(6));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B7_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(7));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B8_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(8));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
void CLSMenuSystemDlg::Admin_Order_Label_B9_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Admin_Order_B_Function(MS_Perfer_CSA->GetAt(9));
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
}
//删除按钮监听事件
void CLSMenuSystemDlg::Admin_Order_DeleteOrder_B_CLI()
{
	Turn_Of_Window(Admin_Order_Window, FALSE);
	LS_Tip_T_IDC.ShowWindow(FALSE);
	LS_Tip_T_V = "";
	UpdateData(FALSE);
	LS_Tip_T_IDC.ShowWindow(TRUE);
	if (Count > 1)
	{
		LS_Tip_T_V += TEXT("已删除多项: ");
	}
	if (Admin_Order_MenuImagePitch_P23_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T23_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T23_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P23_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P22_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T22_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T22_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P22_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P21_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T21_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T21_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P21_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P20_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T20_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T20_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P20_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P13_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T13_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T13_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P13_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P12_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T12_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T12_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P12_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P11_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T11_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T11_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P11_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P10_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T10_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T10_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P10_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P03_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T03_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T03_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P03_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P02_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T02_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T02_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P02_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P01_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T01_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T01_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P01_IDC_Function();
	}
	if (Admin_Order_MenuImagePitch_P00_IDC.IsWindowVisible())
	{
		MS_Sql_CS = TEXT("Delete from Menu where Menuname = '") + Admin_Order_MenuName_T00_V + TEXT("'");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
		LS_Tip_T_V += TEXT(" 已删除") + Admin_Order_MenuName_T00_V + TEXT(" ");
		Admin_Order_MenuImagePitch_P00_IDC_Function();
	}
	
	MS_Sql_CS = TEXT("Select * from Menu");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	Count = 0;
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_MenuImagePitch_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
	Turn_Of_Window(Admin_OrderMenu_Window, FALSE);
}
//队列补齐删除的食谱
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P00_IDC_Function()
{
	Admin_Order_MenuName_T00_V = Admin_Order_MenuName_T01_V;
	Admin_Order_MenuPrice_T00_V = Admin_Order_MenuPrice_T01_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T01_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B00_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B00_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P01_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P01_IDC_Function()
{
	Admin_Order_MenuName_T01_V = Admin_Order_MenuName_T02_V;
	Admin_Order_MenuPrice_T01_V = Admin_Order_MenuPrice_T02_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T02_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B01_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B01_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P02_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P02_IDC_Function()
{
	Admin_Order_MenuName_T02_V = Admin_Order_MenuName_T03_V;
	Admin_Order_MenuPrice_T02_V = Admin_Order_MenuPrice_T03_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T03_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B02_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B02_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P03_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P03_IDC_Function()
{
	Admin_Order_MenuName_T03_V = Admin_Order_MenuName_T10_V;
	Admin_Order_MenuPrice_T03_V = Admin_Order_MenuPrice_T10_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T10_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B03_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B03_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P10_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P10_IDC_Function()
{
	Admin_Order_MenuName_T10_V = Admin_Order_MenuName_T11_V;
	Admin_Order_MenuPrice_T10_V = Admin_Order_MenuPrice_T11_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T11_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B10_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B10_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P11_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P11_IDC_Function()
{
	Admin_Order_MenuName_T11_V = Admin_Order_MenuName_T12_V;
	Admin_Order_MenuPrice_T11_V = Admin_Order_MenuPrice_T12_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T12_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B11_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B11_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P12_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P12_IDC_Function()
{
	Admin_Order_MenuName_T12_V = Admin_Order_MenuName_T13_V;
	Admin_Order_MenuPrice_T12_V = Admin_Order_MenuPrice_T13_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T13_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B12_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B12_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P13_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P13_IDC_Function()
{
	Admin_Order_MenuName_T13_V = Admin_Order_MenuName_T20_V;
	Admin_Order_MenuPrice_T13_V = Admin_Order_MenuPrice_T20_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T20_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B13_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B13_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P20_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P20_IDC_Function()
{
	Admin_Order_MenuName_T20_V = Admin_Order_MenuName_T21_V;
	Admin_Order_MenuPrice_T20_V = Admin_Order_MenuPrice_T21_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T21_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B20_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B20_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P21_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P21_IDC_Function()
{
	Admin_Order_MenuName_T21_V = Admin_Order_MenuName_T22_V;
	Admin_Order_MenuPrice_T21_V = Admin_Order_MenuPrice_T22_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T22_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B21_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B21_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P22_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P22_IDC_Function()
{
	Admin_Order_MenuName_T22_V = Admin_Order_MenuName_T23_V;
	Admin_Order_MenuPrice_T22_V = Admin_Order_MenuPrice_T23_V;
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T23_V + TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;
	Admin_Order_MenuImage_B22_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B22_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Admin_Order_MenuImagePitch_P23_IDC_Function();
}
void CLSMenuSystemDlg::Admin_Order_MenuImagePitch_P23_IDC_Function()
{
	Admin_Order_MenuName_T23_V = "";
	Admin_Order_MenuPrice_T23_V = "";
	MS_Sql_CS = TEXT("select MenuImagePath from Menu where Menuname = '") + Admin_Order_MenuName_T23_V + TEXT("'");
	/*pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Temp = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("MenuImagePath")->Value;*/
	Temp = "";
	Admin_Order_MenuImage_B23_IDC.GetWindowRect(Rect);
	Admin_Order_MenuImage_B23_IDC.SetBitmap(HBMP(Temp, Rect.Width(), Rect.Height()));
	Turn_Of_Window(Admin_Order_Window, FALSE);	
	UpdateData(FALSE);
	Turn_Of_Window(Admin_Order_Window, TRUE);
}
//文件选择
void CLSMenuSystemDlg::Admin_Order_UpDataFile_B_CLI()
{
	UpdateData(TRUE);
	CFileDialog dlg(TRUE);
	if (dlg.DoModal() == IDOK)
	{
		// 获取用户选择的文件路径
		//Admin_Order_UpDataMenuImagePath_ET_IDC.ShowWindow(FALSE);
		Admin_Order_UpDataMenuImagePath_ET_V = dlg.GetPathName();
		UpdateData(FALSE);
		//Admin_Order_UpDataMenuImagePath_ET_IDC.ShowWindow(TRUE);
	}
}
//上传食谱
void CLSMenuSystemDlg::Admin_Order_UpData_B_CLI()
{
	LS_Tip_T_IDC.ShowWindow(FALSE);
	LS_Tip_T_V = "";
	UpdateData(TRUE);
	LS_Tip_T_IDC.ShowWindow(TRUE);
	MS_Sql_CS
		= TEXT("insert into Menu values('")
		+ Admin_Order_UpDataMenuname_ET_V + TEXT("','")
		+ Admin_Order_UpDataInformation_ET_V + TEXT("','")
		+ Admin_Order_UpDataPerfer_ET_V + TEXT("','")
		+ Admin_Order_UpDataMenuPrice_ET_V + TEXT("','")
		+ Admin_Order_UpDataMenuSpecs_ET_V + TEXT("','")
		+ Admin_Order_UpDataMenuImagePath_ET_V + TEXT("')");

	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);


	LS_Tip_T_V = TEXT("已上传 ") + Admin_Order_UpDataMenuname_ET_V + TEXT(" 食谱");
	UpdateData(FALSE);
	/*CString Temp;
	CStringArray Admin_Order_UpData_ET_Arr[6];
	Admin_Order_UpData_ET_V += TEXT(",");
	while (Admin_Order_UpData_ET_V.Find(TEXT(","), 0) != -1)
	{
		Temp = Admin_Order_UpData_ET_V;
		Temp.Delete(Temp.Find(TEXT(","), 0), Temp.GetLength());
		MessageBox(Temp);
		Admin_Order_UpData_ET_V.Delete(0, Admin_Order_UpData_ET_V.Find(TEXT(","), 0) + 2);
		MessageBox(Admin_Order_UpData_ET_V);
		Admin_Order_UpData_ET_Arr->Add(Temp);
	}
	if (!Admin_Order_UpData_ET_V.Find(TEXT(","), 0))
	{

	}*/
}
//食谱选择框
void CLSMenuSystemDlg::Admin_Order_MenuImage_B00_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!Admin_Order_MenuImagePitch_P00_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P00_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P00_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B01_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P01_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P01_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P01_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B02_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P02_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P02_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P02_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B03_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P03_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P03_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P03_IDC.ShowWindow(FALSE);
		Count--;
	}

}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B10_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P10_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P10_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P10_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B11_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P11_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P11_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P11_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B12_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P12_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P12_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P12_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B13_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P13_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P13_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P13_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B20_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P20_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P20_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P20_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B21_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P21_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P21_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P21_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B22_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P22_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P22_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P22_IDC.ShowWindow(FALSE);
		Count--;
	}
}
void CLSMenuSystemDlg::Admin_Order_MenuImage_B23_CLI()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (!Admin_Order_MenuImagePitch_P23_IDC.IsWindowVisible())
	{
		Admin_Order_MenuImagePitch_P23_IDC.ShowWindow(TRUE);
		Count++;
	}
	else
	{
		Admin_Order_MenuImagePitch_P23_IDC.ShowWindow(FALSE);
		Count--;
	}
}