//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSSet, NSString, PKPassRelevantDate;

@interface PDCandidateRelevantPass : NSObject
{
    _Bool _hasLocations;	// 8 = 0x8
    NSString *_uniqueIdentifier;	// 16 = 0x10
    NSString *_passTypeIdentifier;	// 24 = 0x18
    NSString *_serialNumber;	// 32 = 0x20
    NSData *_manifestHash;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSString *_organizationName;	// 56 = 0x38
    NSString *_groupingIdentifier;	// 64 = 0x40
    NSArray *_relevantDates;	// 72 = 0x48
    PKPassRelevantDate *_matchedRelevantDate;	// 80 = 0x50
    NSSet *_embeddedBeacons;	// 88 = 0x58
}

+ (id)_dateForPassComparison:(id)arg1 priority:(unsigned long long)arg2;	// IMP=0x00400000003fd37f
- (void).cxx_destruct;	// IMP=0x00200000003fd4e8
@property(nonatomic) _Bool hasLocations; // @synthesize hasLocations=_hasLocations;
@property(copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property(copy, nonatomic) PKPassRelevantDate *matchedRelevantDate; // @synthesize matchedRelevantDate=_matchedRelevantDate;
@property(copy, nonatomic) NSArray *relevantDates; // @synthesize relevantDates=_relevantDates;
@property(copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (long long)comparePassDatesToPass:(id)arg1;	// IMP=0x00100000003fd2d1
- (unsigned long long)hash;	// IMP=0x00100000003fd2bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003fd205

@end
