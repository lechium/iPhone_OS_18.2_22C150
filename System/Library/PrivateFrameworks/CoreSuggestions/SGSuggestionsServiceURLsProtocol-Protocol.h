//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>

@class NSDate, NSSet, NSString;

@protocol SGSuggestionsServiceURLsProtocol <_SGSuggestionsServiceBaseProtocol>
- (void)registerURLFeedback:(unsigned char)arg1 absoluteURL:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)urlsFoundBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 excludingBundleIdentifiers:(NSSet *)arg3 containingSubstring:(NSString *)arg4 flagFilter:(unsigned char)arg5 limit:(unsigned int)arg6 withCompletion:(void (^)(NSArray *, NSError *))arg7;
- (void)urlsFoundBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 excludingBundleIdentifiers:(NSSet *)arg3 limit:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
@end

