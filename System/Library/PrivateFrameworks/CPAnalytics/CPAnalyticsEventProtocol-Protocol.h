//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CPAnalytics/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSObject, NSString;

@protocol CPAnalyticsEventProtocol <NSObject>
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) NSString *name;
- (NSDictionary *)copyRawPayload;
- (NSObject *)propertyForKey:(NSString *)arg1;
@end
