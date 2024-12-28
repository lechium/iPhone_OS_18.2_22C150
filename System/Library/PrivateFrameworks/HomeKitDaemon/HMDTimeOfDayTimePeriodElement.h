//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDTimeOfDayTimePeriodElement
{
    unsigned long long _hour;	// 8 = 0x8
    unsigned long long _minute;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000969184
+ (id)type;	// IMP=0x0010000000969177
@property(readonly) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly) unsigned long long hour; // @synthesize hour=_hour;
- (id)attributeDescriptions;	// IMP=0x0000000000968d86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000968d09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000968c8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000968c82
- (unsigned long long)hash;	// IMP=0x0000000000968c70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000968ba7
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000968a97
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000968962
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;	// IMP=0x000000000096890c

@end
