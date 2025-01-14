//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkConnectionOptions, ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    ADRapportLinkConnectionOptions *_connectionOptions;	// 24 = 0x18
    long long _enablesProximityTracking;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001cd7fd
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cd7b0
- (void).cxx_destruct;	// IMP=0x00200000001cd50c
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkConnectionOptions *connectionOptions; // @synthesize connectionOptions=_connectionOptions;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(readonly, copy, nonatomic) ADRapportLinkDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cd424
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cd2de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001cd2d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001cd14d
- (unsigned long long)hash;	// IMP=0x00100000001cd0b7
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001cd025
- (id)description;	// IMP=0x00100000001cd011
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 connectionOptions:(id)arg3 enablesProximityTracking:(long long)arg4;	// IMP=0x00100000001ccf26
- (id)init;	// IMP=0x00100000001ccf12
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ccd7f
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cd805

@end

