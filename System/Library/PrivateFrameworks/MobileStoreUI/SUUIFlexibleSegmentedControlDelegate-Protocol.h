//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSArray, SUUIFlexibleSegmentedControl;

@protocol SUUIFlexibleSegmentedControlDelegate <NSObject>

@optional
- (void)segmentedControl:(SUUIFlexibleSegmentedControl *)arg1 showMoreListWithTitles:(NSArray *)arg2;
- (void)segmentedControl:(SUUIFlexibleSegmentedControl *)arg1 didSelectSegmentIndex:(long long)arg2;
@end

