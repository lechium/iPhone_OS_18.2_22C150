//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders30TTRIEditSectionsViewController : UICollectionViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *localUndoManager;	// 24 = 0x18
    MISSING_TYPE *dataSource;	// 32 = 0x20
    MISSING_TYPE *lastConsumedViewModel;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_cancelButton;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_doneButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000241520
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002414c0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0010000000241490
- (void)didToggleHideEmptySections:(id)arg1;	// IMP=0x0010000000241420
- (void)didTapDone:(id)arg1;	// IMP=0x00100000002413a0
- (void)didTapCancel:(id)arg1;	// IMP=0x00100000002412e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000240330
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000240280
- (void)viewDidLoad;	// IMP=0x0010000000240250
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000023f9c0
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0010000000241760
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0010000000241690
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000241670
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00100000002415b0

@end

