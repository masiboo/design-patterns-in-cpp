#ifndef __COMMAND_H
#define __COMMAND_H

namespace command
{
	class Command
	{
		public:
			virtual void Execute() = 0;
			virtual void UnExecute() = 0;
	};
}

#endif // __COMMAND_H
