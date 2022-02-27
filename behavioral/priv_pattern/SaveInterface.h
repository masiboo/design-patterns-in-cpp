#ifndef __SAVEINTERFACE_H
#define __SAVEINTERFACE_H

class SaveInterface
{
  public:
      SaveInterface() { }
      virtual ~SaveInterface()
	  {
	  }

      virtual void SaveData() const = 0;
};

#endif // __SAVEINTERFACE
