//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISegmentedControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14FitnessAppRoot23VibrantSegmentedControl : UISegmentedControl
{
    MISSING_TYPE *lastTouchStayedOnSelectedSegment;	// 8 = 0x8
}

+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;	// IMP=0x006000000001be10
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;	// IMP=0x006000000001be00
- (id)initWithItems:(id)arg1;	// IMP=0x000000000001d1e0
- (void)_highlightSegment:(long long)arg1;	// IMP=0x000000000001cb80
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001caf0
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c790
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c6b0
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000001c5d0
- (void)setImage:(id)arg1 forSegmentAtIndex:(long long)arg2;	// IMP=0x000000000001c570
- (void)insertSegmentWithImage:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001c410
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c140
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001c110
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x000000000001bea0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x000000000001be60
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;	// IMP=0x000000000001be20

@end
