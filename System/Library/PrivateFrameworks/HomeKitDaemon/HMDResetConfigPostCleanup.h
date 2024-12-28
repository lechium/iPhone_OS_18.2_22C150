//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDResetConfigPostCleanup : HMFObject
{
}

+ (id)logCategory;	// IMP=0x0010000000f031f8
+ (id)resetConfigPostCleanupFileLocation;	// IMP=0x0010000000f03098
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)arg1;	// IMP=0x0010000000f0307a
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3 usingFileManager:(id)arg4;	// IMP=0x0010000000f02e35
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3;	// IMP=0x0010000000f02db0
+ (void)removeFilesAtLocation:(id)arg1 usingFileManager:(id)arg2;	// IMP=0x0010000000f02d19
+ (void)removeFilesAtLocation:(id)arg1;	// IMP=0x0010000000f02cba
+ (void)cleanupInvalidUserDefaults:(id)arg1;	// IMP=0x0010000000f02be9
+ (id)sqlFileListToRemove:(id)arg1 fromRootDirectory:(id)arg2;	// IMP=0x0010000000f029fe
+ (id)filesToExcludeFromHomedDirectory;	// IMP=0x0010000000f029de
+ (id)filesToExcludeFromCacheDirectory;	// IMP=0x0010000000f029be
+ (void)performIndividualCleanupTasks:(unsigned long long)arg1 onRootDirectory:(id)arg2;	// IMP=0x0010000000f02564
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)arg1 dueToReason:(unsigned long long)arg2;	// IMP=0x0010000000f0222c
+ (void)performAnyPostCleanupStepsIfNecessary;	// IMP=0x0010000000f01ea6
+ (void)writePostCleanupRecordWithReason:(unsigned long long)arg1 steps:(unsigned long long)arg2;	// IMP=0x0010000000f01784
+ (id)_readExistingPostCleanupRecord;	// IMP=0x0010000000f010eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
