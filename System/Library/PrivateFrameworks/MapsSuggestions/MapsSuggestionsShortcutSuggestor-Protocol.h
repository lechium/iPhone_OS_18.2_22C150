//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@protocol MapsSuggestionsInternalResourceDepot;

@protocol MapsSuggestionsShortcutSuggestor <NSObject>
+ (id)new;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (id)initFromResourceDepot:(id <MapsSuggestionsInternalResourceDepot>)arg1;
- (id)init;
@end
