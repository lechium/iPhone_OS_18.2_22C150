//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RMPersistentActiveIdentifiers : NSObject
{
    NSDictionary *_uniqueIdentifiersByConfigurationType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006a62b
- (void).cxx_destruct;	// IMP=0x002000000006a820
// Error: Property attributes should begin with the type ('T') attribute, property name: uniqueIdentifiersByConfigurationType
// Property attributes: (null)

- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006a795
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006a633
- (id)initWithUniqueIdentifiersByConfigurationType:(id)arg1;	// IMP=0x001000000006a5b8
- (id)initWithConfigurationPayloads:(id)arg1;	// IMP=0x001000000006a183

@end

