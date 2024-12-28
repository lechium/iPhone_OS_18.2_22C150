//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : NSObject
{
    NSString *_storeName;	// 8 = 0x8
    NSString *_authorPeerID;	// 16 = 0x10
    NSString *_modelVersionHash;	// 24 = 0x18
    PFUbiquityLocation *_rootLocation;	// 32 = 0x20
    PFUbiquityKnowledgeVector *_pKV;	// 40 = 0x28
    PFUbiquityKnowledgeVector *_kv;	// 48 = 0x30
    NSMutableDictionary *_peerRanges;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002ce2a5
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3;	// IMP=0x00000000002ce4bc
- (void)addDictionaryForPeerRange:(id)arg1;	// IMP=0x00000000002ce418
- (id)createPeerRangeDictionary:(id)arg1;	// IMP=0x00000000002ce313
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ce187
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002cde71
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ccd3d
- (id)description;	// IMP=0x00000000002cccb1
- (void)dealloc;	// IMP=0x00000000002ccc2c
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;	// IMP=0x00000000002ccbb1
- (id)init;	// IMP=0x00000000002ccb68

@end
