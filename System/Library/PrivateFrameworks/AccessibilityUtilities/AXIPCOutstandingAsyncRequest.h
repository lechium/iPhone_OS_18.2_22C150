//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AXIPCOutstandingAsyncRequest : NSObject
{
    unsigned int _replyPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
    struct __CFRunLoopSource *_replyMachPortSource;	// 32 = 0x20
}

+ (void)registerOutstandingRequest:(id)arg1;	// IMP=0x006000000003d545
+ (void)unregisterByPort:(unsigned int)arg1;	// IMP=0x006000000003d4c6
+ (id)lookupByPort:(unsigned int)arg1;	// IMP=0x006000000003d426
+ (void)initialize;	// IMP=0x006000000003d38a
- (void).cxx_destruct;	// IMP=0x000000000003dbbb
@property(readonly, nonatomic) struct __CFRunLoopSource *replyMachPortSource; // @synthesize replyMachPortSource=_replyMachPortSource;
@property(readonly, nonatomic) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)initialSendAborted;	// IMP=0x000000000003db50
- (void)sendOnceRightDestroyed;	// IMP=0x000000000003da30
- (void)rawResponseReceived:(id)arg1;	// IMP=0x000000000003d9dd
- (void)_responseReceived:(id)arg1;	// IMP=0x000000000003d87e
- (void)registerAndListenForResponse;	// IMP=0x000000000003d821
- (void)dealloc;	// IMP=0x000000000003d744
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d5ed

@end
