#ifndef CHRadSinkFeCrNoPF_H
#define CHRadSinkFeCrNoPF_H

#include "Kernel.h"
#include "Material.h"

//Forward Declarations
class CHRadSinkFeCrNoPF;

template<>
InputParameters validParams<CHRadSinkFeCrNoPF>();

class CHRadSinkFeCrNoPF : public Kernel
{
public:

  CHRadSinkFeCrNoPF(const InputParameters & parameters);
  
protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();

private:
  Real _xdim;
  std::string _mob_name;
  const MaterialProperty<Real> & _M;
  std::string _LogC_name;
  const MaterialProperty<Real> & _LogC;
  std::string _LogTol_name;
  const MaterialProperty<Real> & _LogTol;
  
};
#endif //CHRadSinkFeCrNoPF
