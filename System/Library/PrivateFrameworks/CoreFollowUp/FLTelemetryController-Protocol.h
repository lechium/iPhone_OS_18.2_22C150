//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFollowUp/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray, NSString;

@protocol FLTelemetryController <NSObject>
- (void)sendAnalyticsForEvent:(NSString *)arg1 builder:(NSDictionary * (^)(void))arg2;
- (void)captureItemRemoval:(FLFollowUpItem *)arg1;
- (void)captureItemAddition:(FLFollowUpItem *)arg1;
- (void)captureItemView:(FLFollowUpItem *)arg1;
- (void)captureCurrentState:(NSArray *)arg1;
- (void)captureActionForItem:(FLFollowUpItem *)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
@end

