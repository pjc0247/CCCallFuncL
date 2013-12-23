#ifndef _CC_CALLFUNC_L_H
#define _CC_CALLFUNC_L_H

#include <cocos2d.h>
#include <actions/CCAction.h>

#include <functional>

NS_CC_BEGIN

class CCCallFuncL : public CCActionInstant //<NSCopying>
{
public:
    CCCallFuncL()
		: m_pFunc( nullptr )
    {
    }
    virtual ~CCCallFuncL();

    static CCCallFuncL * create( std::function<void()> f );

	virtual bool initWithFunction( std::function<void()> f );
    
    virtual void execute();
    
    virtual void update(float time);

    CCObject * copyWithZone(CCZone *pZone);

protected:    
	std::function<void()> m_pFunc;
};

NS_CC_END

#endif // _CC_CALLFUNC_L_H
