//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSuggestionClientModel/NSObject-Protocol.h>

@class NSArray;

@protocol ATXProactiveSuggestionClientModelProtocol <NSObject>
- (void)retrieveCurrentSuggestionsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)updateSuggestions:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)updateSuggestions:(NSArray *)arg1;
@end

