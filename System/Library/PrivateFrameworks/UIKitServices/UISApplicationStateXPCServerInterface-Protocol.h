//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol UISApplicationStateXPCServerInterface <NSObject>
- (oneway void)setNextWakeIntervalSinceReferenceDate:(NSNumber *)arg1;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(NSNumber *)arg1;
- (oneway void)setUsesBackgroundNetwork:(NSNumber *)arg1;
- (void)usesBackgroundNetworkWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setBadgeString:(NSString *)arg1;
- (oneway void)setBadgeNumber:(NSNumber *)arg1;
- (void)badgeValueWithCompletion:(void (^)(NSNumber *, NSString *, NSError *))arg1;
@end
