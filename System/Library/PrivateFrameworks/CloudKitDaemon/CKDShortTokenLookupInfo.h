//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRoughlyEquivalentProperties, NSData, NSString;

@interface CKDShortTokenLookupInfo : NSObject
{
    _Bool _shouldFetchRootRecord;	// 8 = 0x8
    _Bool _forceDSRefetch;	// 9 = 0x9
    NSString *_routingKey;	// 16 = 0x10
    NSData *_shortSharingTokenHashData;	// 24 = 0x18
    NSString *_participantID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014cb0f
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) _Bool forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSData *shortSharingTokenHashData; // @synthesize shortSharingTokenHashData=_shortSharingTokenHashData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (unsigned long long)hash;	// IMP=0x000000000014c9e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014c6b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014c5c5
@property(readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

@end

