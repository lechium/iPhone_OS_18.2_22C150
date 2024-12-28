//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface IDSRegistrationPushHandler : NSObject
{
    NSMutableArray *_handlers;	// 8 = 0x8
    _Bool _registeredForPush;	// 16 = 0x10
    _Bool _isListening;	// 17 = 0x11
}

+ (id)commandToHandlerBlock;	// IMP=0x002000000030088d
- (void).cxx_destruct;	// IMP=0x0020000000303c38
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x00100000003039fb
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x0010000000303926
- (void)removeListener:(id)arg1;	// IMP=0x00100000003038d9
- (void)addListener:(id)arg1;	// IMP=0x0010000000303857
- (id)copyHandlersForEnumerating;	// IMP=0x0010000000303841
- (id)_pushTopics;	// IMP=0x00100000003037be
@property(nonatomic) _Bool registered;
- (void)_ignoreIncomingPushes;	// IMP=0x00100000003036af
- (void)_acceptIncomingPushes;	// IMP=0x0010000000303620
- (void)_updateListenerIfNeeded;	// IMP=0x001000000030346c
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;	// IMP=0x001000000030338a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
