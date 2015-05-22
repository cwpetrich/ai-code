#ifndef _DISPLAYDRIVER_H_
#define _DISPLAYDRIVER_H_

#include <ai_scavenger.h>

namespace ai
{
  namespace Agent
  {
    class DisplayDriver
    {
    public:
      DisplayDriver(int argc, char **argv);
      void EnvironmentDisplaySelect(Environment * env);
      void Run();
      void DrawFrame();
      void GetEnvironment();
    protected:
      EnvironmentDisplay * mEnvironmentDisplay;
      volatile bool mEnvironmentDisplaySet;
      Options mOptions;
      Socket mSocket;
    private:
      
    };
  }
}

#endif /* _DISPLAYDRIVER_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
