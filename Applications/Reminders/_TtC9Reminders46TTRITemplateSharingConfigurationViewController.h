//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders46TTRITemplateSharingConfigurationViewController : UIViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *localUndoManager;	// 24 = 0x18
    MISSING_TYPE *tableView;	// 32 = 0x20
    MISSING_TYPE *cancelButton;	// 40 = 0x28
    MISSING_TYPE *commitButton;	// 48 = 0x30
    MISSING_TYPE *tableDataController;	// 56 = 0x38
    MISSING_TYPE *needsTableCellResize;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_dateAndTimeCell;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_tagsCell;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_locationsCell;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_dateAndTimeSection;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_tagsSection;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_locationsSection;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_imageSection;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000001dfa60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001dfa00
- (void)didTapShowPreview:(id)arg1;	// IMP=0x00100000001df5e0
- (void)didTapCommit:(id)arg1;	// IMP=0x00100000001df430
- (void)didTapCancel:(id)arg1;	// IMP=0x00100000001df290
- (void)viewWillLayoutSubviews;	// IMP=0x00100000001de6f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000001de4f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001de440
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001de410
- (void)viewDidLoad;	// IMP=0x00100000001de290
- (void)loadView;	// IMP=0x00100000001dd790
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001dd640
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00100000001dfca0

@end
