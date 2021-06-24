#include"../../../Graph.h"
#include"../../../Simple_window.h"
#include"My_Graph.h"
#include<stdexcept>


//Drills

//class B1 {
//
//public:
//	virtual void vf() { cout << "B1::vf()\n"; }
//	void f() { cout << "B1::f()\n"; }
//	virtual void pvf() = 0;
//};
//
//class D1 :public B1 {
//
//public:
//	void vf() override { cout << "D1::vf()\n"; }
//	void f() { cout << "D1::f()\n"; }
//};
//
//class D2 : public D1 {
//
//public:
//	void pvf() { cout << "D2::pvf()\n"; }
//};
//
//class B2 {
//
//public:
//	virtual void pvf() = 0;
//};
//
//class D21:public B2 {
//
//public:
//	string s_d21="D21::s_d21";
//	void  pvf() { cout << s_d21<<endl; }
//};
//
//class D22: public B2 {
//
//public:
//	int i_d22=22;
//	void pvf() { cout << i_d22 << endl; }
//};
//
//void f( B2& b2) {
//	b2.pvf();
//}


int main() 

	try
	{
	/*using Graph_lib::Rectangle;
	using Graph_lib::Polygon;
	using Graph_lib::Ellipse;
	using My_graph_lib::Arc;
	using My_graph_lib::Arrow;*/


	//Chapter 12

	//Simple_window win{ Point{100,100},600,400,"Exercises Chpater 12" };

	//E1

	/*Graph_lib::Rectangle r{ Point{200,100},120,30 };
	r.set_color(Color::blue);
	win.attach(r);

	Graph_lib::Polygon poly;
	poly.add(Point{ 100,200 });
	poly.add(Point{ 200,200 });
	poly.add(Point{ 200,260 });
	poly.add(Point{ 100,260 });
	poly.set_color(Color::red);
	win.attach(poly);
	win.set_label("E1");
	win.wait_for_button();*/

	//E2

	/*Graph_lib::Rectangle r{ Point{100,100},100,30 };
	win.attach(r);
	r.set_color(Color::black);*/
		
	/*Text t{ Point{165,215},"Narrow" };
	t.set_font(Font::times_bold_italic);
	t.set_font_size(150);
	t.set_color(Color::dark_red);
	win.attach(t);
	win.wait_for_button();*/


	//E4

	/*int xcord = 120, ycord = 120, w = 40 ,h = 40,counter=1;
		
	for (int i = 0; i <= 2 * h;i += 40) {
		for (int j = 0; j <= 2 * w;j += 40) {


			if (counter % 2 == 0) {

				Graph_lib::Rectangle rect{ Point{xcord + j,ycord + i},w,h };
				rect.set_fill_color(Color::white);
				win.attach(rect);
			}
			if (counter % 2 != 0) {
				Graph_lib::Rectangle rect{ Point{xcord + j,ycord + i},w,h };
				rect.set_fill_color(Color::red);
				win.attach(rect);
			}
			++counter;
		}
	}

	win.wait_for_button();*/

	//E7
	/*Color black(Color::black);

	Graph_lib::Polygon roof;
	roof.add(Point{ 300,200 }); 
	roof.add(Point{350,100});
	roof.add(Point{400,200}); 

	Line line1{ Point{400,200},Point{600,200} };
	Line line2{ Point{350,100},Point{550,100} };
	Line line3{ Point{600,200},Point{550,100} };

	Graph_lib::Rectangle door{ Point{300,200},100,150 };
	Graph_lib::Rectangle room{ Point{400,200},200,150 };
	Graph_lib::Rectangle win1{ Point{460,255},40,40 };
	Graph_lib::Rectangle win2{ Point{520,255},40,40 };

	
	
	line1.set_color(Color::black);
	line2.set_color(Color::black);
	line3.set_color(Color::black);

	roof.set_color(Color::black);
	door.set_color(Color::black);
	room.set_color(black);
	win1.set_color(black);
	win2.set_color(black);

	win.attach(roof);
	win.attach(line1);
	win.attach(line2);
	win.attach(line3);
	win.attach(door);
	win.attach(room);
	win.attach(win1);
	win.attach(win2);*/

	//E9

	/*Image i{ Point{10,10},"Ajay.jpg" };
	win.set_label("Ajay");
	i.set_mask(Point{ 40,40 }, 500, 600);
	i.move(win.x_max()/ 2-200, 10);

	Text caption{ Point{win.x_max()/2-200,650},"Ajay" };
	caption.set_color(Color::dark_green);
	caption.set_font_size(30);
	caption.set_font(Font::courier_bold);

	win.attach(i);
	win.attach(caption);
    win3.wait_for_button();*/

	
	
	///Chapter 13
	
	
     //Drills 

   //Simple_window win13(Point{ 10,10 }, 800, 1000, "Exercises 13");

 //   int x_size = win13.x_max(); // get the size of our window 
	//int y_size = win13.y_max()-200;
	//int x_grid = 100;	
	//int y_grid = 100;
	//
	//Lines grid;
	//for (int x=x_grid; x<=x_size; x+=x_grid)
	//	grid.add(Point{x,0},Point{x,y_size}); // vertical lines
	//
	//for (int y = y_grid; y<=y_size; y+=y_grid) 
	//	grid.add(Point{0,y},Point{x_size,y}); // horizontal lines
	//
	//grid.set_color(Color::black);
	//win13.attach(grid);

	//making grid digonals red

	/*Vector_ref<Rectangle> diagonal;

	Point p{ 0,0 };

	for(int i=0;i<8;++i){
	
		diagonal.push_back(new Rectangle{ p,100,100 });
		diagonal[i].set_fill_color(Color::red);
		win13.attach(diagonal[i]);
		p.x += diagonal[i].width();
		p.y += diagonal[i].height();
	}
	
	win13.put_on_top(grid);

	Image i1{ Point{0,200},"vs.jpg" };
	Image i2{ Point{200,400},"vs.jpg" };
	Image i3{ Point{400,600},"vs.jpg" };
		
	win13.attach(i1);
	win13.attach(i2);
	win13.attach(i3);*/



	/*for (int i = 0;i <= 700;i += 200) {

		for (int j = 0;j <= 700;j += 200) {

			Image ii{ Point{j,i},"ajay.jpg" };
			ii.set_mask(Point{ 120,200 }, 200, 200);
			win13.attach(ii);
			win13.wait_for_button();
		}

	}
	    win13.wait_for_button();
*/


    //Exercises
 



    //E1

   /*Arc a{ Point{210,200},40,0,90 };
   a.set_color(Color::black);
   win13.attach(a);
    
   Mark m{ Point{200,200},'x' };
   m.set_color(Color::dark_red);
   win13.attach(m);*/

   /*Circle c{ Point{200,200},30 };
   c.set_color(Color::dark_blue);
   win13.attach(c);

   Rectangle r{ Point{170,170},60,60 };
   r.set_color(Color::red);
   win13.attach(r);*/

   //E3

   /*Arrow ar{ Point{300,100},Point{200,120} };
   ar.set_color(Color::black);
   win13.attach(ar);
   win13.wait_for_button();*/
	   

   ///Chapter 14
   
   //Drills 

   //B1 b;
   /*D1 d;
   B1& b1 = d;
   

   b.vf();
   b.f();
   d.vf();
   d.f();
   b1.vf();
   b1.f(); */
	
   /*D2 d2;
   d2.vf();
   d2.f();
   d2.pvf();*/

    /*D22 d22;
	D21 d21;

	f(d22);
	f(d21);*/





	}
	catch (const std::exception&e)
	{
		cerr << e.what();
		return 1;
	}
	catch (...)
	{
		cerr << "Unknown exception";
		return 2;
	}

	
