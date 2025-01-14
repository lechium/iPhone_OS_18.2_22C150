//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;	// IMP=0x00300000000159b7
@property(retain, nonatomic) NSNumber *roundedRectBorderWidth;
@property(retain, nonatomic) UIColor *roundedRectBorderColor;
@property(retain, nonatomic) UIColor *roundedRectBackgroundColor;
- (id)addConstraintsToSetSize:(struct CGSize)arg1;	// IMP=0x0030000000019e06
- (id)addConstraintsToFillSuperview;	// IMP=0x0030000000019c7b
- (id)generateImage;	// IMP=0x0030000000019bb6
@property(retain, nonatomic) UIColor *debugHighlight;
- (void)setRandomDebugHighlight;	// IMP=0x00300000000196a8
- (void)centerVerticallyInSuperview;	// IMP=0x003000000001957c
- (void)centerHorizontallyInSuperview;	// IMP=0x003000000001943c
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;	// IMP=0x00300000000192d8
@property(readonly, copy) NSArray *allSubviews;
@end

