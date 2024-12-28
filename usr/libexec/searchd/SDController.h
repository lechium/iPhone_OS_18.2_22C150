//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, SPCoreSpotlightIndexer, SPXPCMessage, SPXPCServer;
@protocol OS_dispatch_queue;

@interface SDController : NSObject
{
    SPXPCServer *_xpcServer;	// 8 = 0x8
    SPXPCServer *_xpcBackgroundServer;	// 16 = 0x10
    SPXPCMessage *_currentActivation;	// 24 = 0x18
    _Atomic _Bool _onceStartIndexer;	// 32 = 0x20
    _Atomic _Bool _onceUnlockAppUninstallMonitor;	// 33 = 0x21
    _Atomic _Bool _onceUnlockMigrationMonitor;	// 34 = 0x22
    SPCoreSpotlightIndexer *_indexer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_indexQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;	// 56 = 0x38
    NSUserDefaults *_defaultsCenter;	// 64 = 0x40
    long long _startedOnce;	// 72 = 0x48
}

+ (id)datastoreForDomain:(unsigned int)arg1;	// IMP=0x002000000000d496
+ (id)domainMap;	// IMP=0x001000000000d485
+ (id)datastores;	// IMP=0x001000000000d474
+ (void)readyForQueries;	// IMP=0x001000000000ba86
+ (void)setDatastores:(id)arg1;	// IMP=0x001000000000b85d
+ (void)setParsecDatastore:(id)arg1;	// IMP=0x001000000000b849
+ (void)initialize;	// IMP=0x001000000000b614
+ (id)backgroundWorkQueue;	// IMP=0x001000000000b603
+ (id)workQueue;	// IMP=0x001000000000b5f2
+ (id)rankQueue;	// IMP=0x001000000000b5e1
+ (id)getMeEmailAddresses;	// IMP=0x001000000000ac0f
+ (id)getMeContactIdentifier;	// IMP=0x001000000000abd5
+ (void)deactivated;	// IMP=0x001000000000ab87
+ (void)activated;	// IMP=0x001000000000ab7a
+ (void)handleMemoryPressureWithStatus:(unsigned long long)arg1;	// IMP=0x001000000000a932
- (void).cxx_destruct;	// IMP=0x0020000000010fd9
@property(nonatomic) long long startedOnce; // @synthesize startedOnce=_startedOnce;
@property(retain, nonatomic) NSUserDefaults *defaultsCenter; // @synthesize defaultsCenter=_defaultsCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(retain, nonatomic) SPCoreSpotlightIndexer *indexer; // @synthesize indexer=_indexer;
- (id)resources;	// IMP=0x0010000000010f63
- (id)cacheDeleteId;	// IMP=0x0010000000010f56
- (_Bool)disableABCReporting:(id)arg1;	// IMP=0x0010000000010f2b
- (void)issueLoadTrial:(id)arg1;	// IMP=0x0010000000010c71
- (void)indexAvailableForProtectionClass:(id)arg1 newIndex:(_Bool)arg2;	// IMP=0x001000000000e38f
- (id)extraTTRInfo;	// IMP=0x001000000000e246
- (void)dumpTTRDebugFiles;	// IMP=0x001000000000e1e6
- (id)indexDirectory;	// IMP=0x001000000000e198
- (void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;	// IMP=0x001000000000df13
- (id)disabledBundleSet;	// IMP=0x001000000000df04
- (_Bool)deviceUnlocked;	// IMP=0x001000000000deb9
- (_Bool)deviceFirstUnlockedInSB;	// IMP=0x001000000000de6e
- (_Bool)deviceFirstUnlockedInMKB;	// IMP=0x001000000000de23
- (_Bool)unlockedSinceBoot;	// IMP=0x001000000000ddd8
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000dccb
- (void)updateApplicationsWithCompletion:(CDUnknownBlockType)arg1 clean:(_Bool)arg2;	// IMP=0x001000000000dc4f
- (_Bool)blocklistCheck:(id)arg1 withOptions:(long long)arg2;	// IMP=0x001000000000d9bc
- (_Bool)setupHasComplete;	// IMP=0x001000000000d9b2
- (_Bool)indexingEnabled;	// IMP=0x001000000000d9a6
- (_Bool)managedIndex;	// IMP=0x001000000000d982
- (_Bool)privateIndex;	// IMP=0x001000000000d97a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000d878
- (void)updateParsecEnabled;	// IMP=0x001000000000d51b
- (_Bool)keepRunning;	// IMP=0x001000000000d46c
- (id)init;	// IMP=0x001000000000c4bb
- (void)unlockMigrationMonitor;	// IMP=0x001000000000c403
- (void)unlockAppUninstallMonitor;	// IMP=0x001000000000c34b
- (void)startIndexer;	// IMP=0x001000000000c214
- (void)registerMessageHandlers;	// IMP=0x001000000000adb6
- (_Bool)_valueFromArray:(id)arg1 notInSet:(id)arg2;	// IMP=0x001000000000ac49
- (void)didReceiveMemoryPressureNotification:(unsigned long long)arg1;	// IMP=0x001000000000aab9
- (void)didReceiveSignal:(unsigned long long)arg1;	// IMP=0x001000000000a8bc
- (void)unlocked;	// IMP=0x001000000000a798
- (void)lockedCx;	// IMP=0x001000000000a6fb
- (void)lockingCx;	// IMP=0x001000000000a65e
- (void)locked;	// IMP=0x001000000000a5c1
- (void)locking;	// IMP=0x001000000000a524
- (void)firstUnlockSBCompleted;	// IMP=0x001000000000a469
- (void)migrationCompleted;	// IMP=0x001000000000a324
- (void)deviceStateWillChange:(_Bool)arg1;	// IMP=0x001000000000a2ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
