//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33ContentUnavailableFixedHeightCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 0 = 0x0
    MISSING_TYPE *contentUnavailableView;	// 0 = 0x0
    MISSING_TYPE *contentBottomConstraint;	// 0 = 0x0
    MISSING_TYPE *cellHeightConstraint;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000098370
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000000982a0
- (void)prepareForReuse;	// IMP=0x00000000000981a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098180
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000098150
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
