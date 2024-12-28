//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;
@protocol PDFamilyCircleRequest;

@interface PDFamilyCircleManager : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    NSMutableArray *_fetchRequests;	// 16 = 0x10
    id <PDFamilyCircleRequest> _currentRequest;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003d0350
- (void)_executeNextRequestIfPossible;	// IMP=0x00100000003d0214
- (void)_addFamilyCircleRequest:(id)arg1;	// IMP=0x00100000003cff43
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000003cfdda
- (void)_handleFamilyUpdatedNotification:(id)arg1;	// IMP=0x00100000003cfd72
- (void)memberTypeForCurrentUserWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cfb09
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cf72d
- (void)_familyMembersWithCachePolicy:(unsigned long long)arg1 pendingMembers:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003cf49b
- (void)pendingFamilyMembersWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cf481
- (void)familyMembersWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cf46a
- (void)removeObserver:(id)arg1;	// IMP=0x00100000003cf410
- (void)addObserver:(id)arg1;	// IMP=0x00100000003cf3b6
- (void)dealloc;	// IMP=0x00100000003cf341
- (id)init;	// IMP=0x00100000003cf2b5

@end
