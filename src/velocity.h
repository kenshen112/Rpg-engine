#pragma once
class Velocity {
private:
  float dX;
  float dY;

public:
  Velocity();
  Velocity(float x, float y);
  void addDx(float x);
  void addDy(float y);
  float getDx();
  float getDy();
  ~Velocity();
};
