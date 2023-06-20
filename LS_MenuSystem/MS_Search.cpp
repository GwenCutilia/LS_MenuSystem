#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

//在进入搜索界面的时候推荐打折商品
afx_msg void CLSMenuSystemDlg::MS_Search_B_CLI()
{
	MS_DayRecom_T_IDC.ShowWindow(FALSE);
	MS_DayRecom_T_V = TEXT("搜索界面");
	UpdateData(FALSE);
	MS_DayRecom_T_IDC.ShowWindow(TRUE);

	Turn_Of_Window(MS_Search_Window, TRUE);
	Turn_Of_Window(MS_SearchMenu_Window, FALSE);
	Turn_Of_Window(MS_History_Window, FALSE);
	Turn_Of_Window(MS_HistoryMenu_Window, FALSE);
	Turn_Of_Window(MS_Order_Window, FALSE);
	Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
	Turn_Of_Window(MS_Order_Shopping_Window, FALSE);
	Turn_Of_Window(MS_Order_ShoppingMenu_Window, FALSE);
	Turn_Of_Window(MS_Seting_Window, FALSE);
}

void CLSMenuSystemDlg::MS_Search_Lookup_B_CLI()
{
	UpdateData(TRUE);
	CString MS_Search_Lookup_ET_CS = MS_Search_Lookup_ET_V;
	CStringArray MS_Search_Lookup_ET_CSA[20], MS_Search_MenuInformation_CSA[20];
	int i = 0, j = 0, Lookup_i = 0, MenuInformation_j = 0;
	MS_Search_Lookup_ET_CS += TEXT(" ");
	//拆分搜索框里键入的文本装入到MS_Search_Lookup_ET_CSA中
	while (MS_Search_Lookup_ET_CS.Find(TEXT(" ")) + 1)
	{
		MS_Search_Lookup_ET_CSA->Add(MS_Search_Lookup_ET_CS.Left(MS_Search_Lookup_ET_CS.Find(TEXT(" "))));
		MS_Search_Lookup_ET_CS.Delete(0, MS_Search_Lookup_ET_CS.Find(TEXT(" ")) + 1);
		Lookup_i++;
	}
	//数据库提取菜单的关键词存到MS_Search_MenuInformation_CSA里
	MS_Search_Lookup_ET_CSA->GetCount();
	CString MS_Seach_MenuInformation_Temp_Sql = TEXT("select MenuInformation from Menu");
	_RecordsetPtr MS_Seach_MenuInformation_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Seach_MenuInformation_Temp_Sql), NULL, adCmdText);
	CString MS_Seach_MenuInformation_Temp = (TCHAR *)(_bstr_t)MS_Seach_MenuInformation_Temp_RP->GetFields()->GetItem("MenuInformation")->Value;
	CString MS_Seach_MenuInformation_Temp_CS = MS_Seach_MenuInformation_Temp;//储存原始数据库的关键词

	CString MS_Seach_MenuName_Temp_Sql, MS_Seach_MenuImagePath_Temp_Sql;
	_RecordsetPtr MS_Seach_MenuName_Temp_RP, MS_Seach_MenuImagePath_Temp_RP;
	CString MS_Seach_MenuName_Temp_CS, MS_Seach_MenuImagePath_Temp_CS;
	CString MS_Search_Lookup_ET_CSATemp, MS_Search_MenuInformation_CSA_CSTemp;
	//分割数据库的关键词
	MS_Seach_MenuInformation_Temp_CS.Delete(MS_Seach_MenuInformation_Temp_CS.Find(TEXT("  ")) + 1, MS_Seach_MenuInformation_Temp_CS.GetLength());
	while (MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")) + 1)
	{
		MS_Search_MenuInformation_CSA->Add(MS_Seach_MenuInformation_Temp_CS.Left(MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" "))));
		MS_Seach_MenuInformation_Temp_CS.Delete(0, MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")) + 1);
		MenuInformation_j++;
	}
	MS_Seach_MenuInformation_Temp_CS.Delete(MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")), MS_Seach_MenuInformation_Temp_CS.GetLength());
	Turn_Of_Window(MS_SearchMenu_Window, FALSE);
	//对比文本框的关键词和数据库的关键词
	do
	{
		for (j = 0; j < MenuInformation_j; j++)
		{
			MS_Search_Lookup_ET_CSATemp = MS_Search_Lookup_ET_CSA->GetAt(i);
			MS_Search_MenuInformation_CSA_CSTemp = MS_Search_MenuInformation_CSA->GetAt(j);
			if ((MS_Search_Lookup_ET_CSATemp.Compare(MS_Search_MenuInformation_CSA_CSTemp) == 0))
			{
				MS_Seach_MenuName_Temp_Sql = TEXT("select Menuname from Menu where MenuInformation = '") + MS_Seach_MenuInformation_Temp + TEXT("'");
				MS_Seach_MenuName_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Seach_MenuName_Temp_Sql), NULL, adCmdText);
				MS_Seach_MenuName_Temp_CS = (TCHAR *)(_bstr_t)MS_Seach_MenuName_Temp_RP->GetFields()->GetItem("Menuname")->Value;
				MS_Seach_MenuName_Temp_CS.Delete(MS_Seach_MenuName_Temp_CS.Find(TEXT(" ")), MS_Seach_MenuName_Temp_CS.GetLength());
				MS_Seach_MenuImagePath_Temp_Sql = TEXT("select MenuImagePath from Menu where MenuInformation = '") + MS_Seach_MenuInformation_Temp + TEXT("'");
				MS_Seach_MenuImagePath_Temp_RP = pMyConnect->Execute(_bstr_t(MS_Seach_MenuImagePath_Temp_Sql), NULL, adCmdText);
				MS_Seach_MenuImagePath_Temp_CS = (TCHAR *)(_bstr_t)MS_Seach_MenuImagePath_Temp_RP->GetFields()->GetItem("MenuImagePath")->Value;
				MS_Seach_MenuImagePath_Temp_CS.Delete(MS_Seach_MenuImagePath_Temp_CS.Find(TEXT(" ")), MS_Seach_MenuImagePath_Temp_CS.GetLength());
				if (!MS_Search_Lookup_P00_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T00_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P00_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P00_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P00_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T00_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P01_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T01_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P01_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P01_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P01_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T01_IDC.ShowWindow(TRUE);
					
				}
				else if (!MS_Search_Lookup_P02_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T02_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P02_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P02_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P02_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T02_IDC.ShowWindow(TRUE);

				}
				else if (!MS_Search_Lookup_P03_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T03_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P03_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P03_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P03_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T03_IDC.ShowWindow(TRUE);

				}
				else if (!MS_Search_Lookup_P04_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T04_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P04_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P04_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P04_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T04_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P10_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T10_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P10_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P10_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P10_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T10_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P11_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T11_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P11_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P11_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P11_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T11_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P12_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T12_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P12_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P12_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P12_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T12_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P13_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T13_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P13_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P13_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P13_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T13_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P14_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T14_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P14_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P14_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P14_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T14_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P20_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T20_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P20_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P20_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P20_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T20_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P21_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T21_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P21_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P21_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P21_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T21_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P22_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T22_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P22_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P22_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P22_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T22_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P23_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T23_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P23_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P23_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P23_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T23_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P24_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T24_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P24_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P24_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P24_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T24_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P30_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T30_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P30_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P30_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P30_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T30_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P31_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T31_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P31_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P31_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P31_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T31_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P32_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T32_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P32_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P32_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P32_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T32_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P33_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T33_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P33_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P33_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P33_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T33_IDC.ShowWindow(TRUE);
				}
				else if (!MS_Search_Lookup_P34_IDC.IsWindowVisible())
				{
					MS_Search_Lookup_T34_V = MS_Seach_MenuName_Temp_CS;
					MS_Search_Lookup_P34_IDC.GetWindowRect(Rect);
					MS_Search_Lookup_P34_IDC.SetBitmap(HBMP(MS_Seach_MenuImagePath_Temp_CS, Rect.Width(), Rect.Height()));
					UpdateData(FALSE);
					MS_Search_Lookup_P34_IDC.ShowWindow(TRUE);
					MS_Search_Lookup_T34_IDC.ShowWindow(TRUE);
				}
			}
		}
		if (!MS_Seach_MenuInformation_Temp_RP->adoEOF)
		{
			//如果指针没到底部则重置数据库数数量的标志位
			MenuInformation_j = 0;
		}
		MS_Seach_MenuInformation_Temp_RP->MoveNext();

		if (MS_Seach_MenuInformation_Temp_RP->adoEOF)
		{
			//找到全部的第一个关键词才找下一个关键词, 将指针移动到数据库顶端重新查找
			i++;
			MS_Seach_MenuInformation_Temp_RP->MoveFirst();
		}
		MS_Search_MenuInformation_CSA->RemoveAll();
		MS_Seach_MenuInformation_Temp = (TCHAR *)(_bstr_t)MS_Seach_MenuInformation_Temp_RP->GetFields()->GetItem("MenuInformation")->Value;
		MS_Seach_MenuInformation_Temp_CS = MS_Seach_MenuInformation_Temp;

		MS_Seach_MenuInformation_Temp_CS.Delete(MS_Seach_MenuInformation_Temp_CS.Find(TEXT("  ")) + 1, MS_Seach_MenuInformation_Temp_CS.GetLength());
		while (MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")) + 1)
		{
			MS_Search_MenuInformation_CSA->Add(MS_Seach_MenuInformation_Temp_CS.Left(MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" "))));
			MS_Seach_MenuInformation_Temp_CS.Delete(0, MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")) + 1);
			MenuInformation_j++;
		}
		MS_Seach_MenuInformation_Temp_CS.Delete(MS_Seach_MenuInformation_Temp_CS.Find(TEXT(" ")), MS_Seach_MenuInformation_Temp_CS.GetLength());
	} 
	while (i < Lookup_i && !MS_Seach_MenuInformation_Temp_RP->adoEOF);
}
