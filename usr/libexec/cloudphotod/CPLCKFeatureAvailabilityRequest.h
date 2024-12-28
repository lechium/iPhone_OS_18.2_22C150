//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityRequest : PBRequest
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x0040000000049d3b
- (void).cxx_destruct;	// IMP=0x002000000004a7b5
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004a657
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004a5aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004a3e6
- (void)copyTo:(id)arg1;	// IMP=0x001000000004a321
- (void)writeTo:(id)arg1;	// IMP=0x001000000004a1eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004a1de
- (id)dictionaryRepresentation;	// IMP=0x0010000000049dfb
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000049d1e
- (unsigned long long)featuresCount;	// IMP=0x0010000000049d01
- (void)addFeatures:(id)arg1;	// IMP=0x0010000000049c97
- (void)clearFeatures;	// IMP=0x0010000000049c7a
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x00100000000429f0
- (id)extractRecordTransports;	// IMP=0x00100000000429e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
