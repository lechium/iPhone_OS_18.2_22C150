//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray, NSString, SUCoreLog, SUCorePersistedState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoAssetPersisted : NSObject
{
    _Bool _cachingEnabled;	// 8 = 0x8
    SUCorePersistedState *_persistedConfig;	// 16 = 0x10
    SUCoreLog *_logger;	// 24 = 0x18
    NSString *_logLeader;	// 32 = 0x20
    NSString *_moduleName;	// 40 = 0x28
    NSString *_moduleCurrentVersion;	// 48 = 0x30
    NSString *_latestSafeSummary;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_persistedQueue;	// 64 = 0x40
    SUCorePersistedState *_entryTableOfContents;	// 72 = 0x48
    NSMutableArray *_currentEntryIDs;	// 80 = 0x50
    CDUnknownBlockType _moduleVersionMigrator;	// 88 = 0x58
    NSCache *_knownPersistedFiles;	// 96 = 0x60
    NSCache *_knownPersistedStates;	// 104 = 0x68
}

+ (id)persistedComponentSymbol:(id)arg1;	// IMP=0x00600000000a78e6
+ (id)persistedOperationSymbol:(id)arg1;	// IMP=0x00600000000a77c4
+ (long long)persistedEntryStatusValue:(id)arg1;	// IMP=0x00600000000a76dc
+ (id)persistedEntryStatusName:(long long)arg1;	// IMP=0x00600000000a76bd
+ (id)entryFileIDForModule:(id)arg1 fromFilename:(id)arg2;	// IMP=0x00600000000a756b
+ (id)persistedStateFilename:(id)arg1 forFileID:(id)arg2 ofEntryName:(id)arg3;	// IMP=0x00600000000a7487
- (void).cxx_destruct;	// IMP=0x00000000000a7ca4
@property(nonatomic) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(retain, nonatomic) NSCache *knownPersistedStates; // @synthesize knownPersistedStates=_knownPersistedStates;
@property(retain, nonatomic) NSCache *knownPersistedFiles; // @synthesize knownPersistedFiles=_knownPersistedFiles;
@property(readonly, copy, nonatomic) CDUnknownBlockType moduleVersionMigrator; // @synthesize moduleVersionMigrator=_moduleVersionMigrator;
@property(retain, nonatomic) NSMutableArray *currentEntryIDs; // @synthesize currentEntryIDs=_currentEntryIDs;
@property(readonly, retain, nonatomic) SUCorePersistedState *entryTableOfContents; // @synthesize entryTableOfContents=_entryTableOfContents;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *persistedQueue; // @synthesize persistedQueue=_persistedQueue;
@property(retain, nonatomic) NSString *latestSafeSummary; // @synthesize latestSafeSummary=_latestSafeSummary;
@property(readonly, retain, nonatomic) NSString *moduleCurrentVersion; // @synthesize moduleCurrentVersion=_moduleCurrentVersion;
@property(readonly, retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly, retain, nonatomic) NSString *logLeader; // @synthesize logLeader=_logLeader;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
@property(readonly, retain, nonatomic) SUCorePersistedState *persistedConfig; // @synthesize persistedConfig=_persistedConfig;
- (id)_summaryLeader:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a7342
- (id)_summary;	// IMP=0x00000000000a71c8
- (id)summary;	// IMP=0x00000000000a71b6
- (id)description;	// IMP=0x00000000000a71a4
- (void)_removeEntriesMissingFromTableOfContents:(id)arg1;	// IMP=0x00000000000a6a34
- (void)_removeEntryFile:(id)arg1 reason:(id)arg2 fromLocation:(id)arg3;	// IMP=0x00000000000a67e1
- (id)_contentsOfModulePersistedPath:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a6517
- (_Bool)_verifyEntryFileExists:(id)arg1 fromLocation:(id)arg2 expectingExists:(_Bool)arg3;	// IMP=0x00000000000a635e
- (_Bool)_verifyPersistedDirectoryExistsOrCreate:(id)arg1;	// IMP=0x00000000000a5f94
- (_Bool)_preExistingPersistedStateValid:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a5edc
- (long long)_validateLoadedEntry:(id)arg1 fromLocation:(id)arg2 forEntryName:(id)arg3 loadedWithEntryStatus:(long long)arg4;	// IMP=0x00000000000a5e8e
- (void)_persistStatusChange:(id)arg1 ofEntryName:(id)arg2 withEntrySummary:(id)arg3 currentStatus:(long long)arg4 fromLocation:(id)arg5;	// IMP=0x00000000000a5ddf
- (id)_loadPersistedEntry:(id)arg1 forEntryName:(id)arg2 withEntryStatus:(long long)arg3;	// IMP=0x00000000000a4f35
- (void)_persistTableOfContents:(id)arg1 forEntryName:(id)arg2 withEntryStatus:(long long)arg3;	// IMP=0x00000000000a4e93
- (long long)persistedEntryCount:(id)arg1;	// IMP=0x00000000000a4e1a
- (id)persistedEntryIDs:(id)arg1;	// IMP=0x00000000000a4c99
- (void)removeAllPersistedEntries:(id)arg1;	// IMP=0x00000000000a4929
- (void)flushPersistedStateCacheAndSetCachingBehaviour:(_Bool)arg1;	// IMP=0x00000000000a478d
- (void)removePersistedEntry:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a42f8
- (void)storePersistedEntry:(id)arg1 withEntrySummary:(id)arg2 fromLocation:(id)arg3;	// IMP=0x00000000000a4035
- (id)persistedEntry:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a3f14
- (_Bool)persistedEntryAlreadyExists:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000a3d36
- (void)loadPersistedState:(id)arg1;	// IMP=0x00000000000a308d
- (id)initForModule:(id)arg1 ofModuleVersion:(id)arg2 usingDispatchQueue:(id)arg3 usingLogger:(id)arg4 loggingByName:(id)arg5 withVersionMigrator:(CDUnknownBlockType)arg6;	// IMP=0x00000000000a2cfe

@end

