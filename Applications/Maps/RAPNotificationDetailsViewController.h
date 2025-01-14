//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray, NSString, RAPPhotoPickerController, RAPReport, RAPUserResponseQuestion, UGCPhotoCarouselController, UIButton, UICollectionView, UIVisualEffectView, _TtC4Maps29RAPTextViewCollectionViewCell, _TtC4Maps31RAPNotificationDetailsViewModel;
@protocol RAPNotificationDetailsViewControllerDelegate;

@interface RAPNotificationDetailsViewController : UIViewController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
    NSArray *_notificationSummaryItems;	// 16 = 0x10
    RAPReport *_report;	// 24 = 0x18
    RAPUserResponseQuestion *_question;	// 32 = 0x20
    RAPPhotoPickerController *_photoPicker;	// 40 = 0x28
    UGCPhotoCarouselController *_photoCarouselController;	// 48 = 0x30
    _TtC4Maps29RAPTextViewCollectionViewCell *_textViewCell;	// 56 = 0x38
    id <RAPNotificationDetailsViewControllerDelegate> _delegate;	// 64 = 0x40
    _TtC4Maps31RAPNotificationDetailsViewModel *_viewModel;	// 72 = 0x48
    UICollectionView *_collectionView;	// 80 = 0x50
    UIButton *_actionButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000346a92
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) _TtC4Maps31RAPNotificationDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <RAPNotificationDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)descriptionCellLinkButtonClick:(id)arg1;	// IMP=0x001000000034692e
- (void)textViewCellDidChangeWithTextViewCell:(id)arg1 validatedText:(id)arg2;	// IMP=0x00100000003468a4
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003467f4
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x001000000034677d
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x0010000000346777
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x0010000000346771
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000034675d
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000346755
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000034674d
- (void)keyboardWillHide:(id)arg1;	// IMP=0x001000000034669b
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0010000000346376
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000345f11
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000345e57
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000345e4c
- (void)_setRAPRecordAsInReviewWithReportID:(id)arg1;	// IMP=0x0010000000345e24
- (void)_submitReport;	// IMP=0x0010000000345a1a
- (void)_updateSummarySection;	// IMP=0x00100000003458ac
- (void)_dismissAndOpenReportsHome;	// IMP=0x00100000003456f9
- (void)_performButtonAction:(int)arg1;	// IMP=0x00100000003456e0
- (void)_send:(id)arg1;	// IMP=0x00100000003456ce
- (void)_done:(id)arg1;	// IMP=0x001000000034564e
- (MISSING_TYPE *)_setupConstraints;	// IMP=0x0010000000344bef
- (void)_setupViews;	// IMP=0x0010000000344256
- (void)_updateDoneButton;	// IMP=0x0010000000344095
- (void)_setupHeaderButtons;	// IMP=0x0010000000343e05
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000343d39
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000343c5f
- (void)viewDidLoad;	// IMP=0x00100000003439d0
- (void)_initPhotoPicker;	// IMP=0x00100000003436fb
- (_Bool)_supportEdit;	// IMP=0x00100000003436d5
- (id)initWithViewModel:(id)arg1 report:(id)arg2 question:(id)arg3;	// IMP=0x001000000034358a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

