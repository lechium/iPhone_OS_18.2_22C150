//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKFixedValueDateSpanDataSource;
@protocol HKDateRangeDataUpdateDelegate;

__attribute__((visibility("hidden")))
@interface _HKFixedValueDateSpanDelegate : NSObject
{
    HKFixedValueDateSpanDataSource *_fixedValueDateSpanDataSource;	// 8 = 0x8
    id <HKDateRangeDataUpdateDelegate> _updateCallbackDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b418b
@property(nonatomic) __weak id <HKDateRangeDataUpdateDelegate> updateCallbackDelegate; // @synthesize updateCallbackDelegate=_updateCallbackDelegate;
@property(nonatomic) __weak HKFixedValueDateSpanDataSource *fixedValueDateSpanDataSource; // @synthesize fixedValueDateSpanDataSource=_fixedValueDateSpanDataSource;
- (void)setUpdateDelegate:(id)arg1;	// IMP=0x00000000000b412b
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000000000b40a2

@end
