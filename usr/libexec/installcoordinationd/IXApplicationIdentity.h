//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstalledContentLibrary/MIAppIdentity.h>

@class NSString;

@interface IXApplicationIdentity : MIAppIdentity
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000bb1e
+ (id)identitiesForBundleIdentifiers:(id)arg1;	// IMP=0x001000000000b668
@property(readonly, nonatomic) MIAppIdentity *miAppIdentity;
- (_Bool)resolvePersonaWithError:(id *)arg1;	// IMP=0x001000000000bedf
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000bd65
- (id)description;	// IMP=0x001000000000bcf2
- (id)possibleSerializationsForPlistKey;	// IMP=0x001000000000bc05
- (id)canonicalSerializationForPlistKey;	// IMP=0x001000000000bb99
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithPlistKeySerialization:(id)arg1;	// IMP=0x001000000000b8c4
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)arg1;	// IMP=0x001000000000b8ab
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000000b892
- (id)initWithBundleIdentifier:(id)arg1 personaUniqueString:(id)arg2;	// IMP=0x001000000000b838
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)arg1;	// IMP=0x0010000000039f28

@end

