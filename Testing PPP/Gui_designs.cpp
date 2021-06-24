

#include "../../../Graph.h"
#include "../../../Simple_window.h"

using namespace Graph_lib; // our graphics facilities are in Graph_lib


//14.3.3

//struct B {
//	virtual void f() const { cout << "B::f "; }
//	void g() const { cout << "B::g "; } // not virtual 
//};
//struct D : B {
//	void f() const { cout << "D::f "; } // overrides B::f 
//	void g() { cout << "D::g "; } 
//}; 
//struct DD : D {
//	void f() { cout << "DD::f "; } // doesn’t override D::f (not const) 
//	void g() const { cout << "DD::g "; } 
//};

//struct B {
//	virtual void f() const { cout << "B::f "; }
//	void g() const { cout << "B::g "; } // not virtual
//};
//struct D : B {
//	void f() const override { cout << "D::f "; } // overrides B::f
//	void g() override { cout << "D::g "; } // error: no virtual B::g to override
//};
//struct DD : D {
//	void f() override { cout << "DD::f "; } // error: doesn’t override
//	// D::f (not const)
//	void g() const override { cout << "DD::g "; } // error: no virtual D::g
//	// to override
//};



//void call(const B& b)
//// a D is a kind of B, so call() can accept a D 
//// a DD is a kind of D and a D is a kind of B, so call() can accept a DD 
//{
//	b.f();
//	b.g();
//}


//15.2 

double one(double) { return 1; }

double slope(double x) { return x / 2; }

double square(double x) { return x * x; }

