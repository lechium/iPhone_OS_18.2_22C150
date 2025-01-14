//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFCommandExecutionInfo, NSArray, NSSet, NSString, NSURL, NSUUID, SABaseCommand;

@protocol AFProviderServiceDelegate <NSObject>
- (oneway void)fetchContextsForKeys:(NSSet *)arg1 forRequestID:(NSString *)arg2 includesNearbyDevices:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (oneway void)prepareForAudioHandoffWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(NSString *)arg1;
- (oneway void)getTimeoutSuspendedWithReply:(void (^)(_Bool))arg1;
- (oneway void)handleCommand:(SABaseCommand *)arg1 executionInfo:(AFCommandExecutionInfo *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;
- (oneway void)getWatchAuthenticatedWithReply:(void (^)(_Bool))arg1;
- (oneway void)getStarkModeWithReply:(void (^)(_Bool))arg1;
- (oneway void)getCarDNDModeWithReply:(void (^)(_Bool))arg1;
- (oneway void)getLockStateWithReply:(void (^)(_Bool))arg1;
- (oneway void)dismissAssistantWithReason:(long long)arg1;
- (oneway void)dismissAssistant;
- (oneway void)openURL:(NSURL *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)syncChunksWithPreAnchor:(NSString *)arg1 postAnchor:(NSString *)arg2 updates:(NSArray *)arg3 deletes:(NSArray *)arg4 validity:(NSString *)arg5 forRequestUUID:(NSUUID *)arg6 reply:(void (^)(_Bool))arg7;
@end

