//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, NSString;

@protocol ACActivityAuthorizationXPCClient
- (oneway void)activityAuthorizationLevelDidChangeForBundleIdentifier:(NSString *)arg1 authorizationCount:(NSNumber *)arg2;
- (oneway void)frequentUpdatesAuthorizationDidChangeWithOptions:(NSData *)arg1;
- (oneway void)activityAuthorizationDidChangeWithOptions:(NSData *)arg1;
@end
