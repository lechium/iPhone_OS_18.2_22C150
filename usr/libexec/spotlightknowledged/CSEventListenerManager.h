//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSEventListener, CSThresholdedTrigger, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSEventListenerManager : NSObject
{
    _Bool _throttled;	// 8 = 0x8
    _Bool _isAssertionsAllowed;	// 9 = 0x9
    int _indexType;	// 12 = 0xc
    int _folderFd;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSEventListener *_eventListener;	// 32 = 0x20
    NSMutableDictionary *_journalMap;	// 40 = 0x28
    NSMutableArray *_journalQueue;	// 48 = 0x30
    CSThresholdedTrigger *_thresholdTrigger;	// 56 = 0x38
    struct _opaque_pthread_rwlock_t _journalQueueLock;	// 64 = 0x40
    struct _opaque_pthread_rwlock_t _journalMapLock;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0020000000059f47
- (void)dropAssertions:(id)arg1;	// IMP=0x0010000000059b84
- (void)takeAssertions:(id)arg1;	// IMP=0x00100000000597ae
- (void)registerJournalWithIno:(id)arg1 journalIno:(unsigned long long)arg2 dev:(int)arg3 journalNumber:(unsigned long long)arg4 journalCookie:(id)arg5;	// IMP=0x0010000000058662
- (void)processJournals;	// IMP=0x0010000000057af3
- (void)dealloc;	// IMP=0x0010000000057aae
- (void)startUp;	// IMP=0x00100000000578a9
- (void)runThrottledTaskAsync;	// IMP=0x00100000000576ea
- (id)initWithIndexType:(int)arg1 indexPath:(id)arg2 eventListener:(id)arg3;	// IMP=0x00100000000571ac
- (void)_cleanupJournalsWithEvent:(id)arg1;	// IMP=0x0010000000056eda
- (void)sortJournals;	// IMP=0x0010000000056de9
- (void)_loadJournals;	// IMP=0x0010000000056517
- (id)description;	// IMP=0x001000000005642e

@end

