//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOAttributionVersionMigrator, GEODataSetDescription, GEOReportedProgress, GEOResourceManifestConfiguration, GEOResources, GEOTileGroup, NSDictionary, NSMutableArray, NSProgress, NSSet, NSString, NSURL;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOAttributionMigrationTask : NSObject
{
    GEOAttributionVersionMigrator *_migrator;	// 8 = 0x8
    GEOResourceManifestConfiguration *_manifestConfiguration;	// 16 = 0x10
    GEOTileGroup *_newTileGroup;	// 24 = 0x18
    GEOResources *_resourceManifest;	// 32 = 0x20
    GEOActiveTileGroup *_oldTileGroup;	// 40 = 0x28
    GEODataSetDescription *_dataSetDescription;	// 48 = 0x30
    GEOReportedProgress *_progress;	// 56 = 0x38
    GEOActiveTileGroupMigrationTaskOptions *_options;	// 64 = 0x40
    id <NSObject> _transaction;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    NSMutableArray *_inProgressTasks;	// 88 = 0x58
    NSURL *_destinationDirectory;	// 96 = 0x60
    struct GEOOnce_s _finished;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 112 = 0x70
    CDUnknownBlockType _completionHandler;	// 120 = 0x78
    NSSet *_allAttributionFilenames;	// 128 = 0x80
    NSDictionary *_urlToChecksum;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000265b2e
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x00000000002652ae
- (void)removeOldData:(id)arg1;	// IMP=0x0000000000264f99
- (void)populateTileGroup:(id)arg1;	// IMP=0x0000000000264f93
- (void)cancel;	// IMP=0x0000000000264eed
- (void)_finishedAllTasks;	// IMP=0x0000000000264ed9
- (void)_finishWithError:(id)arg1;	// IMP=0x0000000000264bb9
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;	// IMP=0x000000000026415f
- (_Bool)_hasExistingUsableDownloadForURL:(id)arg1 withChecksum:(id)arg2;	// IMP=0x0000000000263f50
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;	// IMP=0x0000000000263e78
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;	// IMP=0x0000000000263ce6
- (id)init;	// IMP=0x0000000000263cbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
