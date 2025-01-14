//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableSet, NSString;

@interface SKGPersonComponents : NSObject
{
    NSMutableSet *_nameComponents;	// 8 = 0x8
    NSMutableSet *_names;	// 16 = 0x10
    NSMutableSet *_displayNames;	// 24 = 0x18
    NSMutableSet *_emailAddresses;	// 32 = 0x20
    NSMutableSet *_phoneNumbers;	// 40 = 0x28
    NSString *_entityIdentifier;	// 48 = 0x30
    MISSING_TYPE *_contactIdentifier;	// 56 = 0x38
    NSString *_photosPersonIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000a360d
@property(readonly) NSString *photosPersonIdentifier; // @synthesize photosPersonIdentifier=_photosPersonIdentifier;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly) NSString *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (_Bool)isEqualToPersonComponents:(id)arg1;	// IMP=0x00100000000a306a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a300d
- (void)setPhotosPersonIdentifier:(id)arg1;	// IMP=0x00100000000a2ffc
- (void)setContactIdentifier:(id)arg1;	// IMP=0x00100000000a2feb
- (void)setEntityIdentifier:(id)arg1;	// IMP=0x00100000000a2fda
- (void)addName:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3;	// IMP=0x00100000000a2e96
@property(readonly) NSArray *emailAddresses;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) NSArray *displayNames;
@property(readonly) NSArray *names;
@property(readonly) NSArray *nameComponents;
- (id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2;	// IMP=0x00100000000a2caa
- (id)initWithName:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;	// IMP=0x00100000000a2aa4

@end

