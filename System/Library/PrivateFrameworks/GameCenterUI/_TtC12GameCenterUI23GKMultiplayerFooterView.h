//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSString;

@interface _TtC12GameCenterUI23GKMultiplayerFooterView : UIView
{
    MISSING_TYPE *buttonTitle;	// 8 = 0x8
    MISSING_TYPE *primaryButton;	// 24 = 0x18
    MISSING_TYPE *secondaryButton;	// 32 = 0x20
    MISSING_TYPE *statusLabel;	// 40 = 0x28
    MISSING_TYPE *backgroundView;	// 48 = 0x30
    MISSING_TYPE *topSeparator;	// 56 = 0x38
    MISSING_TYPE *startGameHandler;	// 64 = 0x40
    MISSING_TYPE *inviteFriendsHandler;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_secondaryButtonFocusGuide;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_primaryButtonFocusGuide;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001faf01
- (void)didTapSecondaryButton:(id)arg1;	// IMP=0x00000000001fae51
- (void)didTapButton:(id)arg1;	// IMP=0x00000000001faddc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001fad7a
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001faca4
- (void)layoutSubviews;	// IMP=0x00000000001fa553
- (void)configureUsing:(id)arg1;	// IMP=0x00000000001fa229
@property(nonatomic, copy) CDUnknownBlockType inviteFriendsHandler;
@property(nonatomic, copy) CDUnknownBlockType startGameHandler;
@property(nonatomic, copy) NSString *footerStatusString;
@property(nonatomic, copy) NSString *secondaryButtonTitle;
@property(nonatomic, copy) NSString *primaryButtonTitle;
@property(nonatomic) _Bool inviteFriendsButtonHidden;
@property(nonatomic) _Bool inviteFriendsButtonEnabled;
@property(nonatomic) _Bool startGameButtonEnabled;
- (void)wantsMaterialBackgroundWithScrollOffset:(double)arg1;	// IMP=0x00000000001f9590
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f9364
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f8ddf

@end

