//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CollectionsFilterViewModel;

@protocol CollectionsFilterSizeProvider <NSObject>
- (double)defaultHeight;
- (double)minimumInterItemSpacingForSectionAtIndex:(long long)arg1;
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;
- (struct UIEdgeInsets)insetForFilterAtIndex:(long long)arg1;
- (struct CGSize)sizeForFilter:(CollectionsFilterViewModel *)arg1;
@end
