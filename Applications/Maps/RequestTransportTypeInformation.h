//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RequestTransportTypeInformation : NSObject
{
    NSDictionary *_transportTypeInfoProviders;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000081b9f9
@property(readonly, copy, nonatomic) NSDictionary *transportTypeInfoProviders; // @synthesize transportTypeInfoProviders=_transportTypeInfoProviders;
- (unsigned long long)hash;	// IMP=0x001000000081b9ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000081b8e9
- (id)requestInfoProviderForTransportType:(long long)arg1;	// IMP=0x001000000081b862
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000081b5fa

@end

