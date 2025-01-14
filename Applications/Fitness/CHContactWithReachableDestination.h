//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSSet, NSString;

@interface CHContactWithReachableDestination : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    NSString *_reachablePhoneNumber;	// 16 = 0x10
    NSString *_reachableEmailAddress;	// 24 = 0x18
    NSString *_serviceIdentifier;	// 32 = 0x20
    NSSet *_additionalServiceIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000265f2
@property(copy, nonatomic) NSSet *additionalServiceIdentifiers; // @synthesize additionalServiceIdentifiers=_additionalServiceIdentifiers;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *reachableEmailAddress; // @synthesize reachableEmailAddress=_reachableEmailAddress;
@property(copy, nonatomic) NSString *reachablePhoneNumber; // @synthesize reachablePhoneNumber=_reachablePhoneNumber;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;

@end

