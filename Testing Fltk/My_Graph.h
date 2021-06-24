#pragma once
#include"../../../Graph.h"
//#include"../../../Simple_window.h"

using Graph_lib::Shape;
using Graph_lib::Point;
using Graph_lib::Line;
using Graph_lib::Polygon;

namespace My_graph_lib {

	struct Arc :Shape {

	public:
		Arc(Point p, int r, double a1, double a2);//Construct arc with centre, radius, start and end angle
		//Arc(double a1, double a2, Point sp, Point ep);//Construct arc with centre, radius, start and end angle,start and end point
		void draw_lines() const;

	private:
		
		int r; //radius of the Circle(of which arc is part)
		double a1, a2; //start and end angle(0, 360 in case of circle) 
		//Point sp, ep;//start and end point

	};

	//struct Box :Shape { // A simple rectangular shape with rounded corners

	//public: 
	//	Box(Point p,int ww,int hh); // Construct a box with centre p width and height w,h
	//	void draw_lines() const; //Draw box

	//	int height() const { return h; }
	//	int width() const { return w; }
	//
	//private:
	//	int w, h;//width amd height of box
	//};

	struct Arrow :Shape {
	
		Arrow(Point p1, Point p2) { add(p1);add(p2); }
		void draw_lines() const;
	
	};
}
