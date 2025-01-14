//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/NSObject-Protocol.h>

@class CSIndexJob, NSArray, NSString;

@protocol CSIndexExtensionDelegate <NSObject>
- (_Bool)extensionExistsForBundleId:(NSString *)arg1;
- (void)indexRequestsPerformDataJob:(CSIndexJob *)arg1 forBundle:(NSString *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 extensions:(NSArray *)arg2 perExtensionCompletionHandler:(void (^)(NSString *, NSError *))arg3 completionHandler:(void (^)(void))arg4;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 perExtensionCompletionHandler:(void (^)(NSString *, NSError *))arg2 completionHandler:(void (^)(void))arg3;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 forBundles:(NSArray *)arg2 perExtensionCompletionHandler:(void (^)(NSString *, NSError *))arg3 completionHandler:(void (^)(void))arg4;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 forBundle:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
@end

