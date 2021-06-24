#include "My_Graph.h"

namespace My_graph_lib {

	
	////Arc////

	Arc::Arc(Point p, int r, double a1, double a2)
		:r{r},a1{ a1 }, a2{ a2 }
	{
		add(Point{ p.x - r, p.y - r });
	}

	/*Arc::Arc(double a1, double a2,  Point sp, Point ep)
		:a1{ a1 }, a2{ a2 },sp{sp},ep{ep}
	{
		add(Point{ p.x - r, p.y - r });

	}*/

	void Arc::draw_lines() const 
	{
		if (fill_color().visibility()) {	// fill
			fl_color(fill_color().as_int());
			fl_pie(point(0).x, point(0).y, r + r - 1, r + r - 1, a1, a2);
			fl_color(color().as_int());	// reset color
		}

		if (color().visibility()) {
			fl_color(color().as_int());
			fl_arc(point(0).x, point(0).y, r + r, r + r, a1, a2);
		}
	}

	////Box////

	//Box::Box(Point p, int ww, int hh)
	//	:w{ww},h{hh}
	//{
	//	if (h <= 0 || w <= 0) error("Bad rectangle: non-positive side"); 
	//	add(p);//centre coordinate
	//}

	/*void Box::draw_lines() const
	{ 
		Lines l;
		
		
		if (color().visibility()) {
			fl_color(color().as_int());
		}
	}*/

	void Arrow::draw_lines() const{

		

		if (color().visibility()) {
			fl_color(color().as_int());

			//fl_line(320, 300, 230, 300);
			Line l{ Point{320,300},Point{230,300} };

			/*Graph_lib::Polygon arrowhead;
			arrowhead.add(Point{ point(1).x,point(1).y + 20 });
			arrowhead.add(Point{ point(1).x,point(1).y - 20 });*/
		}
		


	}

}
