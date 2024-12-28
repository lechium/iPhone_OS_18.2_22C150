//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOAPShowEvalHandler : NSObject
{
    NSXPCConnection *_xpcConn;	// 8 = 0x8
    CDUnknownBlockType _visitorBlock;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_wait;	// 24 = 0x18
    CDUnknownBlockType _streamLogMsgBlock;	// 32 = 0x20
    CDUnknownBlockType _streamDailyUsageBlock;	// 40 = 0x28
    CDUnknownBlockType _streamMonthlyUsageBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b2205
- (void)monthlyUsageActionType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4;	// IMP=0x00000000000b21eb
- (void)dailyUsageActionType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4;	// IMP=0x00000000000b21d1
- (void)logMsg:(id)arg1;	// IMP=0x00000000000b21bf
- (void)endEvalData;	// IMP=0x00000000000b1fb0
- (void)evalData:(id)arg1 ofType:(unsigned long long)arg2 createTime:(id)arg3;	// IMP=0x00000000000b1ecb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
