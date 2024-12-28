//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoAssetHistoryTracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoAssetHistory : NSObject
{
    _Bool _persistedStateLoaded;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_historyProtectionQueue;	// 16 = 0x10
    MADAutoAssetHistoryTracker *_trackerFilesystem;	// 24 = 0x18
    MADAutoAssetHistoryTracker *_trackerLocker;	// 32 = 0x20
    MADAutoAssetHistoryTracker *_trackerAtomic;	// 40 = 0x28
    MADAutoAssetHistoryTracker *_trackerError;	// 48 = 0x30
    MADAutoAssetHistoryTracker *_trackerStager;	// 56 = 0x38
    MADAutoAssetHistoryTracker *_trackerScheduler;	// 64 = 0x40
    MADAutoAssetHistoryTracker *_trackerSecure;	// 72 = 0x48
}

+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 fromLayer:(long long)arg4 forAssetID:(id)arg5 withSelector:(id)arg6 usageCount:(long long)arg7 configuredCount:(long long)arg8 requestedCount:(long long)arg9 fromPallasCount:(long long)arg10 vendingCount:(long long)arg11 forClientDomainName:(id)arg12 forAssetSetIdentifier:(id)arg13 forAtomicInstance:(id)arg14 withAddendumMessage:(id)arg15 failingWithError:(id)arg16;	// IMP=0x006000000009926c
+ (void)recordFailedOperation:(long long)arg1 fromLayer:(long long)arg2 forClientDomainName:(id)arg3 forAssetSetIdentifier:(id)arg4 forAtomicInstance:(id)arg5 failingWithError:(id)arg6;	// IMP=0x00600000000991f4
+ (void)recordFailedOperation:(long long)arg1 fromLayer:(long long)arg2 forAssetID:(id)arg3 withSelector:(id)arg4 failingWithError:(id)arg5;	// IMP=0x00600000000991a5
+ (void)recordFailedOperation:(long long)arg1 fromLayer:(long long)arg2 failingWithError:(id)arg3;	// IMP=0x0060000000099136
+ (void)recordFailedOperation:(long long)arg1 fromClient:(id)arg2 forClientDomainName:(id)arg3 forAssetSetIdentifier:(id)arg4 forAtomicInstance:(id)arg5 failingWithError:(id)arg6;	// IMP=0x00600000000990ba
+ (void)recordFailedOperation:(long long)arg1 fromClient:(id)arg2 forAssetID:(id)arg3 withSelector:(id)arg4 failingWithError:(id)arg5;	// IMP=0x006000000009906b
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 configuredCount:(long long)arg4 requestedCount:(long long)arg5 fromPallasCount:(long long)arg6 vendingCount:(long long)arg7 forClientDomainName:(id)arg8 forAssetSetIdentifier:(id)arg9 forAtomicInstance:(id)arg10 withAddendumMessage:(id)arg11;	// IMP=0x0060000000098ffe
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 usageCount:(long long)arg4 forClientDomainName:(id)arg5 forAssetSetIdentifier:(id)arg6 forAtomicInstance:(id)arg7 withAddendumMessage:(id)arg8;	// IMP=0x0060000000098f91
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 usageCount:(long long)arg4 forClientDomainName:(id)arg5 forAssetSetIdentifier:(id)arg6 forAtomicInstance:(id)arg7;	// IMP=0x0060000000098f28
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 usageCount:(long long)arg4;	// IMP=0x0060000000098eba
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 usageCount:(long long)arg4 forAssetID:(id)arg5 withSelector:(id)arg6;	// IMP=0x0060000000098e4b
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 forAssetID:(id)arg4 withSelector:(id)arg5;	// IMP=0x0060000000098e02
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 usageCount:(long long)arg4 forClientDomainName:(id)arg5 forAssetSetIdentifier:(id)arg6 forAtomicInstance:(id)arg7 withAddendumMessage:(id)arg8;	// IMP=0x0060000000098d97
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 usageCount:(long long)arg4 forClientDomainName:(id)arg5 forAssetSetIdentifier:(id)arg6 forAtomicInstance:(id)arg7;	// IMP=0x0060000000098d34
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromLayer:(long long)arg3 fromClient:(id)arg4;	// IMP=0x0060000000098cc6
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 usageCount:(long long)arg4 forAssetID:(id)arg5 withSelector:(id)arg6;	// IMP=0x0060000000098c5e
+ (void)recordOperation:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 forAssetID:(id)arg4 withSelector:(id)arg5;	// IMP=0x0060000000098c18
+ (void)loadPersistedState;	// IMP=0x00600000000989d8
+ (id)autoAssetHistory;	// IMP=0x0060000000098983
- (void).cxx_destruct;	// IMP=0x00000000000997c2
@property(nonatomic) _Bool persistedStateLoaded; // @synthesize persistedStateLoaded=_persistedStateLoaded;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerSecure; // @synthesize trackerSecure=_trackerSecure;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerScheduler; // @synthesize trackerScheduler=_trackerScheduler;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerStager; // @synthesize trackerStager=_trackerStager;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerError; // @synthesize trackerError=_trackerError;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerAtomic; // @synthesize trackerAtomic=_trackerAtomic;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerLocker; // @synthesize trackerLocker=_trackerLocker;
@property(readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerFilesystem; // @synthesize trackerFilesystem=_trackerFilesystem;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *historyProtectionQueue; // @synthesize historyProtectionQueue=_historyProtectionQueue;
- (id)_trackerForHistoryType:(long long)arg1;	// IMP=0x0000000000099621
- (id)init;	// IMP=0x0000000000098794

@end
