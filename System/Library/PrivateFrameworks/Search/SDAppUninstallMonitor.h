//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface SDAppUninstallMonitor : NSObject
{
    NSObject<OS_dispatch_semaphore> *_startupSemaphore;	// 8 = 0x8
    _Bool _unlocked;	// 16 = 0x10
    _Bool _hasFailedDeletes;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    NSMutableSet *_pcsForPendingPurges;	// 40 = 0x28
    NSSet *_allAppSet;	// 48 = 0x30
}

+ (void)_writeAppsListToDisk:(id)arg1;	// IMP=0x0010000000014a76
+ (id)_installedAppsListFromDisk;	// IMP=0x00100000000146c5
+ (id)_installedAppsBundleIDsListFilePath;	// IMP=0x001000000001463d
+ (id)_trackingInfoDir;	// IMP=0x00100000000145b3
+ (id)_filename;	// IMP=0x0010000000014593
+ (_Bool)_writePendingPurgesToDisk:(id)arg1;	// IMP=0x0010000000013634
+ (id)_pendingPurgesFromDisk;	// IMP=0x0010000000013298
+ (id)_pendingPurgesFilePath;	// IMP=0x0010000000013202
+ (void)shutdown;	// IMP=0x00100000000112fc
+ (id)applicationsExcludedFromUninstall;	// IMP=0x0010000000011290
+ (id)sharedInstance;	// IMP=0x001000000001123b
- (void).cxx_destruct;	// IMP=0x0000000000015095
@property(retain, nonatomic) NSSet *allAppSet; // @synthesize allAppSet=_allAppSet;
@property(retain, nonatomic) NSMutableSet *pcsForPendingPurges; // @synthesize pcsForPendingPurges=_pcsForPendingPurges;
@property(nonatomic) _Bool hasFailedDeletes; // @synthesize hasFailedDeletes=_hasFailedDeletes;
@property(nonatomic) _Bool unlocked; // @synthesize unlocked=_unlocked;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_allInstalledApplicationsIdentifiers;	// IMP=0x0000000000014e8a
- (void)_deleteAllItemsForBundleIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000139c6
- (void)_purgeWithProtectionClasses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012a64
- (void)_deleteAllInteractionsForBundleID:(id)arg1;	// IMP=0x00000000000126b9
- (id)_deleteAllItemsForBundleID:(id)arg1;	// IMP=0x0000000000012058
- (void)_deleteItemsForUninstalledAppsFromIndex;	// IMP=0x0000000000011aac
- (void)registerHandlerWithEventMonitor:(id)arg1;	// IMP=0x000000000001159e
- (void)unlock;	// IMP=0x00000000000113e7
- (void)ready;	// IMP=0x00000000000113d9
- (id)init;	// IMP=0x0000000000011306

@end
