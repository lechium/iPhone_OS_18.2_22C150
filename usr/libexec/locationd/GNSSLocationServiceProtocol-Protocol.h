//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol GNSSLocationServiceProtocol
- (void)raiseRavenEventsFromData:(NSData *)arg1;
- (void)pauseResetAndFreeRavenSupervisorWithCompletion:(void (^)(_Bool))arg1;
- (void)getRavenSolutionAtMCTime:(double)arg1 WithReply:(void (^)(NSData *))arg2;
- (void)getRavenSolutionWithReply:(void (^)(NSData *))arg1;
- (void)configureInitializeAndStartRavenSupervisorWithPlatformInfo:(NSData *)arg1 withParametersOverrideString:(NSString *)arg2 withCompletion:(void (^)(_Bool))arg3;
@end
