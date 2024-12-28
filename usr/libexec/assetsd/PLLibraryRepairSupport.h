//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLPhotoLibraryBundle, PLXPCTransaction;
@protocol OS_xpc_object;

@interface PLLibraryRepairSupport : NSObject
{
    NSObject<OS_xpc_object> *_xpcActivity;	// 8 = 0x8
    PLXPCTransaction *_transaction;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    PLPhotoLibraryBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000082dd
@property(retain) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
- (void)runPeriodicMaintenanceActivityOnAllLibrariesWithExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007b91
- (void)_maintainLibrary:(id)arg1 executionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000075ae
- (_Bool)_updateDeferredCriticalMaintenanceTaskMarker:(id)arg1;	// IMP=0x0010000000007528
- (_Bool)_updateDeferredMaintenanceTaskMarker:(id)arg1 value:(id)arg2;	// IMP=0x001000000000750c
- (_Bool)_updateMaintenanceTaskMarker:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x00100000000073e7
- (_Bool)_isValidProcessingURL:(id)arg1 interruptedPaths:(id)arg2;	// IMP=0x001000000000734c
- (id)_interruptedProcessingURLs;	// IMP=0x0010000000007294
- (void)_saveInterruptedProcessingURLs:(id)arg1;	// IMP=0x00100000000071f3
- (id)_buildIncompleteMaintenanceTaskPathsKey;	// IMP=0x0010000000007126
- (void)runPeriodicMaintenance;	// IMP=0x0010000000006bd7
- (void)runCuratedLibraryPeriodicMaintenanceTasks;	// IMP=0x0010000000006a41
- (_Bool)shouldRunLocationOfInterestUpdateTaskWithGlobalValues:(id)arg1;	// IMP=0x0010000000006899
- (_Bool)_runCriticalPeriodicMaintenanceTasksDeferActivityIfRequired:(id)arg1;	// IMP=0x0010000000006720
- (_Bool)_deferActivityIfRequiredForClassName:(id)arg1;	// IMP=0x001000000000655f
- (unsigned long long)_indexOfRegisteredMaintenanceTaskForMarker:(id)arg1;	// IMP=0x0010000000006472
- (id)_registeredMaintenanceTaskClasses;	// IMP=0x00100000000061f4
- (id)_registeredCriticalMaintenaceTaskClasses;	// IMP=0x0010000000006163
- (id)initWithActivity:(id)arg1 description:(id)arg2;	// IMP=0x0010000000006088

@end
