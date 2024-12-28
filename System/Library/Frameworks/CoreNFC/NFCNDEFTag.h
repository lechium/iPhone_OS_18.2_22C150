//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFCHardwareManager, NSNumber, NSString;
@protocol NFTag, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCNDEFTag : NSObject
{
    id <NFTag> _tag;	// 8 = 0x8
    NSNumber *_sessionKey;	// 16 = 0x10
    _Bool _writeLocked;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NFCHardwareManager *_hardwareManager;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000157b4
- (void).cxx_destruct;	// IMP=0x0000000000016f16
@property(readonly, nonatomic) NFCHardwareManager *hardwareManager; // @synthesize hardwareManager=_hardwareManager;
- (void)dispatchBlockOnDelegateQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016d72
- (_Bool)isMatchingSession:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000016c90
- (_Bool)_disconnectWithError:(id *)arg1;	// IMP=0x0000000000016c0c
- (void)_connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000169d3
- (_Bool)_connectWithError:(id *)arg1;	// IMP=0x00000000000168ae
- (id)_getInternalReaderSession;	// IMP=0x0000000000016819
- (id)_updateNdefStatusWithSession:(id)arg1;	// IMP=0x0000000000016784
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x0000000000016773
- (void)_setSession:(id)arg1;	// IMP=0x000000000001673e
- (void)_setTag:(id)arg1;	// IMP=0x000000000001672d
- (void)writeNDEF:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016470
- (void)writeLockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000161d1
- (void)readNDEFWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015efa
- (void)queryNDEFStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015d23
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015b2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015ac2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000157bc
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;	// IMP=0x000000000001551b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
