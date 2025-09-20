struct Point {
	int x, y;
	
	Point midpoint(Point* other) {
		Point midp;
		midp.x = (this->x + other->x) / 2;
		midp.y = (this->y + other->y) / 2;
		return midp;
	}
};
