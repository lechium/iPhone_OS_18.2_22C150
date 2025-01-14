//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalEntry.h"

@class HKCharacteristicType;

__attribute__((visibility("hidden")))
@interface _HDSetCharacteristicJournalEntry : HDJournalEntry
{
    id _value;	// 8 = 0x8
    HKCharacteristicType *_dataType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000004788ec
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x0060000000478422
- (void).cxx_destruct;	// IMP=0x0000000000478b37
@property(readonly, nonatomic) HKCharacteristicType *dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000478a4b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004788f4

@end

