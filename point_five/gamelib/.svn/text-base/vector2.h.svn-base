#ifndef _ZERO_SRC_VECTOR2_
#define _ZERO_SRC_VECTOR2_ 

struct Vector2 {
  float x, y;

  Vector2() {
     this->x = 0.0f;
     this->y = 0.0f;
  }

  Vector2(float x, float y) {
     this->x = x;
     this->y = y;
  }

  Vector2 operator+(Vector2 const& v2) {
     return Vector2(x + v2.x, y + v2.y);     
  }

  void operator+=(Vector2 const& v2) {
     x += v2.x;
     y += v2.y;
  }

  friend bool operator==(Vector2 const& v1, Vector2 const& v2) {
     return ( (v1.x==v2.x) && (v1.y==v2.y) );
  }

  friend bool operator!=(Vector2 const& v1, Vector2 const& v2) {
     return ( !(v1==v2) );
  }

  Vector2 operator-(Vector2 const& v2) {
     return Vector2(x - v2.x, y - v2.y);
  }
};

#endif
