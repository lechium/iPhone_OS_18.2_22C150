//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface CSDThumperAccount : NSObject
{
    NSString *_accountID;	// 8 = 0x8
    NSString *_primaryDeviceID;	// 16 = 0x10
    NSString *_phoneNumberURI;	// 24 = 0x18
    long long _availableDeviceSlots;	// 32 = 0x20
    NSSet *_allowedSecondaryDeviceIDs;	// 40 = 0x28
}

+ (void)setPhoneNumberMCCToISOCountryCodeTransformBlock:(CDUnknownBlockType)arg1;	// IMP=0x00200000000bd44a
+ (CDUnknownBlockType)phoneNumberMCCToISOCountryCodeTransformBlock;	// IMP=0x00100000000bd431
- (void).cxx_destruct;	// IMP=0x00200000000bd4e3
@property(copy, nonatomic) NSSet *allowedSecondaryDeviceIDs; // @synthesize allowedSecondaryDeviceIDs=_allowedSecondaryDeviceIDs;
@property(nonatomic) long long availableDeviceSlots; // @synthesize availableDeviceSlots=_availableDeviceSlots;
@property(copy, nonatomic) NSString *phoneNumberURI; // @synthesize phoneNumberURI=_phoneNumberURI;
@property(copy, nonatomic) NSString *primaryDeviceID; // @synthesize primaryDeviceID=_primaryDeviceID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)containsRegisteredDeviceID:(id)arg1;	// IMP=0x00100000000bd13f
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x00100000000bcf48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000bcee1
- (unsigned long long);	// IMP=0x00100000000bcdda
- (id)description;	// IMP=0x00100000000bcb27
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bca3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bc953
- (id)initWithAccountID:(id)arg1 primaryDeviceID:(id)arg2 phoneNumberURI:(id)arg3 availableDeviceSlots:(long long)arg4 allowedSecondaryDeviceIDs:(id)arg5;	// IMP=0x00100000000bc83b
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000bc3c9
- (id)init;	// IMP=0x00100000000bc39e

@end

