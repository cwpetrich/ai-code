#ifndef _ACTION_H_
#define _ACTION_H_

namespace ai
{
  namespace Agent
  {
    class Action;
    std::ostream & operator<<(std::ostream &os, const Action * action);

    class Action
    {
    public:
      Action();
      virtual ~Action();
      virtual bool TextDisplay(std::ostream &os) const = 0;
      int GetCode() const;
      void SetCode(int code_in);
      virtual bool ToMessage(Message &omsg) const = 0;
    protected:
      int action_code;
    private:
    };
  }
}

#endif /* _ACTION_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
