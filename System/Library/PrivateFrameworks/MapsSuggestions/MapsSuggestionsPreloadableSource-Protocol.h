//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class CLLocation, NSDateInterval;

@protocol MapsSuggestionsPreloadableSource <MapsSuggestionsSource>
- (_Bool)suggestionsEntriesAtLocation:(CLLocation *)arg1 period:(NSDateInterval *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end

