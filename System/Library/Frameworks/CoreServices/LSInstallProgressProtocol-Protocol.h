//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class LSApplicationProxy, NSArray, NSDictionary, NSString;

@protocol LSInstallProgressProtocol <NSObject>
- (void)_lsPing:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)setProgressProportionsByPhase:(NSDictionary *)arg1 forInstallOfApplicationWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendNotification:(int)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendNotification:(int)arg1 forApplications:(NSArray *)arg2 withPlugins:(_Bool)arg3;
- (void)installationFailedForApplication:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)installationEndedForApplication:(NSString *)arg1 withState:(unsigned long long)arg2;
- (void)createInstallProgressForApplication:(LSApplicationProxy *)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)removeObserver;
- (void)addObserver;
@end
