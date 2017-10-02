#include <iostream>

using namespace std;

	void iiinaturaliii ();	//自然元素大类

	void iiisulphuriii ();	//硫化物及其类似化合物
	
	void iiioxygenhydrogeniii ();	//氧化物和氢氧化物
	
	void iiioxysaltiii ();	//含氧盐

	void iiihalideiii ();	//卤化物

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
	
	}
}


//_____________________________________________________________________完毕__________________________________________________________________//
//  *****第1大类*****  自然元素 _ 选择 _ 【【【【【类】】】】】
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
			cin >> option1x0000;

			switch(option1x0000)
			{
				case 1:
					natural110000();	//第一类——自然金属元素
					break;
				case 2:
					natural120000();	//第二类——自然非金属元素
					break;
				case 3:
					natural130000();	//第三类——自然半金属元素
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
					cout <<endl<<endl;
					cout << "名称：自然铜"<<endl;
					cout << "化学式：Cu" <<endl;
					cout << "颜色：【铜红】色。表面常因氧化而出现【棕黑色】锖色。" <<endl;
					cout << "条痕：铜红色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//自然铜的属性及特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//自然金的属性及其特性	
					break;		
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
//___________________________________________________第1大类-第1类——自然金属元素	<编写完成>____________________________________________________//
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
		while(1)
		{
			int option12010x;

			cout << "请选择具体矿物： \n";
			cout << "1.自然硫\n";
			cin >> option12010x;

			switch(option12010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//自然硫属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;	  // 金刚石属性及其特性
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
			int option12030x;

			cout << "请选择具体矿物： \n";
			cout << "1.石墨 \n";
			cout << "2.富勒烯与纳米碳管 \n";
			cin >> option12030x;

			switch(option12030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;	  // 石墨属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//富勒烯与纳米碳管属性及其特性
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
			int option13010x;

			cout << "请选择具体矿物： \n";
			cout << "1.自然铋\n";
			cin >> option13010x;

			switch(option13010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;	  // 自然铋属性及其特性
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



//  *****第2大类*****  硫化物及其类似化合物 _ 选择 _ 【【【【【类】】】】】

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
					sulphur210000();
					break;
				case 2:
					sulphur220000();
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//方铅矿的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//闪锌矿的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//黄铜矿的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//磁黄铁矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//红砷镍矿的属性及其特性
					break;
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//铜蓝的属性及其特性
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
			int option21060x;

			cout << "请选择具体矿物: \n";
			cout << "1.辰砂\n";
			cin >> option21060x;

			switch (option21060x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//辰砂的属性及其特性
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
			int option21070x;

			cout << "请选择具体矿物: \n";
			cout << "1.辉锑矿\n";
			cout << "2.辉铋矿\n";
			cin >> option21070x;

			switch (option21070x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//辉锑矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//辉铋矿的属性及其特性
					break;
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//雌黄的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//雄黄的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//辉钼矿的属性及其特性
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
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//斑铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//辉铜矿族 _ 选择 _ 【矿物】
//
	void family2101200()
	{
		while(1)
		{
			int option210120x;

			cout << "请选择具体矿物: \n";
			cout << "1.辉铜矿\n";
			cin >> option210120x;

			switch (option210120x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//辉铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//___________________________________________________第2大类-第1类——简单硫化物	<编写完成>____________________________________________________//
// ****第2类**** 复硫化物-选择-【【【族】】】
// 
	void family220100 ();
	void family220200 ();

	void sulphur220000()											
	{
		while(1)
		{
			int option220x00;

			cout << "请选择(族类)/(矿物)： \n";
			cout << "1.黄铁矿-白铁矿族 \n";
			cout << "2.辉砷钴-毒砂族 \n";
			cin >> option220x00;

			switch (option220x00)
			{
				case 1:
					family220100();	//黄铁矿-白铁矿族
					break;
				case 2:
					family220200();	//辉砷钴-毒砂族
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//黄铁矿-白铁矿族 _ 选择 _ 【矿物】
//
	void family220100()
	{
		while(1)
		{
			int option22010x;

			cout << "请选择具体矿物： \n";
			cout << "1.黄铁矿 \n";
			cout << "2.白铁矿 \n";
			cin >> option22010x;

			switch(option22010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//黄铁矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//白铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	} 

//黄铁矿-白铁矿族 _ 选择 _ 【矿物】
//
	void family220200()
	{
		while(1)
		{
			int option22020x;

			cout << "请选择具体矿物： \n";
			cout << "1.毒砂 \n";
			cin >> option22020x;

			switch(option22020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//毒砂的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	} 
//___________________________________________________第2大类-第2类——复硫化物	<编写完成>____________________________________________________//



///
///
///
/////////////////////////////////////////////////////////	第2大类——硫化物极其类似化合物——<编写完成>	///////////////////////////////////////////
///
///
///



//  *****第3大类*****  氧化物和氢氧化物 _ 选择 _ 【【【【【类】】】】】

	void oxygenhydrogen310000();
	void oxygenhydrogen320000();

	void iiioxygenhydrogeniii ()
	{
		while(1)
		{
			int option3x0000;

			cout << "请选择类别： \n";
			cout << "1.第一类——氧化物\n";
			cout << "2.第二类——氢氧化物\n";
			cin >> option3x0000;

			switch (option3x0000)
			{
				case 1:
					oxygenhydrogen310000();
					break;
				case 2:
					oxygenhydrogen320000();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ****第1类**** 氧化物 _ 选择 _ 【【【族】】】
// 
	void family310100();
	void family310200();
	void family310300();
	void family310400();
	void family310500();
	void family310600();
	void family310700();
	void family310800();

	void oxygenhydrogen310000()
	{
		while(1)
		{
			int option310x00;

			cout << "请选择类别： \n";
			cout << "1.第一族——赤铜矿族\n";
			cout << "2.第二族——刚玉族\n";
			cout << "3.第三族——钙钛矿族\n";
			cout << "4.第四族——金红石族\n";
			cout << "5.第五族——晶质铀矿族\n";
			cout << "6.第六族——石英族\n";
			cout << "7.第七族——尖晶石族\n";
			cout << "8.第八族——黑钨矿族\n";
			cin >> option310x00;

			switch (option310x00)
			{
				case 1:
					family310100();
					break;
				case 2:
					family310200();
					break;
				case 3:
					family310300();
					break;
				case 4:
					family310400();
					break;
				case 5:
					family310500();
					break;
				case 6:
					family310600();
					break;
				case 7:
					family310700();
					break;
				case 8:
					family310800();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//赤铜矿族 _ 选择 _ 【矿物】
//
	void family310100()
	{
		while(1)
		{
			int option31010x;

			cout << "请选择具体矿物： \n";
			cout << "1.赤铜矿 \n";
			cin >> option31010x;

			switch(option31010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//赤铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//刚玉族 _ 选择 _ 【矿物】
//
	void family310200()
	{
		while(1)
		{
			int option31020x;

			cout << "请选择具体矿物： \n";
			cout << "1.刚玉 \n";
			cout << "2.赤铁矿 \n";
			cout << "3.钛铁矿 \n";
			cin >> option31020x;

			switch(option31020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//刚玉的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//赤铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//钛铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//钙铁矿族 _ 选择 _ 【矿物】
//
	void family310300()
	{
		while(1)
		{
			int option31030x;

			cout << "请选择具体矿物： \n";
			cout << "1.钙铁矿 \n";
			cin >> option31030x;

			switch(option31030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//钙铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//金红石族 _ 选择 _ 【矿物】
//
	void family310400()
	{
		while(1)
		{
			int option31040x;

			cout << "请选择具体矿物： \n";
			cout << "1.金红石 \n";
			cout << "2.锡石 \n";
			cout << "3.软锰矿 \n";
			cin >> option31040x;

			switch(option31040x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//金红石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//锡石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//软锰矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//晶质铀矿族 _ 选择 _ 【矿物】
//
	void family310500()
	{
		while(1)
		{
			int option31050x;

			cout << "请选择具体矿物： \n";
			cout << "1.晶质铀矿 \n";
			cin >> option31050x;

			switch(option31050x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//晶质铀矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//石英族 _ 选择 _ 【矿物】
//
	void family310600()
	{
		while(1)
		{
			int option31060x;

			cout << "请选择具体矿物： \n";
			cout << "1.石英 \n";
			cout << "2.β-石英  \n";
			cout << "3.蛋白石 \n";
			cin >> option31060x;

			switch(option31060x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//石英的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//β-石英的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蛋白石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//尖晶石族 _ 选择 _ 【矿物】
//
	void family310700()
	{
		while(1)
		{
			int option31070x;

			cout << "请选择具体矿物： \n";
			cout << "1.尖晶石 \n";
			cout << "2.磁铁矿  \n";
			cout << "3.铬铁矿 \n";
			cin >> option31070x;

			switch(option31070x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//尖晶石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//磁铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//铬铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//黑钨矿族 _ 选择 _ 【矿物】
//
	void family310800()
	{
		while(1)
		{
			int option31080x;

			cout << "请选择具体矿物： \n";
			cout << "1.黑钨矿 \n";
			cin >> option31080x;

			switch(option31080x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//黑钨矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//___________________________________________________第3大类-第1类——氧化物	<编写完成>____________________________________________________//
// ****第2类**** 氢氧化物-选择-【【【族】】】
// 
	void family320100();
	void family320200();
	void family320300();
	void family320400();

	void oxygenhydrogen320000()
	{
		while(1)
		{
			int option320x00;

			cout << "请选择类别： \n";
			cout << "1.镁的氢氧化物 \n";
			cout << "2.铝的氢氧化物 \n";
			cout << "3.铁的氢氧化物 \n";
			cout << "4.锰的氢氧化物 \n";
			cin >> option320x00;

			switch (option320x00)
			{
				case 1:
					family320100();
					break;
				case 2:
					family320200();
					break;
				case 3:
					family320300();
					break;
				case 4:
					family320400();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//镁的氢氧化物 _ 选择 _ 【矿物】
//
	void family320100()
	{
		while(1)
		{
			int option32010x;

			cout << "请选择具体矿物： \n";
			cout << "1.水镁石 \n";
			cin >> option32010x;

			switch(option32010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//水镁石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//铝的氢氧化物 _ 选择 _ 【矿物】
//
	void family320200()
	{
		while(1)
		{
			int option32020x;

			cout << "请选择具体矿物： \n";
			cout << "1.三水铝石（铝土矿） \n";
			cin >> option32020x;

			switch(option32020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//三水铝石（铝土矿）的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//铁的氢氧化物 _ 选择 _ 【矿物】
//
	void family320300()
	{
		while(1)
		{
			int option32030x;

			cout << "请选择具体矿物： \n";
			cout << "1.针铁矿（褐铁矿） \n";
			cin >> option32030x;

			switch(option32030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//针铁矿（褐铁矿）的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//锰的氢氧化物 _ 选择 _ 【矿物】
//
	void family320400()
	{
		while(1)
		{
			int option32040x;

			cout << "请选择具体矿物： \n";
			cout << "1.水锰矿 \n";
			cout << "2.硬锰矿 \n";
			cin >> option32040x;

			switch(option32040x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//水锰矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//硬锰矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第3大类-第2类——氢氧化物	<编写完成>____________________________________________________//



///
///
///
/////////////////////////////////////////////////////////	第3大类——氧化物和氢氧化物——<编写完成>	///////////////////////////////////////////
///
///
///



//  *****第4大类*****  含氧盐 _ 选择 _ 【【【【【类】】】】】

	void oxysalt410000();
	void oxysalt420000();
	void oxysalt430000();
	void oxysalt440000();
	void oxysalt450000();
	void oxysalt460000();

	void iiioxysaltiii ()
	{
		while(1)
		{
			int option4x0000;

			cout << "请选择类别： \n";
			cout << "1.第一类——硅酸盐\n";
			cout << "2.第二类——碳酸盐\n";
			cout << "3.第三类——硫酸盐\n";
			cout << "4.第四类——磷酸盐\n";
			cout << "5.第五类——钨酸盐\n";
			cout << "6.第六类——硼酸盐\n";
			cin >> option4x0000;

			switch (option4x0000)
			{
				case 1:
					oxysalt410000();
					break;
				case 2:
					oxysalt420000();
					break;
				case 3:
					oxysalt430000();
					break;
				case 4:
					oxysalt440000();
					break;
				case 5:
					oxysalt450000();
					break;
				case 6:
					oxysalt460000();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ****第1类**** 硅酸盐 _ 选择 _ 【【【【亚类】】】】
// 
	void oxysalt411000();
	void oxysalt412000();
	void oxysalt413000();
	void oxysalt414000();

	void oxysalt410000()
	{
		while(1)
		{
			int option41x000;

			cout << "请选择类别： \n";
			cout << "1.第一亚类——岛状、环状结构硅酸盐\n";
			cout << "2.第二亚类——链状结构碳酸盐\n";
			cout << "3.第三亚类——层状结构硫酸盐\n";
			cout << "4.第四亚类——架状结构磷酸盐\n";
			cin >> option41x000;

			switch (option41x000)
			{
				case 1:
					oxysalt411000();
					break;
				case 2:
					oxysalt412000();
					break;
				case 3:
					oxysalt413000();
					break;
				case 4:
					oxysalt414000();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ***第一亚类*** 岛状、环状结构硅酸盐 _ 选择 _ 【【【族】】】
// 
	void family411100();
	void family411200();
	void family411300();
	void family411400();
	void family411500();
	void family411600();
	void family411700();
	void family411800();
	void family411900();
	void family4111000();

	void oxysalt411000()
	{
		while(1)
		{
			int option411x00;

			cout << "请选择类别： \n";
			cout << "1.第一族——锆石族\n";
			cout << "2.第二族——橄榄石族\n";
			cout << "3.第三族——石榴子石族\n";
			cout << "4.第四族——红柱石族\n";
			cout << "5.第五族——黄玉族\n";
			cout << "6.第六族——十字石族\n";
			cout << "7.第七族——榍石族\n";
			cout << "8.第八族——绿帘石族\n";
			cin >> option411x00;

			switch (option411x00)
			{
				case 1:
					family411100();
					break;
				case 2:
					family411200();
					break;
				case 3:
					family411300();
					break;
				case 4:
					family411400();
					break;
				case 5:
					family411500();
					break;
				case 6:
					family411600();
					break;
				case 7:
					family411700();
					break;
				case 8:
					family411800();
					break;
				case 9:
					family411900();
					break;
				case 10:
					family4111000();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//锆石族 _ 选择 _ 【矿物】
//
	void family411100()
	{
		while(1)
		{
			int option41110x;

			cout << "请选择具体矿物： \n";
			cout << "1.锆石 \n";
			cin >> option41110x;

			switch(option41110x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//锆石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//橄榄石族 _ 选择 _ 【矿物】
//
	void family411200()
	{
		while(1)
		{
			int option41120x;

			cout << "请选择具体矿物： \n";
			cout << "1.橄榄石 \n";
			cin >> option41120x;

			switch(option41120x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//橄榄石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//石榴子石族 _ 选择 _ 【矿物】
//
	void family411300()
	{
		while(1)
		{
			int option41130x;

			cout << "请选择具体矿物： \n";
			cout << "1.石榴子石 \n";
			cin >> option41130x;

			switch(option41130x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//石榴子石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//红柱石族 _ 选择 _ 【矿物】
//
	void family411400()
	{
		while(1)
		{
			int option41140x;

			cout << "请选择具体矿物： \n";
			cout << "1.红柱石 \n";
			cout << "2.蓝晶石 \n";
			cin >> option41140x;

			switch(option41140x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//红柱石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蓝晶石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//黄玉族 _ 选择 _ 【矿物】
//
	void family411500()
	{
		while(1)
		{
			int option41150x;

			cout << "请选择具体矿物： \n";
			cout << "1.黄玉 \n";
			cin >> option41150x;

			switch(option41150x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//黄玉的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//十字石族 _ 选择 _ 【矿物】
//
	void family411600()
	{
		while(1)
		{
			int option41160x;

			cout << "请选择具体矿物： \n";
			cout << "1.十字石 \n";
			cin >> option41160x;

			switch(option41160x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//十字石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//榍石族 _ 选择 _ 【矿物】
//
	void family411700()
	{
		while(1)
		{
			int option41170x;

			cout << "请选择具体矿物： \n";
			cout << "1.榍石 \n";
			cin >> option41170x;

			switch(option41170x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//榍石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//绿帘石族 _ 选择 _ 【矿物】
//
	void family411800()
	{
		while(1)
		{
			int option41180x;

			cout << "请选择具体矿物： \n";
			cout << "1.绿帘石 \n";
			cin >> option41180x;

			switch(option41180x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//绿帘石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//绿柱石族 _ 选择 _ 【矿物】
//
	void family411900()
	{
		while(1)
		{
			int option41190x;

			cout << "请选择具体矿物： \n";
			cout << "1.绿柱石 \n";
			cout << "2.堇青石 \n";
			cin >> option41190x;

			switch(option41190x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//绿柱石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//堇青石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//电气石族 _ 选择 _ 【矿物】
//
	void family4111000()
	{
		while(1)
		{
			int option411100x;

			cout << "请选择具体矿物： \n";
			cout << "1.电气石 \n";
			cin >> option411100x;

			switch(option411100x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//电气石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ***第二亚类*** 链状结构硅酸盐 _ 选择 _ 【【【族】】】
// 
	void family412100();
	void family412200();
	void family412300();
	void family412400();

	void oxysalt412000()
	{
		while(1)
		{
			int option412x00;

			cout << "请选择类别： \n";
			cout << "1.第一族——辉石族\n";
			cout << "2.第二族——硅灰石族\n";
			cout << "3.第三族——角闪石族\n";
			cout << "4.第四族——矽线石族\n";
			cin >> option412x00;

			switch (option412x00)
			{
				case 1:
					family412100();
					break;
				case 2:
					family412200();
					break;
				case 3:
					family412300();
					break;
				case 4:
					family412400();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//辉石族 _ 选择 _ 【【亚族】】
//
	void family412110();
	void family412120();

	void family412100()
	{
		while(1)
		{
			int option4121x0;

			cout << "请选择亚族： \n";
			cout << "1.斜方辉石亚族 \n";
			cout << "2.单斜辉石亚族 \n";
			cin >> option4121x0;

			switch(option4121x0)
			{
				case 1:
					family412110();
					break;
				case 2:
					family412120();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//斜方辉石亚族 _ 选择 _ 【矿物】
//
	void family412110()
	{
		while(1)
		{
			int option41211x;

			cout << "请选择具体矿物： \n";
			cout << "1.顽火辉石 \n";
			cout << "2.紫苏辉石 \n";
			cin >> option41211x;

			switch(option41211x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//顽火辉石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//紫苏辉石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//单斜辉石亚族 _ 选择 _ 【矿物】
//
	void family412120()
	{
		while(1)
		{
			int option41212x;

			cout << "请选择具体矿物： \n";
			cout << "1.透辉石-钙铁辉石 \n";
			cout << "2.普通辉石 \n";
			cout << "3.硬玉 \n";
			cout << "4.锂辉石 \n";
			cout << "5.霓石 \n";
			cin >> option41212x;

			switch(option41212x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//透辉石-钙铁辉石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//普通辉石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//硬玉的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//锂辉石的属性及其特性
					break;
				case 5:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//霓石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//硅灰石族 _ 选择 _ 【矿物】
//
	void family412200()
	{
		while(1)
		{
			int option41220x;

			cout << "请选择具体矿物： \n";
			cout << "1.硅灰石 \n";
			cin >> option41220x;

			switch(option41220x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//硅灰石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//角闪石族 _ 选择 _ 【【亚族】】
//
	void family412310();
	void family412320();

	void family412300()
	{
		while(1)
		{
			int option4123x0;

			cout << "请选择亚族： \n";
			cout << "1.斜方角闪石亚族 \n";
			cout << "2.单斜角闪石亚族 \n";
			cin >> option4123x0;

			switch(option4123x0)
			{
				case 1:
					family412310();
					break;
				case 2:
					family412320();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//斜方角闪石亚族 _ 选择 _ 【矿物】
//
	void family412310()
	{
		while(1)
		{
			int option41231x;

			cout << "请选择具体矿物： \n";
			cout << "1.直闪石 \n";
			cin >> option41231x;

			switch(option41231x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//直闪石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//单斜角闪石亚族 _ 选择 _ 【矿物】
//
	void family412320()
	{
		while(1)
		{
			int option41232x;

			cout << "请选择具体矿物： \n";
			cout << "1.镁铁闪石 \n";
			cout << "2.透闪石-阳起石 \n";
			cout << "3.普通角闪石 \n";
			cout << "4.蓝闪石 \n";
			cin >> option41232x;

			switch(option41232x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//镁铁闪石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//透闪石-阳起石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//普通角闪石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蓝闪石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//矽线石族 _ 选择 _ 【矿物】
//
	void family412400()
	{
		while(1)
		{
			int option41240x;

			cout << "请选择具体矿物： \n";
			cout << "1.矽线石 \n";
			cin >> option41240x;

			switch(option41240x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//矽线石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ***第三亚类*** 层状结构硅酸盐 _ 选择 _ 【【【族】】】
// 
	void family413100();
	void family413200();
	void family413300();
	void family413400();
	void family413500();
	void family413600();
	void family413700();

	void oxysalt413000()
	{
		while(1)
		{
			int option413x00;

			cout << "请选择类别： \n";
			cout << "1.第一族——高岭石族\n";
			cout << "2.第二族——蛇纹石族\n";
			cout << "3.第三族——云母族\n";
			cout << "4.第四族——滑石族\n";
			cout << "5.第五族——蒙脱石-皂石族\n";
			cout << "6.第六族——蛭石族\n";
			cout << "7.第七族——绿泥石族\n";
			cin >> option413x00;

			switch (option413x00)
			{
				case 1:
					family413100();
					break;
				case 2:
					family413200();
					break;
				case 3:
					family413300();
					break;
				case 4:
					family413400();
					break;
				case 5:
					family413500();
					break;
				case 6:
					family413600();
					break;
				case 7:
					family413700();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//高岭石族 _ 选择 _ 【矿物】
//
	void family413100()
	{
		while(1)
		{
			int option41310x;

			cout << "请选择具体矿物： \n";
			cout << "1.高岭石 \n";
			cin >> option41310x;

			switch(option41310x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//高岭石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//蛇纹石族 _ 选择 _ 【矿物】
//
	void family413200()
	{
		while(1)
		{
			int option41320x;

			cout << "请选择具体矿物： \n";
			cout << "1.蛇纹石 \n";
			cin >> option41320x;

			switch(option41320x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//高岭石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//云母族 _ 选择 _ 【【亚族】】
//
	void family413310();
	void family413320();
	void family413330();

	void family413300()
	{
		while(1)
		{
			int option4133x0;

			cout << "请选择亚族： \n";
			cout << "1.白云母亚族 \n";
			cout << "2.黑云母亚族 \n";
			cout << "3.锂云母亚族 \n";
			cin >> option4133x0;

			switch(option4133x0)
			{
				case 1:
					family413310();
					break;
				case 2:
					family413320();
					break;
				case 3:
					family413330();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//白云母亚族 _ 选择 _ 【矿物】
//
	void family413310()
	{
		while(1)
		{
			int option41331x;

			cout << "请选择具体矿物： \n";
			cout << "1.白云母 \n";
			cin >> option41331x;

			switch(option41331x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//白云母的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//黑云母亚族 _ 选择 _ 【矿物】
//
	void family413320()
	{
		while(1)
		{
			int option41332x;

			cout << "请选择具体矿物： \n";
			cout << "1.黑云母-金云母 \n";
			cin >> option41332x;

			switch(option41332x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//黑云母-金云母的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//锂云母亚族 _ 选择 _ 【矿物】
//
	void family413330()
	{
		while(1)
		{
			int option41333x;

			cout << "请选择具体矿物： \n";
			cout << "1.锂云母 \n";
			cin >> option41333x;

			switch(option41333x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//锂云母的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//滑石族 _ 选择 _ 【【亚族】】
//
	void family413410();
	void family413420();

	void family413400()
	{
		while(1)
		{
			int option4134x0;

			cout << "请选择亚族： \n";
			cout << "1.滑石亚族 \n";
			cout << "2.叶蜡石亚族 \n";
			cin >> option4134x0;

			switch(option4134x0)
			{
				case 1:
					family413410();
					break;
				case 2:
					family413420();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//滑石亚族 _ 选择 _ 【矿物】
//
	void family413410()
	{
		while(1)
		{
			int option41341x;

			cout << "请选择具体矿物： \n";
			cout << "1.滑石 \n";
			cin >> option41341x;

			switch(option41341x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//滑石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//叶蜡石亚族 _ 选择 _ 【矿物】
//
	void family413420()
	{
		while(1)
		{
			int option41342x;

			cout << "请选择具体矿物： \n";
			cout << "1.叶蜡石 \n";
			cin >> option41342x;

			switch(option41342x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//叶蜡石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//蒙脱石-皂石族 _ 选择 _ 【矿物】
//
	void family413500()
	{
		while(1)
		{
			int option41350x;

			cout << "请选择具体矿物： \n";
			cout << "1.蒙脱石 \n";
			cin >> option41350x;

			switch(option41350x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蒙脱石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//蛭石族 _ 选择 _ 【矿物】
//
	void family413600()
	{
		while(1)
		{
			int option41360x;

			cout << "请选择具体矿物： \n";
			cout << "1.蒙脱石 \n";
			cin >> option41360x;

			switch(option41360x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蛭石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//绿泥石族 _ 选择 _ 【矿物】
//
	void family413700()
	{
		while(1)
		{
			int option41370x;

			cout << "请选择具体矿物： \n";
			cout << "1.绿泥石 \n";
			cin >> option41370x;

			switch(option41370x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//绿泥石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
// ***第四亚类*** 架状结构硅酸盐 _ 选择 _ 【【【族】】】
// 
	void family414100();
	void family414200();
	void family414300();
	void family414400();

	void oxysalt414000()
	{
		while(1)
		{
			int option414x00;

			cout << "请选择类别： \n";
			cout << "1.第一族——长石族\n";
			cout << "2.第二族——白榴石族\n";
			cout << "3.第三族——霞石族\n";
			cout << "4.第四族——沸石族\n";
			cin >> option414x00;

			switch (option414x00)
			{
				case 1:
					family414100();
					break;
				case 2:
					family414200();
					break;
				case 3:
					family414300();
					break;
				case 4:
					family414400();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//长石族 _ 选择 _ 【【亚族】】
//
	void family414110();
	void family414120();

	void family414100()
	{
		while(1)
		{
			int option4141x0;

			cout << "请选择亚族： \n";
			cout << "1.碱性长石亚族 \n";
			cout << "2.斜长石亚族 \n";
			cin >> option4141x0;

			switch(option4141x0)
			{
				case 1:
					family414110();
					break;
				case 2:
					family414120();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//碱性斜长石亚族 _ 选择 _ 【矿物】
//
	void family414110()
	{
		while(1)
		{
			int option41411x;

			cout << "请选择具体矿物： \n";
			cout << "1.透长石 \n";
			cout << "2.正长石 \n";
			cout << "3.微斜长石 \n";
			cout << "4.歪长石 \n";
			cin >> option41411x;

			switch(option41411x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//透长石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//正长石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//微斜长石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//歪长石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//斜长石亚族 _ 选择 _ 【矿物】
//
	void family414120()
	{
		while(1)
		{
			int option41412x;

			cout << "请选择具体矿物： \n";
			cout << "1.斜长石 \n";
			cin >> option41412x;

			switch(option41412x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//斜长石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//白榴石族 _ 选择 _ 【矿物】
//
	void family414200()
	{
		while(1)
		{
			int option41420x;

			cout << "请选择具体矿物： \n";
			cout << "1.白榴石 \n";
			cin >> option41420x;

			switch(option41420x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//白榴石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//霞石族 _ 选择 _ 【矿物】
//
	void family414300()
	{
		while(1)
		{
			int option41430x;

			cout << "请选择具体矿物： \n";
			cout << "1.霞石 \n";
			cin >> option41430x;

			switch(option41430x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//霞石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//沸石族 _ 选择 _ 【矿物】
//
	void family414400()
	{
		while(1)
		{
			int option41440x;

			cout << "请选择具体矿物： \n";
			cout << "1.丝光沸石 \n";
			cout << "2.方沸石 \n";
			cout << "3.片沸石 \n";
			cout << "4.钙十字沸石 \n";
			cout << "5.菱沸石 \n";
			cin >> option41440x;

			switch(option41440x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//丝光沸石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//方沸石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//片沸石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//钙十字沸石的属性及其特性
					break;
				case 5:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//菱沸石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第1类——硅酸盐	<编写完成>____________________________________________________//
// ****第2类**** 碳酸盐-选择-【【【族】】】
// 
	void family420100();
	void family420200();
	void family420300();

	void oxysalt420000()
	{
		while(1)
		{
			int option420x00;

			cout << "请选择类别： \n";
			cout << "1.方解石族 \n";
			cout << "2.文石族 \n";
			cout << "3.孔雀石族 \n";
			cin >> option420x00;

			switch (option420x00)
			{
				case 1:
					family420100();
					break;
				case 2:
					family420200();
					break;
				case 3:
					family420300();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//方解石族 _ 选择 _ 【矿物】
//
	void family420100()
	{
		while(1)
		{
			int option42010x;

			cout << "请选择具体矿物： \n";
			cout << "1.方解石 \n";
			cout << "2.菱镁矿-菱铁矿 \n";
			cout << "3.白云石 \n";
			cin >> option42010x;

			switch(option42010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//方解石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//菱镁矿-菱铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//白云石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//文石族 _ 选择 _ 【矿物】
//
	void family420200()
	{
		while(1)
		{
			int option42020x;

			cout << "请选择具体矿物： \n";
			cout << "1.文石 \n";
			cin >> option42020x;

			switch(option42020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//文石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//孔雀石族 _ 选择 _ 【矿物】
//
	void family420300()
	{
		while(1)
		{
			int option42030x;

			cout << "请选择具体矿物： \n";
			cout << "1.孔雀石 \n";
			cout << "2.蓝铜矿 \n";
			cin >> option42030x;

			switch(option42030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//孔雀石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//蓝铜矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第2类——碳酸盐	<编写完成>____________________________________________________//
// ****第3类**** 硫酸盐-选择-【【【族】】】
// 
	void family430100();
	void family430200();

	void oxysalt430000()
	{
		while(1)
		{
			int option430x00;

			cout << "请选择类别： \n";
			cout << "1.重晶石族 \n";
			cout << "2.石膏-硬石膏族 \n";
			cin >> option430x00;

			switch (option430x00)
			{
				case 1:
					family430100();
					break;
				case 2:
					family430200();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//重晶石族 _ 选择 _ 【矿物】
//
	void family430100()
	{
		while(1)
		{
			int option43010x;

			cout << "请选择具体矿物： \n";
			cout << "1.重晶石-天青石 \n";
			cin >> option43010x;

			switch(option43010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//重晶石-天青石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//石膏-硬石膏族 _ 选择 _ 【矿物】
//
	void family430200()
	{
		while(1)
		{
			int option43020x;

			cout << "请选择具体矿物： \n";
			cout << "1.石膏 \n";
			cout << "2.硬石膏 \n";
			cin >> option43020x;

			switch(option43020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//石膏的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//硬石膏的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第3类——硫酸盐	<编写完成>____________________________________________________//
// ****第4类**** 磷酸盐-选择-【【【族】】】
// 
	void family440100();

	void oxysalt440000()
	{
		while(1)
		{
			int option440x00;

			cout << "请选择类别： \n";
			cout << "1.磷灰石族 \n";
			cin >> option440x00;

			switch (option440x00)
			{
				case 1:
					family440100();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//磷灰石族 _ 选择 _ 【矿物】
//
	void family440100()
	{
		while(1)
		{
			int option44010x;

			cout << "请选择具体矿物： \n";
			cout << "1.磷灰石 \n";
			cin >> option44010x;

			switch(option44010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//磷灰石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第4类——磷酸盐	<编写完成>____________________________________________________//
// ****第5类**** 钨酸盐-选择-【【【族】】】
// 
	void family450100();

	void oxysalt450000()
	{
		while(1)
		{
			int option450x00;

			cout << "请选择类别： \n";
			cout << "1.白钨矿族 \n";
			cin >> option450x00;

			switch (option450x00)
			{
				case 1:
					family450100();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//白钨矿族 _ 选择 _ 【矿物】
//
	void family450100()
	{
		while(1)
		{
			int option45010x;

			cout << "请选择具体矿物： \n";
			cout << "1.白钨矿 \n";
			cin >> option45010x;

			switch(option45010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//白钨矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第5类——钨酸盐	<编写完成>____________________________________________________//
// ****第6类**** 硼酸盐-选择-【【【族】】】
// 
	void family460100();

	void oxysalt460000()
	{
		while(1)
		{
			int option460x00;

			cout << "请选择类别： \n";
			cout << "1.天水硼酸盐 \n";
			cin >> option460x00;

			switch (option460x00)
			{
				case 1:
					family460100();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//天水硼酸盐 _ 选择 _ 【矿物】
//
	void family460100()
	{
		while(1)
		{
			int option46010x;

			cout << "请选择具体矿物： \n";
			cout << "1.硼镁铁矿 \n";
			cin >> option46010x;

			switch(option46010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//硼镁铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//___________________________________________________第4大类-第6类——硼酸盐	<编写完成>____________________________________________________//



///
///
///
/////////////////////////////////////////////////////////	第4大类——含氧盐——<编写完成>	///////////////////////////////////////////
///
///
///



//  *****第5大类*****  卤化物 _ 选择 _ 【【【族】】】
//  
	void family500100();
	void family500200();

	void iiihalideiii()
	{
		while(1)
		{
			int option500x00;

			cout << "请选择类别： \n";
			cout << "1.萤石族 \n";
			cout << "2.石盐族 \n";
			cin >> option500x00;

			switch (option500x00)
			{
				case 1:
					family500100();
					break;
				case 2:
					family500200();
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//
//萤石族 _ 选择 _ 【矿物】
//
	void family500100()
	{
		while(1)
		{
			int option50010x;

			cout << "请选择具体矿物： \n";
			cout << "1.萤石 \n";
			cin >> option50010x;

			switch(option50010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//萤石的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}

//石盐族 _ 选择 _ 【矿物】
//
	void family500200()
	{
		while(1)
		{
			int option50020x;

			cout << "请选择具体矿物： \n";
			cout << "1.石盐 \n";
			cin >> option50020x;

			switch(option50020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：" <<endl<<endl<<endl<<endl<<endl;		//石盐的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
		}
	}
//_____________________________________________________________________完毕__________________________________________________________________//



///
///
///
/////////////////////////////////////////////////////////	第5大类——卤化物——<编写完成>	///////////////////////////////////////////
///
///
///


















