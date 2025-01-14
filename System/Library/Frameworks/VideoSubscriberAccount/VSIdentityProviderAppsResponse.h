//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAppsResponse : NSObject
{
    NSArray *_providerAppAdamIDs;	// 8 = 0x8
    NSArray *_channelMappings;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000066a29
- (void).cxx_destruct;	// IMP=0x0000000000066bde
@property(copy, nonatomic) NSArray *channelMappings; // @synthesize channelMappings=_channelMappings;
@property(copy, nonatomic) NSArray *providerAppAdamIDs; // @synthesize providerAppAdamIDs=_providerAppAdamIDs;
- (id)description;	// IMP=0x0000000000066b67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066b0f
- (unsigned long long)hash;	// IMP=0x0000000000066ad6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066a86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066a31
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000669a9
- (id)init;	// IMP=0x0000000000066915

@end

