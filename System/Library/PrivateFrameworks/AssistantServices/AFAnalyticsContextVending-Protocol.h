//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@protocol AFAnalyticsContextVending <NSObject>
- (NSArray *)af_dialogIdentifiersForAnalyticsContext;
- (void)af_addEntriesToAnalyticsContext:(NSMutableDictionary *)arg1;
- (NSDictionary *)af_analyticsContext;
@end
