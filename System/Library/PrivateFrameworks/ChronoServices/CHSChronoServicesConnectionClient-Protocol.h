//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/NSObject-Protocol.h>

@class CHSWidgetRelevanceServiceEvent, NSArray, NSDictionary, NSSet, NSString;

@protocol CHSChronoServicesConnectionClient <NSObject>

@optional
- (void)activityDidUpdate:(NSString *)arg1 payloadID:(NSString *)arg2;
- (void)handleWidgetRelevanceEvent:(CHSWidgetRelevanceServiceEvent *)arg1;
- (void)timelineEntryRelevanceDidChange:(NSDictionary *)arg1;
- (void)nearbyDevicesDidChange:(NSArray *)arg1;
- (void)widgetExtensionsDidChange:(NSSet *)arg1;
@end
