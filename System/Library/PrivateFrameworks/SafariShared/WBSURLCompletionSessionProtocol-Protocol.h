//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WBSTrialSearchParameters;

@protocol WBSURLCompletionSessionProtocol
- (void)getBestMatchesForTypedString:(NSString *)arg1 filterResultsUsingProfileIdentifier:(NSString *)arg2 limit:(unsigned long long)arg3 forQueryID:(long long)arg4 withSearchParameters:(WBSTrialSearchParameters *)arg5 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg6;
@end

