//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransactionServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _usedMemory;	// 16 = 0x10
    unsigned long long _allowedMemory;	// 24 = 0x18
    double _transactionWaitDuration;	// 32 = 0x20
    NSMutableArray *_transactions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000878bf
@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)_sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000873e3
- (void)sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000872b9
- (void)sendContentItemTransactionWithPlaybackQueue:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000871cd
- (void)handleContentItemTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x00100000000863cb
- (void)handlePlaybackQueueRequestTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x0010000000085c4f
- (void)adjustMemory:(long long)arg1;	// IMP=0x0010000000085bef
- (void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000008595e
- (unsigned long long)transactionRequestingMemorySize:(id)arg1;	// IMP=0x0010000000085800
- (void)transactionDidEnd:(id)arg1 bytesRemaining:(unsigned long long)arg2;	// IMP=0x001000000008571e
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000085620
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000085472
- (id)init;	// IMP=0x001000000008539c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
