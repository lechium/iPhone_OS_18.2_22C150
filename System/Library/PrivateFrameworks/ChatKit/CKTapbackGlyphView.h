//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class MISSING_TYPE;
@protocol CKTapbackViewDelegate;

@interface CKTapbackGlyphView : UILabel
{
    MISSING_TYPE *attributionScaleFactor;	// 8 = 0x8
    MISSING_TYPE *platterEdgeInsets;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 48 = 0x30
    MISSING_TYPE *isSelected;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000009293d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000929370
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000929200
@property(nonatomic) _Bool isSelected; // @synthesize isSelected;
- (id)init;	// IMP=0x0000000000928f30
@property(nonatomic) __weak id <CKTapbackViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) struct UIEdgeInsets platterEdgeInsets; // @synthesize platterEdgeInsets;
@property(nonatomic, readonly) double attributionScaleFactor; // @synthesize attributionScaleFactor;
- (void)performViewControllerDismissingAnimation;	// IMP=0x0000000000929ab0
- (void)performViewControllerAppearingAnimation;	// IMP=0x0000000000929870
- (void)prepareForAppearingAnimation;	// IMP=0x00000000009295f0
- (void)performSendAnimation;	// IMP=0x00000000009295c0
- (void)configureForTapback:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x00000000009294c0

@end
