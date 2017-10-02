#include <iostream>

using namespace std;


	void iiinaturaliii ();

	void iiisulphuriii ();
	
	void iiioxygenhydrogeniii ();
	
	void iiioxysaltiii ();

	void iiihalideiii ();

int main ()															
{
	
	

	while (1)										 			// 进行选择   【【【【【大类】】】】】
	{
		int optionx00000;

		cout << "请选择矿物大类：\n";
		cout << "1.自然元素大类\n";
		cout << "2.硫化物及其类似化合物\n";
		cout << "3.氧化物和氢氧化物\n";
		cout << "4.含氧盐\n";
		cout << "5.卤化物\n";
		cin >> optionx00000;

		switch (optionx00000)
		{
			case 1:
				iiinaturaliii();	//自然元素大类
				break;
			case 2:
				iiisulphuriii();	//硫化物及其类似化合物
				break;
			case 3:
				iiioxygenhydrogeniii();	//氧化物和氢氧化物
				break;
			case 4:
				iiioxysaltiii();	//含氧盐
				break;
			case 5:
				iiihalideiii();	//卤化物
				break;
			default:
				cout << "别闹~~请选择以上选项 XP  \n";
		}
		return 0;
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//  *****第1大类*****  自然元素 _ 选择 _ 【【【【类】】】】
//  
	void natural110000 ();
	void natural120000 ();
	void natural130000 ();
	
	void iiinaturaliii ()
	{
		while (1)
		{
			int option1x0000;
		
			cout << "请选择矿物类别：\n";
			cout << "第一类——1.自然金属元素\n";
			cout << "第二类——2.自然非金属元素\n";
			cout << "第三类——3.自然半金属元素\n";
			cin >> option1x0000

			switch(option1x0000)
			{
				case 1:
					natural110000();	//第一类——自然金属元素
					break;
				case 2:
					natural120000();	//第二类——自然非金属元素
					break;
				case 3:
					natural130000;()	//第三类——自然半金属元素
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ****第1类**** 自然金属元素 _ 选择 _ 【【【族】】】
//  
	void family110100();
	void family110200();
	
	void natural110000()											
	{
		while(1)
		{
			int option110x00;

			cout << "请选择(族类)/(矿物)： \n";
			cout << "1.自然铜族 \n";
			cout << "2.自然铂族 \n";
			cin >> option110x00;

			switch(option110x00)
			{
				case 1:
					family110100();	//自然铜族
					break;
				case 2:
					family110200();	//自然铂族
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
		
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//自然铜族 _ 选择 _ 【矿物】
//  
	void family110100()											
	{	
		while (1)
		{	
			int option11010x;

			cout << "请选择具体矿物: \n";
			cout << "1.自然铜 \n";
			cout << "2.自然金 \n";
			cin >> option11010x;

			switch (option11010x)
			{
				case 1:
					cout << " \n";	//自然铜的属性及特性
					break;
				case 2:
					cout << " \n";	//自然金的属性及其特性			
				default:
					cout << "别闹~请选择以上选项 :P  \n";						
			}
		}
		
	}

//自然铂族 _ 选择 _ 【矿物】
//  
	void family110200()											
	{
		
		while (1)
		{
			int option11020x;
		
			cout << "请选择具体矿物： \n";
			cout << "1.自然铂 \n";
			cin >> option11020x;

			switch (option11020x)
			{
				case 1:
					cout << " \n";	//自然铂的属性及其特性
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";	
			}
		}
	
	}
//___________________________________________________第1大类-第1类——自然金属元素	<编写完成>__________________________________________________//
// ****第2类**** 自然非金属元素 _ 选择 _ 【【【族】】】
// 
	void family120100 ();
	void family120200 ();
	void family120300 ();

	void natural120000()											
	{
		while(1)
		{
			int option120x00;

			cout << "请选择(族类)/(矿物)： \n";
			cout << "1.自然硫族 \n";
			cout << "2.金刚石族 \n";
			cout << "3.石墨族 \n";
			cin >> option120x00;

			switch (option120x00)
			{
				case 1:
					family120100();	//自然硫族
					break;
				case 2:
					family120200();	//金刚石族
					break;
				case 3:
					family120300();	//石墨族
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//自然硫族 _ 选择 _ 【矿物】
//
	void family120100 ()											
	{
		while(1);
		{
			int option12010x;

			cout << "请选择具体矿物： \n";
			cout << "1.自然硫\n";
			cin >> option12010x;

			switch(option12010x)
			{
				case 1:
					cout << " \n";	//自然硫属性及其特性
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}

	}

//金刚石族 _ 选择 _ 【矿物】
//
	void family120200 ()											
	{
		while (1)
		{
			int option12020x;

			cout << "请选择具体矿物： \n";
			cout << "1.金刚石 \n";
			cin >> option12020x;

			switch(option12020x)
			{
				case 1:
					cout << "\n";  // 金刚石属性及其特性
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}

	}

//石墨族 _ 选择	_ 【矿物】
//
	void family120300()											
	{
		while(1)
		{
			int option12030x();

			cout << "请选择具体矿物： \n";
			cout << "1.石墨 \n";
			cout << "2.富勒烯与纳米碳管 \n";
			cin >> option12030x;

			switch(option12030x)
			{
				case 1:
					cout << "\n";  // 石墨属性及其特性
					break;
				case 2:
					cout << " \n";	//富勒烯与纳米碳管属性及其特性
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	
	}
//___________________________________________________第1大类-第2类——自然非金属元素	<编写完成>____________________________________________________//
// ****第3类**** 自然半金属元素-选择-【【【族】】】
//	
	void family130100();

	void natural130000()											
	{
		while(1)
		{
			int option130x00;

			cout << "请选择自然元素大类-自然半金属元素类-族类 ： \n";
			cout << "1.自然铋族 \n";
			cin >> option130x00;

			switch (option130x00)
			{
				case 1:
					family130100();		//自然铋族
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//自然铋族 _ 选择 _ 【矿物】
//
	void family130100()											
	{
		while(1)
		{
			int option13010x();

			cout << "请选择具体矿物： \n";
			cout << "1.自然铋\n";
			cin >> option13010x;

			switch(option13010x)
			{
				case 1:
					cout << "\n";  // 自然铋属性及其特性
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}

	}
//___________________________________________________第1大类-第3类——自然半金属元素	<编写完成>____________________________________________________//



///
///
///
/////////////////////////////////////////////////////////	第1大类——自然元素——<编写完成>	/////////////////////////////////////////////////
///
///
///




//  *****第2大类*****  硫化物及其类似化合物 _ 选择 _ 【【【【类】】】】

	void sulphur210000();
	void sulphur220000();

	void iiisulphuriii ()
	{
		while(1)
		{
			int option2x0000;

			cout << "请选择类别： \n";
			cout << "1.第一类——简单硫化物\n";
			cout << "2.第二类——复硫化物\n";
			cin >> option2x0000;

			switch (option2x0000)
			{
				case 1:
					int sulphur210000();
					break;
				case 2:
					int sulphur220000();
					break;
				default:
					cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ****第1类**** 简单硫化物 _ 选择 _ 【【【族】】】
//  
	void family210100();
	void family210200();
	void family210300();
	void family210400();
	void family210500();
	void family210600();
	void family210700();
	void family210800();
	void family210900();
	void family2101000();
	void family2101100();
	void family2101200();

	void sulphur210000()
	{
		while(1)
		{
			int option210x00;

			cout << "请选择具体族类： \n";
			cout << "1.方铅矿族\n";
			cout << "2.闪锌矿族\n";
			cout << "3.黄铜矿族\n";
			cout << "4.磁黄铁矿族\n";
			cout << "5.铜蓝族\n";
			cout << "6.辰砂族\n";
			cout << "7.辉锑矿族\n";
			cout << "8.雌黄族\n";
			cout << "9.雄黄族\n";
			cout << "10.辉钼矿族\n";
			cout << "11.斑铜矿族\n";
			cout << "12.辉铜矿族\n";
			cin >> option210x00;

			switch (option210x00)
			{
				case 1:
					family210100();
					break;
				case 2:
					family210200();
					break;
				case 3:
					family210300();
					break;
				case 4:
					family210400();
					break;
				case 5:
					family210500();
					break;
				case 6:
					family210600();
					break;
				case 7:
					family210700();
					break;
				case 8:
					family210800();
					break;
				case 9:
					family210900();
					break;
				case 10:
					family2101000();
					break;
				case 11:
					family2101100();
					break;
				case 12:
					family2101200();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}	}
//_____________________________________________________________________完毕__________________________________________________________________//
//方铅矿族 _ 选择 _ 【矿物】
//
	void family210100()
	{
		while(1)
		{
			int option21010x;

			cout << "请选择具体矿物： \n";
			cout << "1.方铅矿 \n";
			cin >> option21010x;

			switch(option21010x)
			{
				case 1:
					cout << "\n";	//方铅矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	} 

//闪锌矿族 _ 选择 _ 【矿物】
//
	void family210200()
	{
		while(1)
		{
			int option21020x;

			cout << "请选择具体矿物： \n";
			cout << "1.闪锌矿 \n";
			cin >> option21020x;

			switch(option21020x)
			{
				case 1:
					cout << "\n";	//闪锌矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//黄铜矿族 _ 选择 _ 【矿物】
//
	void family210300()
	{
		while (1)
		{
			int option21030x;

			cout << "请选择具体矿物： \n";
			cout << "1.黄铜矿\n";
			cin >> option21030x;

			switch (option21030x)
			{
				case 1:
					cout << "\n";	//黄铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//磁黄铁矿族 _ 选择 _【矿物】
//
	void family210400()
	{
		while(1)
		{
			int option21040x;

			cout << "请选择具体矿物: \n";
			cout << "1.磁黄铁矿\n";
			cout << "2.红砷镍矿\n";
			cin >> option21040x;

			switch (option21040x)
			{
				case 1:
					cout << "\n";	//磁黄铁矿的属性及其特性
					break;
				case 2:
					cout << "\n";	//红砷镍矿的属性及其特性
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//铜蓝族 _ 选择 _ 【矿物】
//
	void family210500()
	{
		while(1)
		{
			int option21050x;

			cout << "请选择具体矿物: \n";
			cout << "1.铜蓝\n";
			cin >> option21050x;

			switch (option21050x)
			{
				case 1:
					cout << "\n";	//铜蓝的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//辰砂族 _ 选择 _ 【矿物】
//
	void family210600()
	{
		while(1)
		{
			int option210600;

			cout << "请选择具体矿物: \n";
			cout << "1.辰砂\n";
			cin >> option21060x;

			switch (option21060x)
			{
				case 1:
					cout << "\n";	//辰砂的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//辉锑矿族 _ 选择 _ 【矿物】
//
	void family210700()
	{
		while(1)
		{
			int option210700;

			cout << "请选择具体矿物: \n";
			cout << "1.辉锑矿\n";
			cout << "2.辉铋矿\n";
			cin >> option21070x;

			switch (option21070x)
			{
				case 1:
					cout << "\n";	//辉锑矿的属性及其特性
					break;
				case 2:
					cout << "\n";	//辉铋矿的属性及其特性
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//雌黄族 _ 选择 _ 【矿物】
//
	void  family210800()
	{
		while(1)
		{
			int option21080x;

			cout << "请选择具体矿物: \n";
			cout << "1.雌黄\n";
			cin >> option21080x;

			switch (option21080x)
			{
				case 1:
					cout << "\n";	//雌黄的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//雄黄族 _ 选择 _ 【矿物】
//
	void family210900()
	{
		while(1)
		{
			int option21090x;

			cout << "请选择具体矿物: \n";
			cout << "1.雄黄\n";
			cin >> option21090x;

			switch (option21090x)
			{
				case 1:
					cout << "\n";	//雄黄的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//辉钼矿族 _ 选择 _ 【矿物】
//
	void family2101000 ()
	{
		while(1)
		{
			int option210100x;

			cout << "请选择具体矿物: \n";
			cout << "1.辉钼矿\n";
			cin >> option210100x;

			switch (option210100x)
			{
				case 1:
					cout << "\n";	//辉钼矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//斑铜矿族 _ 选择 _ 【矿物】
//
	void family2101100()
	{
		while(1)
		{
			int option210110x;

			cout << "请选择具体矿物: \n";
			cout << "1.斑铜矿\n";
			cin >> option210110x;

			switch (option210110x)
			{
				case 1:
					cout << "\n";	//斑铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}






	return 0;

}