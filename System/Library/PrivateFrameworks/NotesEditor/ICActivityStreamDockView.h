//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ICActivityStreamSelection, ICCloudSyncingObject, MISSING_TYPE, NSLayoutConstraint;
@protocol ICActivityStreamCoordinating;

@interface ICActivityStreamDockView : UIView
{
    MISSING_TYPE *coordinator;	// 8 = 0x8
    MISSING_TYPE *isDisplayedInCard;	// 16 = 0x10
    MISSING_TYPE *horizontalStackLeadingConstraint;	// 24 = 0x18
    MISSING_TYPE *selection;	// 32 = 0x20
    MISSING_TYPE *object;	// 40 = 0x28
    MISSING_TYPE *margin;	// 48 = 0x30
    MISSING_TYPE *buttonHeight;	// 56 = 0x38
    MISSING_TYPE *closeButtonHeight;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_topBorderView;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectView;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_colorBar;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_avatarView;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_titleLabel;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_subtitleLabel;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_showAllActivityButton;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_closeButton;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_horizontalStack;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_verticalStack;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_baselineLayoutGuide;	// 152 = 0x98
    MISSING_TYPE *colorBarHidden;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000002313d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002312f0
@property(nonatomic, readonly) double closeButtonImageHeight;
@property(nonatomic, readonly) double closeButtonHeight; // @synthesize closeButtonHeight;
@property(nonatomic, readonly) double buttonHeight; // @synthesize buttonHeight;
@property(nonatomic, readonly) double margin; // @synthesize margin;
@property(nonatomic, retain) ICCloudSyncingObject *object; // @synthesize object;
@property(nonatomic, retain) ICActivityStreamSelection *selection; // @synthesize selection;
- (void)update;	// IMP=0x000000000022fd40
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022e8a0
- (id)initWithCoordinator:(id)arg1 isDisplayedInCard:(_Bool)arg2;	// IMP=0x000000000022e6e0
@property(nonatomic, retain) NSLayoutConstraint *horizontalStackLeadingConstraint; // @synthesize horizontalStackLeadingConstraint;
@property(nonatomic, readonly) _Bool isDisplayedInCard; // @synthesize isDisplayedInCard;
@property(nonatomic) __weak id <ICActivityStreamCoordinating> coordinator; // @synthesize coordinator;

@end
