//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FTMessageDeliveryProtocol, IDSGroupServerPushHandler;

@interface IDSGroupServer : NSObject
{
    id <FTMessageDeliveryProtocol> _messageDelivery;	// 8 = 0x8
    id <IDSGroupServerPushHandler> _pushHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001eb770
@property(retain, nonatomic) id <IDSGroupServerPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) id <FTMessageDeliveryProtocol> messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void)_queryGroupServerENID:(id)arg1 withPreviousEntries:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001eb44d
- (void)queryGroupServerForENID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eb431
- (void)publishGroupForKey:(id)arg1 data:(id)arg2 signature:(id)arg3 forwardingSig:(id)arg4 ENID:(id)arg5 version:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000001eb062
- (CDUnknownBlockType)_putMessageCompletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001eadd2
- (CDUnknownBlockType)_getMessageCompletionCurrentEntries:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eab9d
- (id)initWithMessageDelivery:(id)arg1;	// IMP=0x00100000001eab01
- (id)init;	// IMP=0x00100000001eaaa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

