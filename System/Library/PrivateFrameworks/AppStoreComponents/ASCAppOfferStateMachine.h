//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAppOfferSavedState, ASCAppOfferStateCenter, NSMutableArray, NSString;
@protocol ASCOffer;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateMachine : NSObject
{
    id <ASCOffer> _offer;	// 8 = 0x8
    ASCAppOfferStateCenter *_stateCenter;	// 16 = 0x10
    NSMutableArray *_delegates;	// 24 = 0x18
    ASCAppOfferSavedState *_mostRecentState;	// 32 = 0x20
    NSString *_mostRecentStatusText;	// 40 = 0x28
    ASCAppOfferSavedState *_overrideState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000016665
@property(retain, nonatomic) ASCAppOfferSavedState *overrideState; // @synthesize overrideState=_overrideState;
@property(copy, nonatomic) NSString *mostRecentStatusText; // @synthesize mostRecentStatusText=_mostRecentStatusText;
@property(retain, nonatomic) ASCAppOfferSavedState *mostRecentState; // @synthesize mostRecentState=_mostRecentState;
@property(readonly, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak ASCAppOfferStateCenter *stateCenter; // @synthesize stateCenter=_stateCenter;
@property(readonly, nonatomic) id <ASCOffer> offer; // @synthesize offer=_offer;
- (void)invalidateTemporaryStateForcingUpdate:(_Bool)arg1;	// IMP=0x00000000000164ac
- (void)installTemporaryWaitingState;	// IMP=0x0000000000016226
- (void)viewAppForAppDistributionOffer:(id)arg1;	// IMP=0x00000000000161bd
- (id)performActionWithActivity:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000000016101
- (void)offerStatusTextDidChange:(id)arg1;	// IMP=0x000000000001602f
- (void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 flags:(long long)arg3;	// IMP=0x0000000000015c79
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ac5
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000159b8
- (void)addDelegate:(id)arg1;	// IMP=0x000000000001574a
- (void)dealloc;	// IMP=0x0000000000015557
- (id)initWithOffer:(id)arg1 stateCenter:(id)arg2;	// IMP=0x0000000000015496

@end
