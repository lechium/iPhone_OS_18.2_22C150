//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@protocol WBSContentBlockerStatisticsStore <NSObject>
- (void)clearStatisticsForDomains:(NSArray *)arg1;
- (void)clearStatisticsAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)clearAllStatisticsWithCompletionHandler:(void (^)(void))arg1;
- (void)blockedThirdPartiesAfter:(NSDate *)arg1 before:(NSDate *)arg2 onFirstParty:(NSString *)arg3 completionHandler:(void (^)(NSDictionary *))arg4;
- (void)blockedThirdPartiesAfter:(NSDate *)arg1 before:(NSDate *)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)recordThirdPartyResourceBlocked:(NSURL *)arg1 onFirstParty:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
@end
