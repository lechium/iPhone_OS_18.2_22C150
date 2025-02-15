//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSSet;

@interface MTRCASESessionResumptionInfo : NSObject
{
    NSNumber *_nodeID;	// 8 = 0x8
    NSData *_resumptionID;	// 16 = 0x10
    NSData *_sharedSecret;	// 24 = 0x18
    NSSet *_caseAuthenticatedTags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004d8ac6
- (void).cxx_destruct;	// IMP=0x00000000004d93d2
@property(retain, nonatomic) NSSet *caseAuthenticatedTags; // @synthesize caseAuthenticatedTags=_caseAuthenticatedTags;
@property(retain, nonatomic) NSData *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(retain, nonatomic) NSData *resumptionID; // @synthesize resumptionID=_resumptionID;
@property(retain, nonatomic) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d91ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d8ace

@end