int main()
{
	//Chapter12: Display Model 

	//12.3 A first Example

	//Point tl{ 100,100 }; // to become top left corner of window
	//Simple_window win{ tl,600,400,"Canvas" }; // make a simple window
	//
	//Graph_lib::Polygon poly; // make a shape (a polygon)
	//poly.add(Point{ 300,200 }); // add a point
	//poly.add(Point{ 350,100 }); // add another point
	//poly.add(Point{ 400,200 }); // add a third point

	//poly.set_color(Color::dark_green); // adjust properties of poly
	//win.attach(poly); // connect poly to the window
	//win.wait_for_button(); // give control to the display engine

	//12.7 Using Shape Primitives

	//A simple Window
	
	//Point tl{ 100,100 };
	//Simple_window win{tl,600,400,"Canvas"};
	//win.wait_for_button();

	////Axis

	//Axis xa{ Axis::x,Point{20,300},280,10,"xaxis" };
	//xa.set_color(Color::black);
	//win.attach(xa); //attach xa to window, win
	//win.set_label("Canvas 2");
	//win.wait_for_button();

	//Axis ya{ Axis::y,Point{20,300},280,10,"y-axis" };
	//ya.set_color(Color::black);
	//win.attach(ya);
	//win.set_label("Canvas 3");
	//win.wait_for_button();

	////Graphing a Function
	//Function sine{ sin,0,100,Point{30,150},1000,50,50 }; // sine curve 
	//// plot sin() in the range [0:100) with (0,0) at (20,150) 
	//// using 1000 points; scale x values *50, scale y values *50 
	//win.attach(sine);
	//win.set_label("Canvas #4");
	//win.wait_for_button();

	////Polygons

	//sine.set_color(Color::blue);
	//
	//Graph_lib::Polygon poly; // a polygon; a Polygon is a kind of Shape 
	//
	//poly.add(Point{300,200}); // three points make a triangle 
	//poly.add(Point{350,100});
	//poly.add(Point{400,200}); 
	//
	//poly.set_color(Color::red);
	//poly.set_style(Line_style::dash);
	//
	//win.attach(poly);
	//win.set_label("Canvas 5");
	//win.wait_for_button();

	////Recatngles

		//Graph_lib::Rectangle r{ Point{200+i,200},10,10 };
		//r.set_color(Color::red);
		//win.attach(r);
		////win.set_label("Canavas 6");
		//win.wait_for_button();

	////Fill

	//r.set_fill_color(Color::yellow); // color the inside of the rectangle 
	//poly.set_style(Line_style(Line_style::dash,4));
	//win.set_label("Canvas #7");
	//win.wait_for_button();

	////Text
	//
	//Text t{ Point{150,150},"hello graphical world" };
	//t.set_fill_color(Font::courier_bold_italic);
	//t.set_font_size(20);
	//win.attach(t);
	//win.set_label("Canvas #8");
	//win.wait_for_button();

	////Images

	//Image i{ Point{100,50},"friends.jpg" };
	//win.attach(i);
	//win.set_label("Canvas 9");
	//win.wait_for_button();

	//i.move(300, 150);
	//win.set_label("Canvas 10");
	//win.wait_for_button();


	//Chapter 13: Graphics Classes

	//Simple_window win3{ Point{10,10}, 600,400,"Grid"};

	//13.3 Lines

	//int x_size = win3.x_max(); // get the size of our window 
	//int y_size = win3.y_max();
	//int x_grid = 80;
	//int y_grid = 40;
	//
	//Lines grid;
	//for (int x=x_grid; x<x_size; x+=x_grid)
	//	grid.add(Point{x,0},Point{x,y_size}); // vertical line 
	//
	//for (int y = y_grid; y<y_size; y+=y_grid) 
	//	grid.add(Point{0,y},Point{x_size,y}); // horizontal line
	//grid.set_color(Color::blue);

	//win3.attach(grid);
	
	//13.10 Managing unnamed objects

	/*win3.set_label("16*16 color Matrix");
	Vector_ref<Graph_lib::Rectangle> vr;

	for (int i = 0; i < 16; ++i) 
		for (int j = 0; j < 16; ++j) 
		{ vr.push_back(new Graph_lib::Rectangle{ Point{i * 40,j * 40},40,40 });
	vr[vr.size()-1].set_fill_color(Color{ i * 16 + j }); 
	win3.attach(vr[vr.size()-1]); }*/

    //13.14 Marked_polyline

	/*Marked_polyline mpl{ "1234a" };
	mpl.add(Point{ 100,100 });
	mpl.add(Point{ 150,200 });
	mpl.add(Point{ 250,250 });
	mpl.add(Point{ 300,200 });
	mpl.add(Point{ 300,175 });
	mpl.set_color(Color::black);
	win3.attach(mpl);
	win3.set_label("Marked_polyline");*/
    //win3.wait_for_button();

	
	////Chapter 14 Graphics Classes Design

	//14.3.3 Overriding

	/*B b; D d; DD dd;

	call(b);
	call(d);
	call(dd);

	b.f();
	b.g();

	d.f();
	d.g();

	dd.f();
	dd.g();*/



	////Chapter 15 Graphing Functions and Data

	//15.2 Graphing simple functions
    
    constexpr int xmax = 600; // window size
	constexpr int ymax = 400;

	constexpr int x_orig = xmax / 2; // position of (0,0) is center of window
	constexpr int y_orig = ymax / 2;
	const Point orig { x_orig, y_orig };

	constexpr int r_min = -10; // range [–10:11)
	constexpr int r_max = 11;

	constexpr int n_points = 400; // number of points used in range

	constexpr int x_scale = 30; // scaling factors
	constexpr int y_scale = 30;
	Simple_window win{ Point{100,100},xmax,ymax,"Function graphing" };

	Function s{ one,r_min,r_max,orig,n_points,x_scale,y_scale };
	Function s2{ slope,r_min,r_max,orig,n_points,x_scale,y_scale };
	Function s3{ square,r_min,r_max,orig,n_points,x_scale,y_scale };
	
	s.set_color(Color::black);
	s2.set_color(Color::black);
	s3.set_color(Color::black);
	win.attach(s);
	win.attach(s2);
	win.attach(s3);
	win.wait_for_button();

	Text ts{ Point{100,y_orig-40},"one" };
	Text ts2{ Point{100,y_orig + y_orig / 2-20},"x/2" };
	Text ts3{ Point{x_orig-100,20},"x*x" };
	
	win.attach(ts);
	win.attach(ts2);
	win.attach(ts3);
	win.set_label("Function graphing: label functions");
	win.wait_for_button();

	constexpr int xlength = xmax-40; // make the axis a bit smaller than the window
	constexpr int ylength = ymax-40;

	Axis x{ Axis::x,Point{20,y_orig},
	xlength, xlength / x_scale, "one notch == 1" };
	Axis y{ Axis::y,Point{x_orig, ylength + 20},
	ylength, ylength / y_scale, "one notch == 1" };
	
	x.set_color(Color::red);
	y.set_color(Color::red);
	
	win.attach(x);
	win.attach(y);
	win.wait_for_button();

	//15.3.3 Lamda Exprssions

	Function s5{ [](double x) { return cos(x) + slope(x); }, r_min,r_max,orig,400,30,30 };

	//specified the return type explicitly 
		Function s5{ [](double x) -> double { return cos(x) + slope(x); }, r_min,r_max,orig,400,30,30 };



}


