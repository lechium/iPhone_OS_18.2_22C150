//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYNotesSyncTask, MISSING_TYPE, NSMutableArray, NSProgress, NSString;
@protocol OS_os_transaction;

@interface BYDaemonCloudSyncController : NSObject
{
    NSMutableArray *_delegates;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    MISSING_TYPE *_errors;	// 32 = 0x20
    BYNotesSyncTask *_notesSync;	// 40 = 0x28
    NSProgress *_notesProgress;	// 48 = 0x30
    NSProgress *_daemonProgress;	// 56 = 0x38
}

+ (id)sharedController;	// IMP=0x002000000000870c
- (void).cxx_destruct;	// IMP=0x002000000000a11d
@property(retain) NSProgress *daemonProgress; // @synthesize daemonProgress=_daemonProgress;
@property(retain) NSProgress *notesProgress; // @synthesize notesProgress=_notesProgress;
@property(retain) BYNotesSyncTask *notesSync; // @synthesize notesSync=_notesSync;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSMutableArray *delegates; // @synthesize delegates=_delegates;
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3;	// IMP=0x0010000000009d6a
- (void)cancelDaemonSync;	// IMP=0x0010000000009c7e
- (void)startDaemonSync;	// IMP=0x0010000000009a3c
- (void)cloudKitSyncer:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0010000000009939
- (void)cloudKitSyncer:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00100000000096e6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000009288
- (void)removeDelegate:(id)arg1;	// IMP=0x001000000000921f
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000091b6
- (void)cancelNotesSync;	// IMP=0x001000000000915c
- (void)startNotesSync;	// IMP=0x001000000000904c
- (void)isSyncInProgress:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008f4c
- (void)cancelSync;	// IMP=0x0010000000008c2c
- (void)startSync;	// IMP=0x0010000000008882
- (void)needsToSyncClasses:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008869
- (void)dealloc;	// IMP=0x00100000000087cc
- (id)init;	// IMP=0x0010000000008761

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

