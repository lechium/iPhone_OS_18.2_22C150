//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingControl : UIControl
{
    long long _previousUserRating;	// 8 = 0x8
    UIImageView *_emptyStarsImageView;	// 16 = 0x10
    UIImageView *_filledStarsImageView;	// 24 = 0x18
    long long _userRating;	// 32 = 0x20
    float _starSpacing;	// 40 = 0x28
    float _starWidth;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000022d3c5
@property(nonatomic) long long userRating; // @synthesize userRating=_userRating;
@property(nonatomic) float starWidth; // @synthesize starWidth=_starWidth;
@property(nonatomic) float starSpacing; // @synthesize starSpacing=_starSpacing;
- (void)_updateUserRatingWithTouch:(id)arg1;	// IMP=0x000000000022d21c
- (double)_unfilledStarsMinX;	// IMP=0x000000000022d1bf
- (double)_unfilledStarsWidth;	// IMP=0x000000000022d165
- (unsigned long long)_ratingForUIDirection:(unsigned long long)arg1;	// IMP=0x000000000022d137
- (unsigned long long)_firstStar;	// IMP=0x000000000022d120
- (unsigned long long)_lastStar;	// IMP=0x000000000022d109
- (_Bool)_isRTL;	// IMP=0x000000000022d0ef
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022d08a
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000022cffc
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000022cf76
- (void)layoutSubviews;	// IMP=0x000000000022cde6
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000022cdb7
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000022cd84
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000022cd6f
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000022cd44
@property(retain, nonatomic) UIImage *filledStarsImage;
@property(retain, nonatomic) UIImage *emptyStarsImage;

@end

