CCCallFuncL
===========

CCCallFunc with lambda


Example
----

```C++
a = 1;

this->runAction(
	CCSequence::create(
		CCDelayTime::create(1),
		CCCallFuncL::create( callfuncL_selector{
				printf(" d %d ", a);
				a ++;
			}),
		NULL));
```
