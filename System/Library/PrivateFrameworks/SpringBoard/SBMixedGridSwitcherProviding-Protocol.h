//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray;

@protocol SBMixedGridSwitcherProviding <NSObject>
@property(nonatomic) _Bool reversesFloatingCardDirection;
- (struct _NSRange)rangeOfVisibleAppLayouts;
- (double)firstFloatingCardPeekingWidth;
- (double)unadjustedScaleForIndex:(unsigned long long)arg1;
- (_Bool)isIndexFullyVisible:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(NSArray *)arg1;
- (unsigned long long)numberOfFloatingAppLayouts;
@end
