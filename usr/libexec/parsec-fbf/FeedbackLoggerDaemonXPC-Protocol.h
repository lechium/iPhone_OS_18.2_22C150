//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol FeedbackLoggerDaemonXPC <NSObject>
- (void)requestSandboxExtensionForBundleID:(NSString *)arg1 completion:(void (^)(NSString *, NSString *))arg2;
- (void)scheduleImmediateUploadWithHeaders:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
@end

