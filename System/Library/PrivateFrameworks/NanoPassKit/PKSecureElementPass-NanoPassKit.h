//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSecureElementPass.h>

@class NSSet;

@interface PKSecureElementPass (NanoPassKit)
- (_Bool)npkIsInLostMode;	// IMP=0x003000000002e0b8
- (_Bool)npkIsPrecursorPass;	// IMP=0x003000000002e060
- (unsigned long long)npkLinkedAccountFeatureIdentifier;	// IMP=0x003000000002e017
- (_Bool)npkProvidesLinkedAccountFeatureIdentifier;	// IMP=0x003000000002dffe
- (_Bool)npkIsBankConnectEligible;	// IMP=0x003000000002df76
- (_Bool)npkSupportsMultipleRadioTypes;	// IMP=0x003000000002df36
- (unsigned long long)allSupportedTechnologies;	// IMP=0x003000000002dcda
- (_Bool)npkSupportUWBSecureRanging;	// IMP=0x003000000002dc6b
@property(readonly, nonatomic) NSSet *npkSubcredentials;
- (_Bool)npkExclusivelyTransactsOverNFC;	// IMP=0x003000000002dbe4
- (_Bool)npkExclusivelyTransactsOverBluetooth;	// IMP=0x003000000002dbad
- (_Bool)npkSupportsNFC;	// IMP=0x003000000002db98
- (_Bool)npkSupportsBluetooth;	// IMP=0x003000000002db80
@end

