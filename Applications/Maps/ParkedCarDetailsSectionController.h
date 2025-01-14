//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MULabeledValueActionRowView, MULabeledValueActionTextFieldRowView, MUPlaceSectionView, NSDateComponentsFormatter, NSString, NSTimer, UGCPhotoCarouselCell, UGCPhotoCarouselController, UIImageView;
@protocol MULabeledValueActionTextFieldRowViewDelegate, ParkedCarDetailsSectionControllerDelegate;

@interface ParkedCarDetailsSectionController
{
    UGCPhotoCarouselCell *_carouselCell;	// 8 = 0x8
    UGCPhotoCarouselController *_photoCarouselController;	// 16 = 0x10
    MULabeledValueActionTextFieldRowView *_notesRowView;	// 24 = 0x18
    NSDateComponentsFormatter *_timestampFormatter;	// 32 = 0x20
    NSTimer *_timestampUpdateTimer;	// 40 = 0x28
    MULabeledValueActionRowView *_timestampRowView;	// 48 = 0x30
    MUPlaceSectionView *_sectionView;	// 56 = 0x38
    id <ParkedCarDetailsSectionControllerDelegate> _detailsDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000048ea3e
@property(nonatomic) __weak id <ParkedCarDetailsSectionControllerDelegate> detailsDelegate; // @synthesize detailsDelegate=_detailsDelegate;
@property(nonatomic) __weak id <MULabeledValueActionTextFieldRowViewDelegate> textFieldDelegate;
- (void)_updateTimestamp;	// IMP=0x001000000048e6c5
- (void)_scheduleTimestampUpdateTimerIfNecessary;	// IMP=0x001000000048e64e
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000048e5c9
- (void)photoCarouselController:(id)arg1 didSelectImageWithIdentifier:(id)arg2;	// IMP=0x001000000048e554
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x001000000048e508
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000048e494
@property(readonly, nonatomic) UIImageView *photoImageView;
- (id)sectionView;	// IMP=0x001000000048e45b
- (void)updateFromParkedCar;	// IMP=0x001000000048e28f
- (_Bool)resignNotesTextField;	// IMP=0x001000000048e272
- (_Bool)activateNotesTextField;	// IMP=0x001000000048e255
@property(readonly, nonatomic) _Bool supportsAddingPhotos;
- (id)sectionHeaderViewModel;	// IMP=0x001000000048e19b
- (void)_commonInit;	// IMP=0x001000000048dd2b
- (id)initWithParkedCar:(id)arg1;	// IMP=0x001000000048dcdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

