//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC18HealthExperienceUI12HostViewCell : UICollectionViewCell
{
    MISSING_TYPE *hostView;	// 8 = 0x8
    MISSING_TYPE *recreateViewControllerOnHostedFeedItemChange;	// 16 = 0x10
    MISSING_TYPE *item;	// 24 = 0x18
    MISSING_TYPE *sectionContext;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000003cd30
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x000000000003bb90
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x000000000003bb50
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000003bad0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b5c0
- (void)didLongPress:(id)arg1;	// IMP=0x000000000003b540
- (void)prepareForReuse;	// IMP=0x000000000003b290
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003b090

@end

