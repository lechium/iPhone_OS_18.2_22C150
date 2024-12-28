//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CalSearch, ClientConnection, NSArray, NSMutableArray, NSObject, NSString;
@protocol NSObject, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CADCalSearchOperation : NSOperation
{
    ClientConnection *_connection;	// 8 = 0x8
    CalSearch *_currentSearch;	// 16 = 0x10
    int _currentDatabaseID;	// 24 = 0x18
    NSArray *_calendars;	// 32 = 0x20
    NSString *_searchTerm;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;	// 48 = 0x30
    unsigned int _replyID;	// 56 = 0x38
    id <NSObject> _boostToken;	// 64 = 0x40
    struct os_unfair_lock_s _lock;	// 72 = 0x48
    NSMutableArray *_objectIDsForPrivacyAccounting;	// 80 = 0x50
}

+ (id)operationWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;	// IMP=0x0010000000069456
- (void).cxx_destruct;	// IMP=0x000000000006a067
- (void)_completeOperation;	// IMP=0x0000000000069f40
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;	// IMP=0x0000000000069f3a
- (_Bool)calSearchShouldStopSearching:(id)arg1;	// IMP=0x0000000000069f28
- (void)calSearchComplete:(id)arg1;	// IMP=0x0000000000069ebb
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;	// IMP=0x0000000000069bd6
- (void)cancel;	// IMP=0x0000000000069adc
- (void)main;	// IMP=0x0000000000069802
- (unsigned int)replyID;	// IMP=0x00000000000697f2
- (void)dealloc;	// IMP=0x0000000000069775
- (void)configureSearch:(id)arg1;	// IMP=0x00000000000696fd
- (id)initWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;	// IMP=0x00000000000694ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
