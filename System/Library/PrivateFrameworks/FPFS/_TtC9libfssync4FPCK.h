//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

__attribute__((visibility("hidden")))
@interface _TtC9libfssync4FPCK : NSObject
{
    MISSING_TYPE *numberOfFilesChecked;	// 8 = 0x8
    MISSING_TYPE *numberOfBrokenFilesInFSAndFSSnapshotCheck;	// 16 = 0x10
    MISSING_TYPE *numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;	// 24 = 0x18
    MISSING_TYPE *numberOfBrokenFilesInReconciliationTableCheck;	// 32 = 0x20
    MISSING_TYPE *numberOfBrokenFilesInBackupManifestCheck;	// 40 = 0x28
    MISSING_TYPE *numberOfReconciliationTableEntries;	// 48 = 0x30
    MISSING_TYPE *totalDatalessItems;	// 56 = 0x38
    MISSING_TYPE *totalMaterializedItems;	// 64 = 0x40
    MISSING_TYPE *accumulatedFileSizes;	// 72 = 0x48
    MISSING_TYPE *accumulatedSizeOfDisk;	// 80 = 0x50
    MISSING_TYPE *accumulatedDownloads;	// 88 = 0x58
    MISSING_TYPE *accumulatedUploads;	// 96 = 0x60
    MISSING_TYPE *multipleHardlinksExtensions;	// 104 = 0x68
    MISSING_TYPE *pendingSetSize;	// 112 = 0x70
    MISSING_TYPE *superPendingSetSize;	// 120 = 0x78
    MISSING_TYPE *pendingSetItemPayload;	// 128 = 0x80
    MISSING_TYPE *superPendingSetItemPayload;	// 136 = 0x88
    MISSING_TYPE *telemetryReport;	// 144 = 0x90
    MISSING_TYPE *pendingSetErrors;	// 152 = 0x98
    MISSING_TYPE *superPendingSetErrors;	// 160 = 0xa0
    MISSING_TYPE *runID;	// 168 = 0xa8
    MISSING_TYPE *sqlDatabase;	// 184 = 0xb8
    MISSING_TYPE *fsSnapshotChecker;	// 192 = 0xc0
    MISSING_TYPE *fpSnapshotChecker;	// 200 = 0xc8
    MISSING_TYPE *openBackupDatabases;	// 208 = 0xd0
    MISSING_TYPE *providerDomainID;	// 216 = 0xd8
    MISSING_TYPE *domainUserInfo;	// 224 = 0xe0
    MISSING_TYPE *usingFPFS;	// 232 = 0xe8
    MISSING_TYPE *diskVsFSSnapshotIgnoredFilenames;	// 240 = 0xf0
    MISSING_TYPE *launchOptions;	// 248 = 0xf8
    MISSING_TYPE *reason;	// 256 = 0x100
    MISSING_TYPE *shouldPause;	// 264 = 0x108
    MISSING_TYPE *sendDiagnostics;	// 280 = 0x118
    MISSING_TYPE *saveCheckpoint;	// 296 = 0x128
    MISSING_TYPE *isInvalidated;	// 312 = 0x138
    MISSING_TYPE *discoveredDiskBrokenInvariantsCounters;	// 328 = 0x148
    MISSING_TYPE *repairedDiskBrokenInvariantsCounters;	// 336 = 0x150
    MISSING_TYPE *discoveredDiskVsFSSnapshotDiffCounters;	// 344 = 0x158
    MISSING_TYPE *repairedDiskVsFSSnapshotDiffCounters;	// 352 = 0x160
    MISSING_TYPE *discoveredFSSnapshotVsFPSnapshotDiffCounters;	// 360 = 0x168
    MISSING_TYPE *discoveredReconciliationTableBrokenInvariantsCounters;	// 368 = 0x170
    MISSING_TYPE *discoveredBackupManifestVsFSSnapshotDiffCounters;	// 376 = 0x178
    MISSING_TYPE *providerVersion;	// 384 = 0x180
    MISSING_TYPE *ioContext;	// 400 = 0x190
    MISSING_TYPE *resultHandler;	// 416 = 0x1a0
    MISSING_TYPE *skippedLockedItems;	// 432 = 0x1b0
    MISSING_TYPE *rootURL;	// 1937071967 = 0x73755f5f
    MISSING_TYPE *rootURLs;	// 103 = 0x67
    MISSING_TYPE *detachedRoots;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *volumeRole;	// 0 = 0x0
    MISSING_TYPE *repairStartTime;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_importIsRunning;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_vendorExcludedFolders;	// 0 = 0x0
    MISSING_TYPE *nilErrorIds;	// 0 = 0x0
}

+ (_Bool)dumpDatabaseAt:(id)arg1 fullDump:(_Bool)arg2 writeTo:(id)arg3 error:(id *)arg4;	// IMP=0x00100000003922a0
- (void).cxx_destruct;	// IMP=0x000000000036e2a0
- (id)init;	// IMP=0x0000000000392ec0
- (_Bool)checker:(id)arg1 handleLockedItemAtPath:(id)arg2 handle:(const struct fpfs_item_handle *)arg3;	// IMP=0x0000000000376a40
- (_Bool)checker:(id)arg1 handleItem:(int)arg2 itemStatus:(const CDStruct_211817f0 *)arg3 under:(id)arg4 brokenInvariants:(unsigned long long)arg5;	// IMP=0x0000000000376490
- (_Bool)launchFromURLs:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000375e10
- (void)dealloc;	// IMP=0x000000000036e280
- (id)initWithDatabasesBackupsPaths:(id)arg1 volumeRole:(unsigned int)arg2 providerDomainID:(id)arg3 domainUserInfo:(id)arg4 reason:(unsigned long long)arg5 usingFPFS:(_Bool)arg6 iCDPackageDetection:(_Bool)arg7 useShouldPause:(_Bool)arg8 shouldPause:(CDUnknownBlockType)arg9 sendDiagnostics:(CDUnknownBlockType)arg10 saveCheckpoint:(CDUnknownBlockType)arg11 isInvalidated:(CDUnknownBlockType)arg12;	// IMP=0x000000000036c730
@property(nonatomic, copy) NSDictionary *telemetryReport;
@property(nonatomic) long long numberOfReconciliationTableEntries; // @synthesize numberOfReconciliationTableEntries;
@property(nonatomic) long long numberOfBrokenFilesInBackupManifestCheck; // @synthesize numberOfBrokenFilesInBackupManifestCheck;
@property(nonatomic) long long numberOfBrokenFilesInReconciliationTableCheck; // @synthesize numberOfBrokenFilesInReconciliationTableCheck;
@property(nonatomic) long long numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck; // @synthesize numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property(nonatomic) long long numberOfBrokenFilesInFSAndFSSnapshotCheck; // @synthesize numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property(nonatomic) long long numberOfFilesChecked; // @synthesize numberOfFilesChecked;

@end

