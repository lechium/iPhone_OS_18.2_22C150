//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSAnalyticsXPCServerInterface-Protocol.h>
#import <TipsCore/TPSSearchQueryXPCServerInterface-Protocol.h>

@class NSString, TPSAssetsConfiguration;

@protocol TPSXPCServerInterface <TPSAnalyticsXPCServerInterface, TPSSearchQueryXPCServerInterface>
- (void)userGuideMapWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchAssetsWithAssetsConfiguration:(TPSAssetsConfiguration *)arg1 completionHandler:(void (^)(TPSAssetsInfo *, NSError *))arg2;
- (void)contentForVariant:(NSString *)arg1 completionHandler:(void (^)(TPSTip *, NSError *))arg2;
- (void)contentWithCompletionHandler:(void (^)(TPSContentPackage *, NSError *))arg1;
- (oneway void)removeNotificationForIdentifier:(NSString *)arg1;
- (oneway void)contentViewedForIdentifier:(NSString *)arg1;
- (oneway void)tipsAppActive;
- (oneway void)tipNotificationInteractedByUser;
@end

