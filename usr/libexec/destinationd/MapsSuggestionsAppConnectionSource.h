//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

@class MapsSuggestionsAppGuardian, MapsSuggestionsPortrait, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsAppConnectionSource : MapsSuggestionsBaseSource
{
    MapsSuggestionsPortrait *_portrait;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_appConnectionUpdateQueue;	// 16 = 0x10
    MapsSuggestionsAppGuardian *_guardian;	// 24 = 0x18
}

+ (unsigned long long)disposition;	// IMP=0x0020000000042ef7
+ (_Bool)isEnabled;	// IMP=0x0010000000042ee0
- (void).cxx_destruct;	// IMP=0x002000000004466c
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000044263
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004425b
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x001000000004424e
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000436fb
- (void)stop;	// IMP=0x001000000004366d
- (void)start;	// IMP=0x00100000000435fa
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;	// IMP=0x0010000000043262
- (id)initWithPortrait:(id)arg1 delegate:(id)arg2 guardian:(id)arg3 name:(id)arg4;	// IMP=0x0010000000042f02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

