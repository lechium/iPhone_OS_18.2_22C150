//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShimGameServices/NSObject-Protocol.h>

@class GKGameInternal, NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL;

@protocol GKUtilityService <NSObject>
- (oneway void)getBSServiceConnectionEndpointForMachName:(NSString *)arg1 service:(NSString *)arg2 instance:(NSString *)arg3 handler:(void (^)(BSServiceConnectionEndpoint *))arg4;
- (oneway void)handleGameControllerHomeButtonPressed;
- (oneway void)openDashboardAsRemoteAlertForGame:(GKGameInternal *)arg1 hostPID:(int)arg2 deeplink:(NSDictionary *)arg3;
- (oneway void)openDashboardAsRemoteAlertForGame:(GKGameInternal *)arg1 hostPID:(int)arg2 deeplink:(NSDictionary *)arg3 launchContext:(NSString *)arg4;
- (oneway void)emitMultiplayerMessage:(NSString *)arg1;
- (oneway void)completeGameRecording;
- (oneway void)recordGameStart;
- (oneway void)completeMatchRecording:(NSString *)arg1 matchType:(NSString *)arg2;
- (oneway void)recordSharePlayDevices:(NSNumber *)arg1;
- (oneway void)recordActiveDevices:(NSNumber *)arg1;
- (oneway void)recordMatchServer:(NSString *)arg1;
- (oneway void)recordMatchStart:(NSString *)arg1 minPlayers:(NSNumber *)arg2 maxPlayers:(NSNumber *)arg3;
- (oneway void)reportLoadUrlMetricsEvent:(NSDictionary *)arg1;
- (oneway void)reportMultiplayerActivityMetricsEvent:(NSDictionary *)arg1;
- (oneway void)reportPerformanceMetricsEvent:(NSDictionary *)arg1;
- (oneway void)reportMetricsEventWithTopic:(NSString *)arg1 shouldFlush:(NSNumber *)arg2 metricsFields:(NSDictionary *)arg3;
- (oneway void)viewableThresholdWithCompletion:(void (^)(NSNumber *))arg1;
- (oneway void)openSoftwareUpdateSettings;
- (oneway void)openICloudSettings;
- (oneway void)deleteCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)loadCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(NSData *))arg3;
- (oneway void)cacheImageData:(NSData *)arg1 inSubdirectory:(NSString *)arg2 withFileName:(NSString *)arg3 handler:(void (^)(void))arg4;
- (oneway void)requestImageDataForURL:(NSURL *)arg1 subdirectory:(NSString *)arg2 fileName:(NSString *)arg3 handler:(void (^)(NSData *))arg4;
- (oneway void)getStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
@end

