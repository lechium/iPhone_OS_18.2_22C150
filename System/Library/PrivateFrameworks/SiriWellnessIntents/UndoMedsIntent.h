//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSArray;

@interface UndoMedsIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x000000000015ae20
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x000000000015aa40
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015a7f0
- (id)init;	// IMP=0x000000000015a6b0

// Remaining properties
@property(nonatomic, copy) NSArray *matchingMeds; // @dynamic matchingMeds;

@end

