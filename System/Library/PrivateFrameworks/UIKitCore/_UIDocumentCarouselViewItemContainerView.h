//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol _UIContentViewInternal;

__attribute__((visibility("hidden")))
@interface _UIDocumentCarouselViewItemContainerView : UIView
{
    id <_UIContentViewInternal> _viewForConfiguration;	// 160 = 0xa0
    UIView *_contentView;	// 168 = 0xa8
    struct CGSize _cachedContentSize;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000ce4edb
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;	// IMP=0x0000000000ce4ec4
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000ce4e28
- (void)_configureView;	// IMP=0x0000000000ce4c41

@end
