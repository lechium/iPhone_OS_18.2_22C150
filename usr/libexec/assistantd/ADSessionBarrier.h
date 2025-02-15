//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ADSessionBarrier : NSObject
{
    CDUnknownBlockType _thunkBlock;	// 8 = 0x8
    CDUnknownBlockType _barrierBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 24 = 0x18
    NSString *aceId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000304345
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId;
- (void)siriNetwork_invokeThunk;	// IMP=0x0010000000304313
- (_Bool)supportedByRemoteLimitedSession;	// IMP=0x001000000030430b
- (_Bool)supportedByLocalSession;	// IMP=0x0010000000304303
- (void)setSessionRequestId:(id)arg1;	// IMP=0x00100000003042fd
- (id)sessionRequestId;	// IMP=0x00100000003042f5
- (id)serializedAceDataError:(id *)arg1;	// IMP=0x00100000003042ed
- (void)logDiagnostics;	// IMP=0x00100000003042e7
- (_Bool)isRetryable;	// IMP=0x00100000003042df
- (_Bool)isRestartable;	// IMP=0x00100000003042d7
- (_Bool)isProvisional;	// IMP=0x00100000003042cf
- (_Bool)bufferingAllowedDuringActiveSession;	// IMP=0x00100000003042c7
- (_Bool)siriCore_supportedByLocalSession;	// IMP=0x00100000003042bf
- (_Bool)siriCore_supportedByRemoteLimitedSession;	// IMP=0x00100000003042b7
- (void)siriCore_setSessionRequestId:(id)arg1;	// IMP=0x00100000003042b1
- (id)siriCore_requestId;	// IMP=0x00100000003042a9
- (id)siriCore_serializedAceDataError:(id *)arg1;	// IMP=0x00100000003042a1
- (void);	// IMP=0x001000000030429b
- (_Bool)siriCore_isProvisional;	// IMP=0x0010000000304293
- (_Bool)siriCore_isRestartable;	// IMP=0x001000000030428b
- (_Bool)siriCore_isRetryable;	// IMP=0x0010000000304283
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;	// IMP=0x001000000030427b
@property(copy, nonatomic) NSString *refId;
- (void)siriCore_invokeThunk;	// IMP=0x0010000000304254
- (void)barrierResultReturnedWithSuccess:(_Bool)arg1;	// IMP=0x0010000000304206
- (void)dealloc;	// IMP=0x00100000003041c7
- (id)initWithThunk:(CDUnknownBlockType)arg1 barrier:(CDUnknownBlockType)arg2;	// IMP=0x00100000003040e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

