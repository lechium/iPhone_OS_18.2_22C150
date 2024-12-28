//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ASCStarRow, UIColor;

__attribute__((visibility("hidden")))
@interface ASCStarRatingView : UIView
{
    double _rating;	// 8 = 0x8
    long long _maxNumberOfStars;	// 16 = 0x10
    long long _starSize;	// 24 = 0x18
    ASCStarRow *_hollowStarRowView;	// 32 = 0x20
    ASCStarRow *_filledStarRowView;	// 40 = 0x28
    UIColor *_starColor;	// 48 = 0x30
}

+ (id)greyFill;	// IMP=0x006000000006851d
- (void).cxx_destruct;	// IMP=0x0000000000068c82
@property(readonly, nonatomic) UIColor *starColor; // @synthesize starColor=_starColor;
@property(readonly, nonatomic) ASCStarRow *filledStarRowView; // @synthesize filledStarRowView=_filledStarRowView;
@property(readonly, nonatomic) ASCStarRow *hollowStarRowView; // @synthesize hollowStarRowView=_hollowStarRowView;
@property(readonly, nonatomic) long long starSize; // @synthesize starSize=_starSize;
@property(readonly, nonatomic) long long maxNumberOfStars; // @synthesize maxNumberOfStars=_maxNumberOfStars;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (id)accessibilityLabel;	// IMP=0x0000000000068c00
- (struct CGSize)sizeWithStarSize:(long long)arg1 andNumberOfStars:(long long)arg2;	// IMP=0x0000000000068be2
- (void)layoutSubviews;	// IMP=0x0000000000068860
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000000006882c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000068804
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000687e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000068777
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006874c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000068721
- (id)initWithMaxNumberOfStars:(long long)arg1 starSize:(long long)arg2 andFill:(_Bool)arg3;	// IMP=0x0000000000068551

@end
