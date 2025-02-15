//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSUserActivity.h>

@class INInteraction, NSString;

@interface NSUserActivity (INCacheSupport)
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e124
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;	// IMP=0x00100000000ccd16
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;	// IMP=0x00100000000cccfb
+ (void)deleteAllInteractions;	// IMP=0x00100000000ccce0
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0010000000129683
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dedd
- (id)_intents_copy;	// IMP=0x00100000000ccb3b
- (long long)_executionContext;	// IMP=0x00100000000ccab9
- (void)_setExecutionContext:(long long)arg1;	// IMP=0x00100000000cca4d
- (_Bool)_isEligibleForPrediction;	// IMP=0x00100000000cca3b
- (void)_setEligibleForPrediction:(_Bool)arg1;	// IMP=0x00100000000cca29
- (void)_intentsPrepareForEncoding;	// IMP=0x00100000000cc979
- (id)_intentsIdentifier;	// IMP=0x00100000000cc70c
@property(nonatomic) unsigned long long shortcutAvailability;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
- (void)setInteraction:(id)arg1;	// IMP=0x00100000000cc513
- (void)_setAccessedInteraction:(_Bool)arg1;	// IMP=0x00100000000cc4ba
- (_Bool)_accessedInteraction;	// IMP=0x00100000000cc478
- (_Bool)_hasInteraction;	// IMP=0x00100000000cc429
- (void)_setInteraction:(id)arg1 donate:(_Bool)arg2;	// IMP=0x00100000000cc336
@property(readonly, nonatomic) INInteraction *interaction;
- (void)_setAppIntent:(id)arg1;	// IMP=0x00100000000cc150
- (id)_appIntent;	// IMP=0x00100000000cbff2
- (id)_initWithIntent:(id)arg1;	// IMP=0x00100000000cbf05
- (void)setInInteraction:(id)arg1;	// IMP=0x00100000000cbef3
- (id)inInteraction;	// IMP=0x00100000000cbee1
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0010000000129615

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

