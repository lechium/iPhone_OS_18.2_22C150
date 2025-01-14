//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@class NSData, NSDate, NSMutableSet, NSSet, SFActivityScanner, SharingBTLEAdvertisementPayload, UACornerActionManager, UASharingReceiver;

@interface SharingBTLESuggestedItem : UAUserActivityInfo
{
    unsigned int _optionBits;	// 8 = 0x8
    NSDate *_currentUntilDate;	// 16 = 0x10
    SFActivityScanner *_scanner;	// 24 = 0x18
    SharingBTLEAdvertisementPayload *_advertisementPayload;	// 32 = 0x20
    double _payloadAvailabilityDelay;	// 40 = 0x28
    NSMutableSet *_payloadRequestedCompletions;	// 48 = 0x30
    UASharingReceiver *_receiver;	// 56 = 0x38
    UACornerActionManager *_manager;	// 64 = 0x40
    NSSet *_teamIDs;	// 72 = 0x48
    NSDate *_dontPrefetchBefore;	// 80 = 0x50
    NSDate *_removeAfter;	// 88 = 0x58
}

+ (id)statusString;	// IMP=0x004000000006af0c
+ (id)cornerActionBTLEItemWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 scanner:(id)arg5 receiver:(id)arg6;	// IMP=0x00100000000654f1
+ (id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned int)arg2 scanner:(id)arg3 receiver:(id)arg4;	// IMP=0x00100000000653c4
- (void).cxx_destruct;	// IMP=0x002000000006b102
@property(copy) NSDate *removeAfter; // @synthesize removeAfter=_removeAfter;
@property(copy) NSDate *dontPrefetchBefore; // @synthesize dontPrefetchBefore=_dontPrefetchBefore;
@property(copy) NSSet *teamIDs; // @synthesize teamIDs=_teamIDs;
@property unsigned int optionBits; // @synthesize optionBits=_optionBits;
@property(readonly, retain) UACornerActionManager *manager; // @synthesize manager=_manager;
@property(readonly, retain) UASharingReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) NSMutableSet *payloadRequestedCompletions; // @synthesize payloadRequestedCompletions=_payloadRequestedCompletions;
// Error: Property attributes should begin with the type ('T') attribute, property name: payloadAvailabilityDelay
// Property attributes: (null)

@property(copy) SharingBTLEAdvertisementPayload *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly, retain) SFActivityScanner *scanner; // @synthesize scanner=_scanner;
@property(copy) NSDate *currentUntilDate; // @synthesize currentUntilDate=_currentUntilDate;
- (id)description;	// IMP=0x001000000006adca
- (void)setWhen:(id)arg1;	// IMP=0x001000000006acc4
- (id)when;	// IMP=0x001000000006abed
- (id)statusString;	// IMP=0x001000000006a651
- (void)clearPayload;	// IMP=0x001000000006a42f
- (void)resignCurrent;	// IMP=0x001000000006a3bf
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000680b6
- (_Bool)updateFromSFAdvertisement:(id)arg1;	// IMP=0x0010000000067b1d
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11;	// IMP=0x0010000000066ee7
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11 dynamicIdentifier:(id)arg12;	// IMP=0x0010000000066e43

// Remaining properties
@property(readonly, copy) NSData *BTLEPayloadData; // @dynamic BTLEPayloadData;

@end

