#ifndef SPACESHIP_H_
#define SPACESHIP_H_
#include <ngl/Vec3.h>
#include <ngl/Obj.h>
#include <ngl/Transformation.h>

class SpaceShip
{
  public :
    /// @brief ctor
    /// @param _pos the initial position
    /// @param _fname the name of mesh to load
    SpaceShip(ngl::Vec3 _pos, std::string _fname);
   ///@brief draw method
   void draw(const std::string &_shader, const ngl::Mat4 &_view, const ngl::Mat4 &_project );

   void move(float _x,	float _y	);

   void rotate(float _rot);
  private :
    /// @brief the position of the ship
    ngl::Vec3 m_pos;
    /// @brief the ship's mesh
    std::unique_ptr<ngl::Obj>m_mesh;
    /// @brief ship movement increment
    const static float s_increment;
    /// @brief a transform stack
    ngl::Transformation m_transform;
    /// @brief the rotation of the ship
		float m_rotation;
  };

#endif
