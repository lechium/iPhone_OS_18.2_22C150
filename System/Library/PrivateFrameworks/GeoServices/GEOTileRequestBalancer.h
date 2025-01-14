//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject
{
    void *_requesters;	// 8 = 0x8
    void *_randomIndexGenerator;	// 16 = 0x10
    unsigned long long _maxRunningOperationsCount;	// 24 = 0x18
    unsigned long long _stateCaptureHandle;	// 32 = 0x20
}

+ (id)balancerForRequester:(id)arg1;	// IMP=0x0010000001126365
+ (void)setMaxRunningOperationsCount:(unsigned long long)arg1;	// IMP=0x001000000112635f
+ (unsigned long long)maxRunningOperationsCount;	// IMP=0x001000000112625c
- (__wrap_iter_9a08789a)_next_requester;	// IMP=0x00000000011284cb
- (void)_startOperationsWithAvailableCount:(unsigned long long)arg1;	// IMP=0x00000000011274e6
- (void)_startOperations;	// IMP=0x0000000001127472
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;	// IMP=0x00000000011273cc
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey *)arg2;	// IMP=0x00000000011272b7
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;	// IMP=0x00000000011271f3
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey *)arg3;	// IMP=0x00000000011270ac
- (void)requester:(id)arg1 completedOperations:(unsigned long long)arg2;	// IMP=0x0000000001126fc2
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(long long)arg2;	// IMP=0x0000000001126e64
- (void)_pruneEmptyRequesters;	// IMP=0x0000000001126d81
- (void)_removeRequester:(id)arg1;	// IMP=0x0000000001126a92
- (void)removeRequester:(id)arg1;	// IMP=0x00000000011269c8
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;	// IMP=0x0000000001126743
- (void)addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;	// IMP=0x00000000011265e8
- (void *)requesters;	// IMP=0x0000000001126252
- (void)dealloc;	// IMP=0x0000000001126188
- (id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1;	// IMP=0x0000000001125b3e
- (id)init;	// IMP=0x0000000001125afa
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000001128730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

