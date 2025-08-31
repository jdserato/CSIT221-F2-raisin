struct Point {  // 8
	int x; // 4
	int y; // 4
	
	Point* midpoint(Point x) {
		Point* midp = new Point;
		midp->x = (this->x + x.x) / 2;
		midp->y = (this->y + x.y) / 2;
		return midp;
	}
	
	static Point* midpoint(Point x, Point y) {
		Point* midp = new Point;
		midp->x = (y.x + x.x) / 2;
		midp->y = (y.y + x.y) / 2;
		return midp;
	}
};
