//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC15MapsSuggestions25MapsSuggestionsFinanceKit : NSObject
{
    MISSING_TYPE *uniqueName;	// 8 = 0x8
    MISSING_TYPE *_connector;	// 24 = 0x18
    MISSING_TYPE *_observer;	// 32 = 0x20
    MISSING_TYPE *_delegate;	// 40 = 0x28
    MISSING_TYPE *_timeWindow;	// 56 = 0x38
    MISSING_TYPE *_requester;	// 64 = 0x40
    MISSING_TYPE *_queue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000203b0
- (id)init;	// IMP=0x0000000000020350
- (BOOL)deleteOrDeclineEntryWithEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000202e0
- (void)stopObservingForOrders;	// IMP=0x0000000000020180
- (void)startObservingForOrdersWithPeriod:(double)arg1;	// IMP=0x000000000001fe50
- (void)updateOrdersWithOrders:(id)arg1;	// IMP=0x000000000001f9f0
- (_Bool)canProduceEntriesOfTypeWithType:(long long)arg1;	// IMP=0x000000000001e2a0
@property(nonatomic, copy) NSString *uniqueName;
- (id)initWithConnector:(id)arg1 requester:(id)arg2;	// IMP=0x000000000001e0a0
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x000000000001df70

@end
