//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewController.h"

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController
{
    NSMutableArray *textFieldViews;	// 440 = 0x1b8
    NSMutableArray *textFields;	// 448 = 0x1c0
    _Bool _textFieldsCanBecomeFirstResponder;	// 456 = 0x1c8
    UIAlertControllerVisualStyle *_visualStyle;	// 464 = 0x1d0
    UICollectionViewFlowLayout *_collectionViewLayout;	// 472 = 0x1d8
    _Bool _hidden;	// 480 = 0x1e0
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;	// 488 = 0x1e8
}

- (void).cxx_destruct;	// IMP=0x00000000002fe4aa
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000002fe44f
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000002fe447
- (_Bool)resignFirstResponder;	// IMP=0x00000000002fe287
- (void)updateTextFieldStyle;	// IMP=0x00000000002fe0f2
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002fdffe
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000002fdfec
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000002fdfe1
@property(nonatomic) _Bool textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;	// IMP=0x00000000002fdedf
- (long long)numberOfTextFields;	// IMP=0x00000000002fdec2
- (id)textFieldContainerViews;	// IMP=0x00000000002fdcda
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x00000000002fdc7f
- (void)_updatePreferredContentSize;	// IMP=0x00000000002fdb52
- (void)_returnKeyPressedInTextField:(id)arg1;	// IMP=0x00000000002fd930
- (id)addTextFieldWithPlaceholder:(id)arg1;	// IMP=0x00000000002fd74e
- (double)_bottomMarginForTextFields;	// IMP=0x00000000002fd66e
@property(nonatomic) UIAlertControllerVisualStyle *visualStyle;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002fd559
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002fd374
- (void)viewDidLoad;	// IMP=0x00000000002fd308
- (id)init;	// IMP=0x00000000002fd10e

@end
