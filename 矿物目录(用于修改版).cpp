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
	cout << endl << endl;
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
					cout << "名称：自然铜。"<<endl;
					cout << "化学式：Cu。" <<endl;		
					cout << "颜色：【铜红】色。表面常因氧化而出现【棕黑色】锖色。" <<endl;
					cout << "条痕：铜红色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//自然铜的属性及特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：自然金。"<<endl;
					cout << "化学式：Au。" <<endl;
					cout << "颜色：金黄色。" <<endl;
					cout << "条痕：金黄色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//自然金的属性及其特性	
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
					cout <<endl<<endl;
					cout << "名称：自然铂。"<<endl;
					cout << "化学式：Pt。" <<endl;
					cout << "颜色：锡白色。视含铁量多少由银白至钢灰色" <<endl;
					cout << "条痕：钢灰色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//自然铂的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.自然硫\n";
			
			cin >> option12010x;

			switch(option12010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：自然硫。"<<endl;
					cout << "化学式：α-S。" <<endl;
					cout << "颜色：不同色调的黄色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：晶面呈金刚光泽，断面显油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：不完全。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//自然硫属性及其特性
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
					cout << "名称：金刚石。"<<endl;
					cout << "化学式：C。" <<endl;
					cout << "颜色：无色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：断口呈油脂光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：平行{111}解理中等。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;	  // 金刚石属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.石墨 \n";
			cout << "2.富勒烯与纳米碳管 \n";
			
			cin >> option12030x;		

			switch(option12030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：石墨。"<<endl;
					cout << "化学式：C。" <<endl;
					cout << "颜色：黑色。" <<endl;
					cout << "条痕：黑色。" <<endl;
					cout << "光泽：半金属光泽。隐晶质的则黯淡。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{0001}解理极完全。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：易污手。" <<endl<<endl<<endl<<endl<<endl;	  // 石墨属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "无数据。" <<endl<<endl<<endl<<endl<<endl;		//富勒烯与纳米碳管属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.自然铋\n";
			
			cin >> option13010x;

			switch(option13010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：自然铋。"<<endl;
					cout << "化学式：Bi。" <<endl;
					cout << "颜色：新鲜断面呈略带浅黄的银白色。在空气中易变成具浅红的锖色。" <<endl;
					cout << "条痕：灰色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{0001}完全解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;	  // 自然铋属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.方铅矿 \n";
			
			cin >> option21010x;

			switch(option21010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：方铅矿。"<<endl;
					cout << "化学式：PbS。" <<endl;
					cout << "颜色：铅灰色。" <<endl;
					cout << "条痕：灰黑色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{100}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//方铅矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.闪锌矿 \n";
			
			cin >> option21020x;

			switch(option21020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：闪锌矿。"<<endl;
					cout << "化学式：ZnS。" <<endl;
					cout << "颜色：当含Fe量增多时，颜色为浅黄、棕褐直至黑色（铁闪锌矿）。" <<endl;
					cout << "条痕：由白色至褐色。" <<endl;
					cout << "光泽：由树脂光泽至半金属光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{110完全}。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//闪锌矿的属性及其特性
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
					cout << "名称：黄铜矿。"<<endl;
					cout << "化学式：CuFeS2。" <<endl;
					cout << "颜色：铜黄色。但往往带有暗黄或斑状锖色。" <<endl;
					cout << "条痕：绿黑色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：不发育。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//黄铜矿的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.磁黄铁矿\n";
			cout << "2.红砷镍矿\n";
			
			cin >> option21040x;

			switch (option21040x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：磁黄铁矿。"<<endl;
					cout << "化学式：Fe(1-x)S。" <<endl;		
					cout << "颜色：暗古铜黄色，表面常具褐色的锖色。" <<endl;
					cout << "条痕：灰黑色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：不发育。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：强磁性。" <<endl<<endl<<endl<<endl<<endl;		//磁黄铁矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：红砷镍矿。"<<endl;
					cout << "化学式：NiAs。" <<endl;
					cout << "颜色：新鲜面淡铜红色，风化面具灰或黑色的锖色。" <<endl;
					cout << "条痕：褐黑。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{10（-1）0}不完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//红砷镍矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.铜蓝\n";
			
			cin >> option21050x;

			switch (option21050x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：铜蓝。"<<endl;
					cout << "化学式：CuS(Cu2(^+)S·Cu(^2+)[S2])。" <<endl;
					cout << "颜色：靛青蓝色。" <<endl;
					cout << "条痕：灰黑。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{0001}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//铜蓝的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.辰砂\n";
			
			cin >> option21060x;

			switch (option21060x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：辰砂。"<<endl;
					cout << "化学式：HgS。" <<endl;
					cout << "颜色：鲜红色，有时表面呈铅灰的锖色。" <<endl;
					cout << "条痕：红色。" <<endl;
					cout << "光泽：金刚光泽。" <<endl;
					cout << "透明度：半透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{10（-1）0}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//辰砂的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.辉锑矿\n";
			cout << "2.辉铋矿\n";
			
			cin >> option21070x;

			switch (option21070x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：辉锑矿。"<<endl;
					cout << "化学式：Sb2S3。" <<endl;		
					cout << "颜色：铅灰色或钢灰色，表面常有蓝色锖色。" <<endl;
					cout << "条痕：黑色。研磨后呈褐色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{010}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//辉锑矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：辉铋矿。"<<endl;
					cout << "化学式：Bi2S3。" <<endl;
					cout << "颜色：微带铅灰的锡白色。" <<endl;
					cout << "条痕：铅灰色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{010}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//辉铋矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.雌黄\n";
			
			cin >> option21080x;

			switch (option21080x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：雌黄。"<<endl;
					cout << "化学式：As2S3。" <<endl;
					cout << "颜色：柠檬黄色。" <<endl;
					cout << "条痕：鲜黄色。" <<endl;
					cout << "光泽：油脂至金刚光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{010}极完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//雌黄的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.雄黄\n";
			
			cin >> option21090x;

			switch (option21090x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：雄黄。"<<endl;
					cout << "化学式：As4S4。" <<endl;
					cout << "颜色：橘红色。" <<endl;
					cout << "条痕：淡橘红色。" <<endl;
					cout << "光泽：晶面上具金刚光泽，断面上出现树脂光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{010}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//雄黄的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.辉钼矿\n";
			
			cin >> option210100x;

			switch (option210100x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：辉钼矿。"<<endl;
					cout << "化学式：MoS2。" <<endl;
					cout << "颜色：铅灰色。" <<endl;
					cout << "条痕：亮铅灰色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：平行{0001}极完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//辉钼矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.斑铜矿\n";
			
			cin >> option210110x;

			switch (option210110x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：斑铜矿。"<<endl;
					cout << "化学式：Cu5FeS4。" <<endl;
					cout << "颜色：新鲜断面呈暗铜红色，风化表面常呈暗蓝紫斑状锖色，因此得名。" <<endl;
					cout << "条痕：灰黑色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//斑铜矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物: \n";
			cout << "1.辉铜矿\n";
			
			cin >> option210120x;

			switch (option210120x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：辉铜矿。"<<endl;
					cout << "化学式：Cu2S。" <<endl;
					cout << "颜色：新鲜面铅灰色，风化表面黑色。" <<endl;
					cout << "条痕：暗灰色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//辉铜矿的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.黄铁矿 \n";
			cout << "2.白铁矿 \n";
			
			cin >> option22010x;

			switch(option22010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：黄铁矿。"<<endl;
					cout << "化学式：Fe[S2]。" <<endl;		
					cout << "颜色：浅铜黄色，表面带有黄褐的锖色。" <<endl;
					cout << "条痕：绿黑色。" <<endl;
					cout << "光泽：强金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//黄铁矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：白铁矿。"<<endl;
					cout << "化学式：Fe[S2]。" <<endl;
					cout << "颜色：淡铜黄色而捎带浅灰或浅绿的色调，新鲜面近于锡白色（较黄铁矿色浅）。" <<endl;
					cout << "条痕：暗绿色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//白铁矿的属性及其特性
					break;
				default:
						cout << "别闹~请选择以上选项 :P  \n";
			}
			
		}
	} 

//辉砷钴矿-毒砂族 _ 选择 _ 【矿物】
//
	void family220200()
	{
		while(1)
		{
			int option22020x;
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.毒砂 \n";
			
			cin >> option22020x;

			switch(option22020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：毒砂。"<<endl;
					cout << "化学式：Fe[AsS]。" <<endl;
					cout << "颜色：锡白至钢灰色；表面常带浅黄的锖色。" <<endl;
					cout << "条痕：灰黑色。" <<endl;
					cout << "光泽：金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：以锤击之发砷之蒜臭，灼烧后具磁性。性脆" <<endl<<endl<<endl<<endl<<endl;		//毒砂的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.赤铜矿 \n";
			
			cin >> option31010x;

			switch(option31010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：赤铜矿。"<<endl;
					cout << "化学式：Cu2O。" <<endl;
					cout << "颜色：暗红至近于黑色。" <<endl;
					cout << "条痕：褐红色。" <<endl;
					cout << "光泽：金刚至半金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：不完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//赤铜矿的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.刚玉 \n";
			cout << "2.赤铁矿 \n";
			cout << "3.钛铁矿 \n";
			
			cin >> option31020x;

			switch(option31020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：刚玉。"<<endl;
					cout << "化学式：Al2O3。" <<endl;
					cout << "颜色：一般为灰、黄灰色，含Fe者呈黑色；含Cr者呈红色，称红宝石；含Fe和Ti而呈蓝色者称蓝宝石;在有些红宝石和蓝宝石的{0001}面上可以" <<endl;
					cout << "看到成定向分布的六射针状金红石包体而呈星彩状，称星彩红宝石或星彩蓝宝石。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理；常因聚片双晶或细微包体产生{0001}或{10（-1）1}的裂开。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//刚玉的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：赤铁矿。"<<endl;
					cout << "化学式：α-Fe2O3。" <<endl;		
					cout << "颜色：显晶质的赤铁矿呈铁黑至灰色，隐晶质的鲕状、肾状和粉末状呈暗红色。" <<endl;
					cout << "条痕：樱桃红色。" <<endl;
					cout << "光泽：金属光泽至半金属光泽，或土状光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//赤铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：钛铁矿。"<<endl;
					cout << "化学式：FeTiO3。" <<endl;
					cout << "颜色：钢灰至铁黑色。" <<endl;
					cout << "条痕：黑色，含赤铁矿者带褐色。" <<endl;
					cout << "光泽：金属至半金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：弱磁性。" <<endl<<endl<<endl<<endl<<endl;		//钛铁矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.钙铁矿 \n";
			
			cin >> option31030x;

			switch(option31030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：钙钛矿。"<<endl;
					cout << "化学式：CaTiO3。" <<endl;
					cout << "颜色：褐至灰黑色。" <<endl;
					cout << "条痕：白至灰黄色。" <<endl;
					cout << "光泽：金刚光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不完全，参差状断口。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//钙铁矿的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.金红石 \n";
			cout << "2.锡石 \n";
			cout << "3.软锰矿 \n";
			
			cin >> option31040x;

			switch(option31040x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：金红石。"<<endl;
					cout << "化学式：TiO2。" <<endl;
					cout << "颜色：常见褐红、暗红色，含Fe者呈黑色。" <<endl;
					cout << "条痕：浅褐色。" <<endl;
					cout << "光泽：金刚光泽。" <<endl;
					cout << "透明度：微透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：平行{110}中等。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//金红石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：锡石。"<<endl;
					cout << "化学式：SnO2。" <<endl;		
					cout << "颜色：常见黄棕至深褐色，富含Nb和Ta者为沥青黑色。" <<endl;
					cout << "条痕：白色至淡黄色。" <<endl;
					cout << "光泽：金刚光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不完全；贝壳状断口，断口油脂光泽。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//锡石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：软锰矿。"<<endl;
					cout << "化学式：MnO2。" <<endl;
					cout << "颜色：黑色，表面常带浅蓝的锖色。" <<endl;
					cout << "条痕：黑色。" <<endl;
					cout << "光泽：半金属光泽至土状光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：硬度视结晶粗细程度而异，显晶质者可达6，隐晶质的块状体则降至2。" <<endl;
					cout << "解理：平行{110}完全。" <<endl;
					cout << "比重：晶体的相对密度为4.7~5，块状的降至4.5。" <<endl;
					cout << "其它：滴H2O2剧烈起泡。" <<endl<<endl<<endl<<endl<<endl;		//软锰矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.晶质铀矿 \n";
			
			cin >> option31050x;

			switch(option31050x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：晶质铀矿。"<<endl;
					cout << "化学式：（Th,U）O2+^x。" <<endl;
					cout << "颜色：黑色。" <<endl;
					cout << "条痕：褐黑色。" <<endl;
					cout << "光泽：晶质铀矿呈半金属光泽至树脂光泽，沥青铀矿主要呈沥青光泽，而铀黑则光泽黯淡。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：晶质铀矿的硬度为5~6，沥青铀矿为3~5，而铀黑为1~4。" <<endl;
					cout << "解理：无解理；贝壳状断口或参差状断口。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//晶质铀矿的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.石英 \n";
			cout << "2.β-石英  \n";
			cout << "3.蛋白石 \n";
			
			cin >> option31060x;

			switch(option31060x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：石英。"<<endl;
					cout << "化学式：α-SiO2。" <<endl;
					cout << "颜色：颜色多种多样，常为无色、乳白色、灰色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，断口油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//石英的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：β-石英。"<<endl;
					cout << "化学式：β-SiO2。" <<endl;		
					cout << "颜色：常呈灰白色、乳白色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，断口油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：常温常压下均转变为α-石英。" <<endl<<endl<<endl<<endl<<endl;	//β-石英的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：。"<<endl;
					cout << "化学式：。" <<endl;
					cout << "颜色：颜色不定，通常呈蛋白色，因含各种杂质而呈现不同颜色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽或蛋白光泽。" <<endl;
					cout << "透明度：一般为微透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//蛋白石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.尖晶石 \n";
			cout << "2.磁铁矿  \n";
			cout << "3.铬铁矿 \n";
			
			cin >> option31070x;

			switch(option31070x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：尖晶石。"<<endl;
					cout << "化学式：MgAl2O4。" <<endl;
					cout << "颜色：通常呈红色（含Cr）、绿色（含Fe^3+）或褐黑色（含Fe^2+和Fe^3+）。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理，偶有平行（111）裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//尖晶石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：磁铁矿。"<<endl;
					cout << "化学式：FeFe2O4。" <<endl;		
					cout << "颜色：铁黑色。" <<endl;
					cout << "条痕：黑色。" <<endl;
					cout << "光泽：半金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理；有时具有{111}裂开。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：具强磁性。" <<endl<<endl<<endl<<endl<<endl;		//磁铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：铬铁矿。"<<endl;
					cout << "化学式：FeCr2O4。" <<endl;
					cout << "颜色：暗褐至铁黑色。" <<endl;
					cout << "条痕：褐色。" <<endl;
					cout << "光泽：半金属光泽。" <<endl;
					cout << "透明度：不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//铬铁矿的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.黑钨矿 \n";
			
			cin >> option31080x;

			switch(option31080x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：黑钨矿。"<<endl;
					cout << "化学式：(Mn,Fe)WO4。" <<endl;
					cout << "颜色：红褐色（钨锰矿）至黑色（钨铁矿）。" <<endl;
					cout << "条痕：黄褐色（钨锰矿）至褐黑色（钨铁矿）。" <<endl;
					cout << "光泽：由树脂光泽（钨锰矿）至半金属光泽（黑钨矿、钨铁矿）。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{010}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//黑钨矿的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.水镁石 \n";
			
			cin >> option32010x;

			switch(option32010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：水镁石（氢氧镁石）。"<<endl;
					cout << "化学式：Mg(OH)2。" <<endl;
					cout << "颜色：白色、灰白色，含有锰或铁者呈红褐色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：断口呈玻璃光泽，解理面为珍珠光泽" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：2.5。" <<endl;
					cout << "解理：平行{0001}极完全。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//水镁石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.三水铝石（铝土矿） \n";
			
			cin >> option32020x;

			switch(option32020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：三水铝石（铝土矿）。"<<endl;
					cout << "化学式：Al(OH)3。" <<endl;
					cout << "颜色：白色，常带灰、绿和褐色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面呈珍珠光泽，集合体和隐晶质者黯淡。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{001}极完全。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//三水铝石（铝土矿）的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.针铁矿（褐铁矿） \n";
			
			cin >> option32030x;

			switch(option32030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：针铁矿（褐铁矿）。"<<endl;
					cout << "化学式：α-FeOOH。" <<endl;
					cout << "颜色：褐黄至褐红色。" <<endl;
					cout << "条痕：褐黄色。" <<endl;
					cout << "光泽：半金属光泽；结核状、土状者光泽黯淡。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{010}完全。" <<endl;
					cout << "比重：4.28，但呈土状者可低至3.3。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//针铁矿（褐铁矿）的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.水锰矿 \n";
			cout << "2.硬锰矿 \n";
			
			cin >> option32040x;

			switch(option32040x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：水锰矿。"<<endl;
					cout << "化学式：MnO(OH)。" <<endl;		
					cout << "颜色：暗钢灰至黑色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：半金属光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：平行{010}完全，平行{110}和{001}中等。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//水锰矿的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：硬锰矿。"<<endl;
					cout << "化学式：mMnO·MnO2·nH2O。" <<endl;
					cout << "颜色：。" <<endl;
					cout << "条痕：黑色。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：。" <<endl;
					cout << "解理：。" <<endl;
					cout << "比重：。" <<endl;
					cout << "其它：胶体形态，硬度较高，加H2O2剧烈起泡。" <<endl<<endl<<endl<<endl<<endl;		//硬锰矿的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.锆石 \n";
			
			cin >> option41110x;

			switch(option41110x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：锆石（锆英石）。"<<endl;
					cout << "化学式：Zr[SiO4]。" <<endl;
					cout << "颜色：颜色多变，与其成分多变有关。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃至金刚光泽，断口油脂光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//锆石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.橄榄石 \n";
			
			cin >> option41120x;

			switch(option41120x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：橄榄石。"<<endl;
					cout << "化学式：(Mg,Fe)2[SiO4]。" <<endl;
					cout << "颜色：镁橄榄石为白色、淡黄色或淡绿色，随成分中Fe^2+含量的增高，颜色加深而成深黄色至墨绿色或黑色，一般的橄榄石为橄榄绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{010}中等。" <<endl;
					cout << "比重：随Fe^2+含量的增加而增高（3.27~4.37）。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//橄榄石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";		
			cout << "1.石榴子石 \n";
			
			cin >> option41130x;

			switch(option41130x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：石榴子石。"<<endl;
					cout << "化学式：A3B2[SiO4]3，其中A代表+2价阳离子Mg^2+、Fe^2+、Mn^2+、Ca^2+等及+1价阳离子Y^+、K^+、Na^+等，";
					cout << "B代表+3价阳离子Al^3+、Fe^3+、Cr^3+、V^3+及+4价阳离子Ti^4+、Zr^4+等。" <<endl;
					cout << "颜色：颜色各种各样，受成分影响，但没有严格的规律性。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，断口油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：中。一般随Fe、Mn、Ti含量增加而增大" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//石榴子石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.红柱石 \n";
			cout << "2.蓝晶石 \n";
			
			cin >> option41140x;

			switch(option41140x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：红柱石。"<<endl;
					cout << "化学式：Al2[SiO4]O。" <<endl;		
					cout << "颜色：常呈灰色、黄色、褐色、玫瑰色、肉红色或深绿色（含锰的变种），无色者少见。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：平行{110}的两组中等解理。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//红柱石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：蓝晶石。"<<endl;
					cout << "化学式：Al2[SiO4]O。" <<endl;
					cout << "颜色：蓝色、青色或白色，亦有灰色、绿色、黄色、粉红色和黑色者。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面上有珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：随方向不同而异：在（100）面上，平行c轴方向为4.5，垂直c轴方向为6，而在（010）和（110）面上垂直c轴方向则为7，因此也叫二硬石。" <<endl;
					cout << "解理：{100}完全，{010}中等；{001}有裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//蓝晶石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.黄玉 \n";
			
			cin >> option41150x;

			switch(option41150x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：黄玉（又名黄晶）。"<<endl;
					cout << "化学式：Al2[SiO4](F,OH)2。" <<endl;
					cout << "颜色：无色或微带蓝绿色、黄色、乳白色、黄褐色或红黄色等。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：平行{001}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//黄玉的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.十字石 \n";
			
			cin >> option41160x;

			switch(option41160x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：十字石。"<<endl;
					cout << "化学式：FeAl4[SiO4]2O2(OH)2。" <<endl;
					cout << "颜色：深褐、红褐、黄褐色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，但变化后（或不纯净）常显暗淡无光或如土状。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{010}中等。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//十字石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.榍石 \n";
			
			cin >> option41170x;

			switch(option41170x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：榍石。"<<endl;
					cout << "化学式：CaTi[SiO4]O。" <<endl;
					cout << "颜色：蜜黄色、褐色、绿色、灰色、黑色，成分中含有较多量的MnO时，可呈红色或玫瑰色。" <<endl;
					cout << "条痕：无色或白色。" <<endl;
					cout << "光泽：金刚光泽、油脂光泽或树脂光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{010}中等；具{221}裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//榍石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.绿帘石 \n";
			
			cin >> option41180x;

			switch(option41180x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：绿帘石。"<<endl;
					cout << "化学式：Ca2Fe^(罗马数字三)Al2[Si2O7][SiO4]O(OH)。" <<endl;
					cout << "颜色：灰色、黄色、黄绿色、绿褐色，或近于黑色，颜色随Fe^3+含量增加而变深，很少量的Mn^2+的类质同像替代使颜色显不同程度的粉红色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}完全。" <<endl;
					cout << "比重：中（随Fe含量增加而变大）。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//绿帘石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.绿柱石 \n";
			cout << "2.堇青石 \n";
			
			cin >> option41190x;

			switch(option41190x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：绿柱石。"<<endl;
					cout << "化学式：Be3Al2[Si6O18]。" <<endl;
					cout << "颜色：纯的绿柱石为无色透明，常见的颜色有绿色、黄绿色、粉红色、深的鲜绿色等，深蓝色的称海蓝宝石，其蓝色由Fe^2+引起，碧绿苍翠的称祖母绿，";		
					cout << "其颜色由Cr2O3引起，含Cs则呈粉红色，含少量Fe2O3及Cl则呈黄绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//绿柱石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：堇青石。"<<endl;
					cout << "化学式：(Mg,Fe)2Al3[AlSi5O18]。" <<endl;
					cout << "颜色：无色或浅蓝色、浅黄色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{010}中等；贝壳状断口。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//堇青石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.电气石 \n";
			
			cin >> option411100x;

			switch(option411100x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：电气石。"<<endl;
					cout << "化学式：NaR3Al6[Si6O18]{BO3]3(OH,F)4。" <<endl;
					cout << "颜色：随成分不同而异：富含Fe呈黑色，富含Li、Mn和Cs的电气石呈玫瑰色，亦呈淡蓝色，富含Mg呈黄色和褐色，富含Cr呈深绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理，有时可有垂直L^3的裂开。" <<endl;
					cout << "比重：中。随成分中的Fe、Mn含量增加而增大。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//电气石的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.顽火辉石 \n";
			cout << "2.紫苏辉石 \n";
			
			cin >> option41211x;

			switch(option41211x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：顽火辉石。"<<endl;
					cout << "化学式：Mg2[SiO6]。" <<endl;		
					cout << "颜色：无色、黄色至灰褐色。" <<endl;
					cout << "条痕：无色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{210}完全，夹角87°；具{100}、{001}裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//顽火辉石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：紫苏辉石。"<<endl;
					cout << "化学式：(Mg,Fe)2[Si2O6]。" <<endl;
					cout << "颜色：灰绿色，灰褐色。" <<endl;
					cout << "条痕：无色至浅绿、浅灰。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{210}完全，夹角87°。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//紫苏辉石的属性及其特性
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
	cout << endl << endl;
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
					cout << "名称：透辉石-钙铁辉石。"<<endl;
					cout << "化学式：CaMg[Si2O6]-CaFe[Si2O6]。" <<endl;
					cout << "颜色：白色、灰绿、绿至褐绿、暗绿色，黑色。" <<endl;
					cout << "条痕：无色至深绿。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//透辉石-钙铁辉石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：普通辉石。"<<endl;
					cout << "化学式：Ca(Mg,Fe^(罗马数字二),Fe^(罗马数字三),Ti,Al)[(Si,Al)2O6]。" <<endl;
					cout << "颜色：灰褐、褐、绿黑色。" <<endl;
					cout << "条痕：无色至浅褐色。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全，夹角87°；具{100}{010}裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//普通辉石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：硬玉。"<<endl;
					cout << "化学式：NaAl[Si2O6]。" <<endl;
					cout << "颜色：无色、白色、浅绿或苹果绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全，解理夹角87°；断口不平坦，呈刺状。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//硬玉的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：锂辉石。"<<endl;
					cout << "化学式：LiAl[Si2O6]。" <<endl;		
					cout << "颜色：灰白色，烟灰色，灰绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面微呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全，夹角87°；具{100}、{010}裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//锂辉石的属性及其特性
					break;
				case 5:
					cout <<endl<<endl;
					cout << "名称：霓石。"<<endl;
					cout << "化学式：NaFe^(罗马数字三)[Si2O6]。" <<endl;
					cout << "颜色：暗绿色。" <<endl;
					cout << "条痕：无色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全，夹角87°。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//霓石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.硅灰石 \n";
			
			cin >> option41220x;

			switch(option41220x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：硅灰石。"<<endl;
					cout << "化学式：Ca3[Si3O9]。" <<endl;
					cout << "颜色：白色或带灰和浅红的白色，有少数呈肉红色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面有时呈现珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{100}完全，{001}、{102}中等，（100）∩（001）= 74°。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//硅灰石的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.直闪石 \n";
			
			cin >> option41231x;

			switch(option41231x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：直闪石。"<<endl;
					cout << "化学式：(Mg,Fe)7[Si4O7]2(OH)2。" <<endl;
					cout << "颜色：白色、灰色或带绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{210}完全，夹角125°30′。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//直闪石的属性及其特性
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
	cout << endl << endl;
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
					cout << "名称：镁铁闪石。"<<endl;
					cout << "化学式：（Mg,Fe^(罗马数字二)）7[Si4O11]2(OH)2。" <<endl;
					cout << "颜色：深绿到棕色，随成分中Fe^(罗马数字二)含量增加而变深。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：半透明到透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//镁铁闪石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：透闪石-阳起石。"<<endl;
					cout << "化学式：Ca2Mg5[Si4O11]2(OH)2-Ca2(Mg,Fe^(罗马数字二))5[Si4O11]2(OH)2。" <<endl;
					cout << "颜色：透闪石为白色或灰色，阳起石为深浅不同的绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：沿{110}完全；有时可见（100）裂开。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//透闪石-阳起石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：普通角闪石。"<<endl;
					cout << "化学式：Ca2Na(Mg,Fe^(罗马数字二)4(Al,Fe^(罗马数字三)[(Si,Al)4O11]2(OH)2。" <<endl;		
					cout << "颜色：深绿色到黑绿色。" <<endl;
					cout << "条痕：无色或白色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//普通角闪石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：蓝闪石。"<<endl;
					cout << "化学式：Na2Mg3Al2[Si4O11]2(OH)2。" <<endl;
					cout << "颜色：灰蓝、深蓝至蓝黑色。" <<endl;
					cout << "条痕：蓝灰色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{110}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//蓝闪石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.矽线石 \n";
			
			cin >> option41240x;

			switch(option41240x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：矽线石。"<<endl;
					cout << "化学式：Al[AlSiO5]。" <<endl;
					cout << "颜色：白色、灰色或浅绿、浅褐色等。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{010}完全，此解理面平行结构中的双链。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//矽线石的属性及其特性
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
	cout << endl << endl;
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
				case 0:		
					break;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.高岭石 \n";
			
			cin >> option41310x;

			switch(option41310x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：高岭石。"<<endl;
					cout << "化学式：Al4[Si4O10](OH)8。" <<endl;
					cout << "颜色：纯者白色，因含杂质可染成深浅不同的黄、褐、红、绿、蓝等各种颜色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：致密块状呈土状光泽或蜡状光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{001}极完全解理。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//高岭石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.蛇纹石 \n";
			
			cin >> option41320x;

			switch(option41320x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：蛇纹石。"<<endl;
					cout << "化学式：Mg6[Si4O10](OH)8。" <<endl;
					cout << "颜色：深绿、黑绿、黄绿等各种色调的绿色，并常呈青、绿斑驳如蛇皮。铁的代入使颜色加深。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：油脂或蜡状光泽，纤维状者呈丝绢光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：除纤维状者外，解理{001}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//高岭石的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.白云母 \n";
			
			cin >> option41331x;

			switch(option41331x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：白云母。"<<endl;
					cout << "化学式：K{Al2[AlSi3O10](OH)2}。" <<endl;
					cout << "颜色：从无色到浅彩色多变。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽、珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{001}极完全，{110}、{010}不完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//白云母的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.黑云母-金云母 \n";
			
			cin >> option41332x;

			switch(option41332x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：黑云母-金云母。"<<endl;
					cout << "化学式：K{(Mg,Fe)3[AlSi3O10](OH)2}-K{Mg3[AlSi3O10](OH)2}。" <<endl;
					cout << "颜色：以黑、深褐色为主，富Ti^4+者浅红褐色，富Fe^3+者绿色；金云母以棕色、浅黄色为主。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽、珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{001}极完全，{110}、{010}不完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//黑云母-金云母的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.锂云母 \n";
			
			cin >> option41333x;

			switch(option41333x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：锂云母。"<<endl;
					cout << "化学式：K{ Li2-x Al1+x [ Al2x Si4-2x O10](F,OH)2} (x=0~0.5)。" <<endl;
					cout << "颜色：玫瑰色、浅紫色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽、珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{001}极完全，{110}、{010}不完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//锂云母的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.滑石 \n";
			
			cin >> option41341x;

			switch(option41341x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：滑石。"<<endl;
					cout << "化学式：Mg3[Si4O10](OH)2。" <<endl;
					cout << "颜色：纯者为白色，含杂质时可呈其他浅色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面呈珍珠光泽晕彩。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{001}极完全；致密块者呈贝壳状断口。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：富有滑腻感，有良好的润滑性能。" <<endl<<endl<<endl<<endl<<endl;		//滑石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.叶蜡石 \n";
			
			cin >> option41342x;

			switch(option41342x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：叶腊石。"<<endl;
					cout << "化学式：Al2[Si4O10](OH)2。" <<endl;
					cout << "颜色：白色、浅绿、浅黄或淡灰色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，致密块状者呈油脂光泽，解理面呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{001}极完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：有滑感，解理片具挠性。" <<endl<<endl<<endl<<endl<<endl;		//叶蜡石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.蒙脱石 \n";
			
			cin >> option41350x;

			switch(option41350x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：蒙脱石。"<<endl;
					cout << "化学式：Ex(H2O)4 { Al2-x,Mgx}2 [(Si,Al)4 O10] (OH)2}。" <<endl;
					cout << "颜色：白色。有时为浅灰、粉红、浅绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：鳞片状者{001}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：加水膨胀。" <<endl<<endl<<endl<<endl<<endl;		//蒙脱石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.蛭石 \n";
			
			cin >> option41360x;

			switch(option41360x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：蛭石。"<<endl;
					cout << "化学式：(Mg,Ca)0.3~0.45(H2O)n{(Mg,Fe^(罗马数字三),Al)3[(Si,Al)4 O10](OH)2}。" <<endl;
					cout << "颜色：褐、黄褐、金黄、青铜黄色，有时带绿色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：较黑云母弱，常呈油脂光泽或珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{001}完全，解理片微具或不具弹性。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//蛭石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.绿泥石 \n";
			
			cin >> option41370x;

			switch(option41370x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：绿泥石。"<<endl;
					cout << "化学式：Y3[Z4O10](OH)2+Y3(OH)6。Y为Mg、Al、Fe，Z为Si、Al。" <<endl;
					cout << "颜色：大多带绿色调，但随成分而变化，富Mg为浅蓝绿色，富Fe者颜色加深，为深绿到黑绿，含Mn呈浅褐、橘红色，含Cr呈浅紫到玫瑰色。" <<endl;
					cout << "条痕：无色。" <<endl;
					cout << "光泽：玻璃光泽，解理面呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。随含铁含量增加，硬度可增加至3。" <<endl;
					cout << "解理：{001}完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//绿泥石的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
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
	cout << endl << endl;
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
					cout << "名称：透长石。"<<endl;
					cout << "化学式：K[AlSi3O8]。" <<endl;
					cout << "颜色：无色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面上有时呈珍珠光泽。" <<endl;
					cout << "透明度：透明度很高，类似玻璃。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}和{010}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//透长石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：正长石。"<<endl;
					cout << "化学式：K[AlSi3O8]。" <<endl;
					cout << "颜色：肉红色、浅黄色或灰白色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面上有时呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}和{010}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//正长石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：微斜长石。"<<endl;
					cout << "化学式：K[AlSi3O8]。" <<endl;		
					cout << "颜色：肉红色、浅黄色或灰白色。个别含铁量高的微斜长石呈黄色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面上有时呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}和{010}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//微斜长石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：歪长石。"<<endl;
					cout << "化学式：（Na,K）[AlSi3O8]。" <<endl;
					cout << "颜色：无色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，解理面上有时呈珍珠光泽。" <<endl;
					cout << "透明度：透明度很高，类似玻璃。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}和{010}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//歪长石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.斜长石 \n";
			
			cin >> option41412x;

			switch(option41412x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：斜长石。"<<endl;
					cout << "化学式：Na[AlSi3O8]-Ca[Al2Si2O8]。" <<endl;
					cout << "颜色：白色或灰白色，如出现其他色调时，往往是由杂质引起的。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：{001}及{010}解理完全。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//斜长石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.白榴石 \n";
			
			cin >> option41420x;

			switch(option41420x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：白榴石。"<<endl;
					cout << "化学式：K[AlSi2O6]。" <<endl;
					cout << "颜色：常呈白色、灰色或炉灰色，有时带有浅黄色调。" <<endl;
					cout << "条痕：无色或白色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//白榴石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.霞石 \n";
			
			cin >> option41430x;

			switch(option41430x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：霞石。"<<endl;
					cout << "化学式：KNa3[AlSiO4]4。" <<endl;
					cout << "颜色：常呈无色、白色、灰色或微带各种色调。" <<endl;
					cout << "条痕：无色或白色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明，浑浊者似乎不透明。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：不发育；具贝壳状断口。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//霞石的属性及其特性
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
	cout << endl << endl;
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
					cout << "名称：丝光沸石。"<<endl;
					cout << "化学式：(Na2,K2,Ca)2[AlSi5O12]4·12H2O。" <<endl;
					cout << "颜色：多为无色或白色，因含杂质而染成其他颜色，或因阳离子交换后，有色素的离子进入而染色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：一组完全解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//丝光沸石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：方沸石。"<<endl;
					cout << "化学式：Na2[AlSi2O6]2·2H2O。" <<endl;
					cout << "颜色：多为无色或白色，因含杂质而染成其他颜色，或因阳离子交换后，有色素的离子进入而染色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：一组完全解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//方沸石的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：片沸石。"<<endl;
					cout << "化学式：(Ca,Na2)[Al2Si7O18]·6H2O。" <<endl;
					cout << "颜色：多为无色或白色，因含杂质而染成其他颜色，或因阳离子交换后，有色素的离子进入而染色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：一组完全解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//片沸石的属性及其特性
					break;
				case 4:
					cout <<endl<<endl;
					cout << "名称：钙十字沸石。"<<endl;
					cout << "化学式：(K2,Na2,Ca)[AlSi3O8]2·6H2O。" <<endl;		
					cout << "颜色：多为无色或白色，因含杂质而染成其他颜色，或因阳离子交换后，有色素的离子进入而染色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：一组完全解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//钙十字沸石的属性及其特性
					break;
				case 5:
					cout <<endl<<endl;
					cout << "名称：菱沸石。"<<endl;
					cout << "化学式：(Ca,Na2)[AlSi2O6]2·6H2O。" <<endl;
					cout << "颜色：多为无色或白色，因含杂质而染成其他颜色，或因阳离子交换后，有色素的离子进入而染色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：一组完全解理。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//菱沸石的属性及其特性
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
	cout << endl << endl;
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.方解石 \n";
			cout << "2.菱镁矿-菱铁矿 \n";
			cout << "3.白云石 \n";
			
			cin >> option42010x;

			switch(option42010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：方解石。"<<endl;
					cout << "化学式：Ca[CO3]。" <<endl;
					cout << "颜色：无色或白色，有时被Fe、Mn、Cu等元素染成浅黄、浅红、紫、褐黑色。无色透明的方解石称为冰洲石" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{10-14}完全；在应力影响下，沿{01-18}聚片双晶方向滑移成裂开" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：加HCl急剧起泡。" <<endl<<endl<<endl<<endl<<endl;		//方解石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：菱镁矿-菱铁矿。"<<endl;
					cout << "化学式：Mg[CO3]-Fe[CO3]。" <<endl;		
					cout << "颜色：富Mg端员白色或浅黄白色、灰白色，有时带淡红色调，富Fe者呈黄至褐色、棕色。。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{10-14}完全。" <<endl;
					cout << "比重：中，富Fe者相对密度和折射率均增大。" <<endl;
					cout << "其它：加冷HCl不起泡或作用极慢，加热HCl则剧烈起泡。" <<endl<<endl<<endl<<endl<<endl;		//菱镁矿-菱铁矿的属性及其特性
					break;
				case 3:
					cout <<endl<<endl;
					cout << "名称：白云石。"<<endl;
					cout << "化学式：CaMg[CO3]2。" <<endl;
					cout << "颜色：纯者多为白色，含铁者灰色-暗褐色，含铁白云石风化后，表面变为褐色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{10-14}完全。" <<endl;
					cout << "比重：中.随成分中Fe、Mn、Pb、Zn含量的增多而增大。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//白云石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.文石 \n";
			
			cin >> option42020x;

			switch(option42020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：文石。"<<endl;
					cout << "化学式：Ca[CO3]。" <<endl;
					cout << "颜色：通常为白色、黄白色，有时呈浅绿色、灰色等。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，断口为油脂光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：无解理，或有时见{010}不完全至中等解理；贝壳状断口。" <<endl;
					cout << "比重：中。成分中含Sr、Ba者相对密度增大" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//文石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.孔雀石 \n";
			cout << "2.蓝铜矿 \n";
			
			cin >> option42030x;

			switch(option42030x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：孔雀石。"<<endl;
					cout << "化学式：Cu2[CO3](OH)2。" <<endl;		
					cout << "颜色：一般为绿色、但一般色调变化较大，从暗绿、鲜绿到白色。" <<endl;
					cout << "条痕：浅绿色。" <<endl;
					cout << "光泽：玻璃至金刚光泽，纤维状者呈丝绢光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{201}{010}完全。" <<endl;
					cout << "比重：重。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//孔雀石的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：蓝铜矿。"<<endl;
					cout << "化学式：Cu3[CO3]2(OH)2。" <<endl;
					cout << "颜色：深蓝色，土状块体呈浅蓝色。" <<endl;
					cout << "条痕：浅蓝色。" <<endl;
					cout << "光泽：晶体呈玻璃光泽，土状块体呈土状光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{011}{100}完全或中等；贝壳状断口。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：遇HCl起泡。有Cu^2+的焰色反应。" <<endl<<endl<<endl<<endl<<endl;		//蓝铜矿的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.重晶石-天青石 \n";
			
			cin >> option43010x;

			switch(option43010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：重晶石-天青石。"<<endl;
					cout << "化学式：Ba[SO4]-Sr[SO4]。" <<endl;
					cout << "颜色：重晶石特点为：纯净的晶体无色透明，一般呈白色，灰白色，浅黄色，淡褐色。天青石为天蓝色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽；解理面呈珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{001}完全，{210}中等。" <<endl;
					cout << "比重：重晶石-重；天青石-中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//重晶石-天青石的属性及其特性
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
	cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.石膏 \n";
			cout << "2.硬石膏 \n";
			
			cin >> option43020x;

			switch(option43020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：石膏。"<<endl;
					cout << "化学式：Ca[SO4]·2H2O。" <<endl;		
					cout << "颜色：通常为白色及无色，无色透明晶体称为透石膏，有时因含其他杂质而染成灰、浅黄、浅褐等色。" <<endl;
					cout << "条痕：白色。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：透明。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{010}极完全，{100}和{011}中等，解理片裂成面夹角为66°和114°的菱形体，解理薄片具挠性。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//石膏的属性及其特性
					break;
				case 2:
					cout <<endl<<endl;
					cout << "名称：硬石膏。"<<endl;
					cout << "化学式：Ca[SO4]。" <<endl;
					cout << "颜色：白色，常微带浅蓝、浅灰或浅红色，被铁的氧化物或黏土等染成红色、褐色或灰色。" <<endl;
					cout << "条痕：白或浅灰白色。晶体无色透明。" <<endl;
					cout << "光泽：玻璃光泽。解理面珍珠光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{010}完全，{100}、{001}中等（近完全）（{100}比{001}好）。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//硬石膏的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.磷灰石 \n";
			
			cin >> option44010x;

			switch(option44010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：磷灰石。"<<endl;
					cout << "化学式：Ca5[PO4]3(F,OH)。" <<endl;
					cout << "颜色：无杂质者为无色透明，但常呈浅绿色、黄绿色、褐红色、浅紫色，沉积岩中形成的磷灰石因含有机质染成深灰至黑色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽，断口呈油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{0001}不发育；断口不平坦。" <<endl;
					cout << "比重：中。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//磷灰石的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.白钨矿 \n";
			
			cin >> option45010x;

			switch(option45010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：白钨矿。"<<endl;
					cout << "化学式：Ca[WO4]。" <<endl;
					cout << "颜色：白色、黄白、浅紫等。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：油脂光泽或金刚光泽。" <<endl;
					cout << "透明度：透明至半透明。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{111}中等；断口参差状。" <<endl;
					cout << "比重：重。相对密度随Mo的增加而降低。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//白钨矿的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.硼镁铁矿 \n";
			
			cin >> option46010x;

			switch(option46010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：硼镁铁矿。"<<endl;
					cout << "化学式：(Mg,Fe)2Fe^(罗马数字三)[BO3]O2。" <<endl;
					cout << "颜色：暗绿色至黑色（随含铁量增大颜色变深）。" <<endl;
					cout << "条痕：浅黑绿色至黑色。" <<endl;
					cout << "光泽：光泽暗淡，纤维状体的新鲜面上有丝绢光泽。" <<endl;
					cout << "透明度：不透明（含镁高者稍透明）。" <<endl;
					cout << "硬度：>5.5。" <<endl;
					cout << "解理：无解理。" <<endl;
					cout << "比重：中~重。含铁量高，相对密度增大。" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//硼镁铁矿的属性及其特性
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
	cout << endl << endl;
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.萤石 \n";
			
			cin >> option50010x;

			switch(option50010x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：萤石。"<<endl;
					cout << "化学式：CaF2。" <<endl;
					cout << "颜色：颜色多样，有无色、白色、黄色、绿色、蓝色、紫色、紫黑色及黑色。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：2.5~5.5。" <<endl;
					cout << "解理：{111}完全。" <<endl;
					cout << "比重：中。（含Y、Ce者相对密度增大，钇萤石相对密度3.3）" <<endl;
					cout << "其它：。" <<endl<<endl<<endl<<endl<<endl;		//萤石的属性及其特性
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
			cout << endl << endl;
			cout << "请选择具体矿物： \n";
			cout << "1.石盐 \n";
			
			cin >> option50020x;

			switch(option50020x)
			{
				case 1:
					cout <<endl<<endl;
					cout << "名称：石盐。"<<endl;
					cout << "化学式：NaCl。" <<endl;
					cout << "颜色：无色透明者少，因含杂质而呈各种颜色，呈蓝色者与钠离子获得自由电子后变为中性原子有关（常因钾放射性同位素引起）。" <<endl;
					cout << "条痕：。" <<endl;
					cout << "光泽：玻璃光泽。受风化后呈油脂光泽。" <<endl;
					cout << "透明度：。" <<endl;
					cout << "硬度：<2.5。" <<endl;
					cout << "解理：{100}完全（平行电性中和面）。" <<endl;
					cout << "比重：轻。" <<endl;
					cout << "其它：易溶于水，有咸味。" <<endl<<endl<<endl<<endl<<endl;		//石盐的属性及其特性
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