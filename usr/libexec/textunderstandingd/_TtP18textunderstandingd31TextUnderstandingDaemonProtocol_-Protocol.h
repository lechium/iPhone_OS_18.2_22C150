//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol _TtP18textunderstandingd31TextUnderstandingDaemonProtocol_
- (void)triggerIncrementalPoemUpdate;
- (void)triggerPoemOnBoarding;
- (void)triggerSpotlightFileUpdateNoArgsWithReply:(void (^)(void))arg1;
- (void)triggerSpotlightFileUpdateWithItems:(NSArray *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)pingWithReply:(void (^)(void))arg1;
@end
