//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsTrigger-Protocol.h>

@class NSString, OS_dispatch_queue;

@protocol MapsSuggestionsTimer <MapsSuggestionsTrigger>
- (void)unschedule;
- (void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;
- (id)initWithName:(NSString *)arg1 queue:(OS_dispatch_queue *)arg2 block:(void (^)(void))arg3;

@optional
- (id)initWithName:(NSString *)arg1 queue:(OS_dispatch_queue *)arg2 timerReturningBlock:(void (^)(id <MapsSuggestionsTimer>))arg3;
@end

