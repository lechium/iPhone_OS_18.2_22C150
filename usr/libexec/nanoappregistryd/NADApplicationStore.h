//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADEntityStore, NSFileManager, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface NADApplicationStore : NSObject
{
    NSMutableDictionary *_storeMetadata;	// 8 = 0x8
    NSMutableDictionary *_parentBundleIDToWatchAppMap;	// 16 = 0x10
    NSMutableDictionary *_bundleIDToApplicationMap;	// 24 = 0x18
    unsigned long long _stateHandle;	// 32 = 0x20
    NSURL *_applicationDirectory;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSFileManager *_fileManager;	// 56 = 0x38
    NADEntityStore *_applicationStore;	// 64 = 0x40
}

+ (id)defaultURL;	// IMP=0x0040000000001648
+ (id)legacyDefaultURL;	// IMP=0x0010000000001597
+ (id)defaultStore;	// IMP=0x001000000000151c
- (void).cxx_destruct;	// IMP=0x002000000000309d
@property(readonly, nonatomic) NADEntityStore *applicationStore; // @synthesize applicationStore=_applicationStore;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *applicationDirectory; // @synthesize applicationDirectory=_applicationDirectory;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0010000000002e20
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002da5
- (id)beginTransaction;	// IMP=0x0010000000002d6f
- (void)_writeStoreMetadata;	// IMP=0x0010000000002bfb
- (id)_storeMetadataURL;	// IMP=0x0010000000002ba2
- (id)description;	// IMP=0x0010000000002b00
- (id)sequenceNumber;	// IMP=0x0010000000002ae3
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;	// IMP=0x0010000000002a20
- (id)UUID;	// IMP=0x0010000000002a03
- (id)_allApplicationsIncludingHidden:(_Bool)arg1;	// IMP=0x0010000000002844
- (void)_removeApplicationFromCache:(id)arg1;	// IMP=0x001000000000277c
- (void)_removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000002713
- (id)watchAppIDsForParentBundleID:(id)arg1;	// IMP=0x0010000000002680
- (void)_insertApplicationIntoCache:(id)arg1;	// IMP=0x00100000000025b5
- (void)_insertApplication:(id)arg1;	// IMP=0x0010000000002553
- (void)_resetStores;	// IMP=0x001000000000253d
- (void)_loadEntitiesFromDisk;	// IMP=0x0010000000002402
- (void)getAllApplications:(out id *)arg1 UUID:(out id *)arg2 sequenceNumber:(out id *)arg3 includeHidden:(_Bool)arg4;	// IMP=0x00100000000022a6
- (id)allApplicationsIncludingHidden:(_Bool)arg1;	// IMP=0x0010000000002108
- (id)_applicationBundleIdentifiersForParentApplicationBundleIdentifier:(id)arg1;	// IMP=0x00100000000020b4
- (void)removeApplicationsWithParentApplicationBundleIdentifier:(id)arg1;	// IMP=0x0010000000001f2f
- (void)removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000001eb5
- (void)insertApplication:(id)arg1;	// IMP=0x0010000000001e3b
- (void)removeAllEntities;	// IMP=0x0010000000001d76
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000001814
- (id)init;	// IMP=0x0010000000001583

@end

