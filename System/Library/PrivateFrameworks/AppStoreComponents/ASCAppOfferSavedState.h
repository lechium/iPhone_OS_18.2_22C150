//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCOfferMetadata, NSString;

__attribute__((visibility("hidden")))
@interface ASCAppOfferSavedState : NSObject
{
    NSString *_state;	// 8 = 0x8
    ASCOfferMetadata *_metadata;	// 16 = 0x10
    long long _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001546e
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isActionable;
@property(readonly, nonatomic) _Bool isLoadingFullState;
- (id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3;	// IMP=0x0000000000015361

@end

