#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <string>
#include <map>

namespace ai
{
  namespace Agent
  {
    extern const std::string MESSAGE_IDENT_NAME;
    extern const std::string MESSAGE_AGENT_NAME;
    extern const std::string MESSAGE_DISPLAY_NAME;
    extern const std::string MESSAGE_DIE_NAME;
    extern const std::string MESSAGE_NAME_NAME;
    extern const std::string MESSAGE_PERCEPT_NAME;
    extern const std::string MESSAGE_UPDATE_NAME;
    /**
     * Represents a message to be sent or received
     * via communication channels
     */
    class Message
    {
    public:
      Message();
      Message(const std::string &name);
      virtual ~Message();

      bool SetName(const std::string &name);
      const std::string &GetName() const;

      bool AddKeyValue(const std::string &key, const std::string &value);
      const std::string &GetValue(const std::string &key) const;
      const std::map<std::string, std::string> &GetKeyValues() const;

      bool SetFromString(const std::string &msg);
      const std::string &ToString();

      bool RemoveKey(const std::string &key);
      bool Clear();

    protected:
      bool GetToken(const std::string &msg, size_t &pos, std::string &token, const std::string &delim);
      bool FormatMessage();

      // name
      std::string mName;

      // key/value pairs
      std::map<std::string, std::string> mValues;

      // data of the message body
      bool mMessageValid;
      std::string mMessage;

      // separators used in message formatting
      std::string mTokenSeparator;
      std::string mValueSeparator;
    private:
    };

    class IdentMessage : public Message
    {
    public:
      IdentMessage();
    };
    class AgentMessage : public Message
    {
    public:
      AgentMessage();
    };
    class DisplayMessage : public Message
    {
    public:
      DisplayMessage();
    };
    class DieMessage : public Message
    {
    public:
      DieMessage();
    };
    class AgentNameMessage : public Message
    {
    public:
      AgentNameMessage();
    };
    class UpdateMessage : public Message
    {
    public:
      UpdateMessage();
    };

  }
}

#endif /* _MESSAGE_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */
