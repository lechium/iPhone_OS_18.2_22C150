//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol HMDDataStreamProtocolDelegate;

__attribute__((visibility("hidden")))
@interface HMDDataStreamStreamProtocol : NSObject
{
    NSMapTable *_sockets;	// 8 = 0x8
    id <HMDDataStreamProtocolDelegate> _dataStream;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000008ee4ee
+ (id)protocolName;	// IMP=0x00100000008ee4cf
- (void).cxx_destruct;	// IMP=0x00000000008ee493
@property(readonly) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
@property(readonly) NSMapTable *sockets; // @synthesize sockets=_sockets;
- (void)_closeAllSocketsWithError:(id)arg1;	// IMP=0x00000000008ee2b7
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000008ee160
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000008ee009
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000008edd50
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000008edd3b
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x00000000008edd27
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x00000000008edbd0
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x00000000008edbca
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendData:(id)arg1 socket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008eda02
- (void)_notifyActiveStatusChangedFromPreviousValue:(_Bool)arg1;	// IMP=0x00000000008ed88f
- (void)_reevaluateTrafficClassForDataStream;	// IMP=0x00000000008ed4e6
- (void)evaluateOptionsForSocket:(id)arg1;	// IMP=0x00000000008ed4d4
- (void)unregisterSocket:(id)arg1;	// IMP=0x00000000008ed381
- (void)registerSocket:(id)arg1;	// IMP=0x00000000008ed21a
- (id)initWithDataStream:(id)arg1;	// IMP=0x00000000008ed18c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

