//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSLayoutConstraint, NSString, UGCGlyphButtonView;
@protocol UGCRatingCategoryLikeDislikeViewDelegate;

@interface UGCRatingCategoryLikeDislikeView : UIView
{
    UGCGlyphButtonView *_likeButton;	// 8 = 0x8
    UGCGlyphButtonView *_dislikeButton;	// 16 = 0x10
    NSLayoutConstraint *_likeDislikeHorizontalSpacingConstraint;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    long long _currentState;	// 40 = 0x28
    id <UGCRatingCategoryLikeDislikeViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000e7c504
@property(nonatomic) __weak id <UGCRatingCategoryLikeDislikeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)didTapOnGlyphView:(id)arg1;	// IMP=0x0010000000e7c44b
- (void)_updateAppearance:(_Bool)arg1;	// IMP=0x0010000000e7c34a
@property(nonatomic) _Bool enabled;
- (void)setCurrentState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000e7c295
- (void)_dislikeButtonPressed;	// IMP=0x0010000000e7c259
- (void)_likeButtonPressed;	// IMP=0x0010000000e7c21d
- (void)_setupConstraints;	// IMP=0x0010000000e7c12c
- (void)_setupSubviews;	// IMP=0x0010000000e7c01a
- (MISSING_TYPE *)initWithCurrentState: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000e7bf51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

