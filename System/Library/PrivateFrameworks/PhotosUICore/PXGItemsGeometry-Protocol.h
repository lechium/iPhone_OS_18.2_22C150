//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, PXGLayout;

@protocol PXGItemsGeometry
- (NSIndexSet *)itemsInRect:(struct CGRect)arg1 inLayout:(PXGLayout *)arg2;
- (NSIndexSet *)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
@end
