//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI18DurationFilterCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 65536 = 0x10000
    MISSING_TYPE *tickView;	// 1937330991 = 0x7379532f
    MISSING_TYPE *durationLabel;	// 1919052108 = 0x7262694c
    MISSING_TYPE *minLabel;	// 1986622032 = 0x76697250
    MISSING_TYPE *layout;	// 1701667186 = 0x656d6172
    MISSING_TYPE *labelLayoutGuide;	// 1699557235 = 0x654d2f73
    MISSING_TYPE *unitsVerticalConstraint;	// 1769370213 = 0x69767265
}

- (void).cxx_destruct;	// IMP=0x0000000000511ba0
- (void)textSizeChanged:(id)arg1;	// IMP=0x0000000000511ac0
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000005118d0
- (void)prepareForReuse;	// IMP=0x0000000000511800
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005117e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005117b0
@property(nonatomic, readonly) UILabel *durationLabel; // @synthesize durationLabel;
- (void)accessibilityApplyState:(_Bool)arg1 disabled:(_Bool)arg2;	// IMP=0x0000000000511dd0

@end
