//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString;
@protocol NavigationCameraSnapshotPickerDelegate;

@interface NavigationCameraSnapshotPickerViewController : UITableViewController
{
    id <NavigationCameraSnapshotPickerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000bb3a2d
@property(readonly, nonatomic) __weak id <NavigationCameraSnapshotPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraSnapshotsManager:(id)arg1 didRemoveAtIndex:(unsigned long long)arg2 fromTraceFile:(id)arg3;	// IMP=0x0010000000bb38c3
- (void)cameraSnapshotsManager:(id)arg1 didInsertAtIndex:(unsigned long long)arg2 toTraceFile:(id)arg3;	// IMP=0x0010000000bb36cf
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000bb3585
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0010000000bb357d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000bb33d4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000bb33c6
- (id)_detailTextForSnapshot:(id)arg1;	// IMP=0x0010000000bb2de3
- (void)_configureCell:(id)arg1 withCameraSnapshot:(id)arg2;	// IMP=0x0010000000bb2a9b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000bb2925
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000bb28e1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000bb28d6
- (void)_registerTableViewCells;	// IMP=0x0010000000bb2883
- (id)cameraSnapshots;	// IMP=0x0010000000bb27d5
- (void)viewDidLoad;	// IMP=0x0010000000bb2756
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000bb268b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

