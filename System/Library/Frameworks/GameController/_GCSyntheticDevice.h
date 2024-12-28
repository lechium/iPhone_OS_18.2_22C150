//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCSyntheticDevice : NSObject
{
    unsigned int _serviceIdentity;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    id <NSCopying><NSObject><NSSecureCoding> _controllerIdentifier;	// 24 = 0x18
    NSString *_persistentIdentifier;	// 32 = 0x20
}

+ (id)devicePropertiesWithDescription:(id)arg1;	// IMP=0x006000000002e77a
- (void).cxx_destruct;	// IMP=0x000000000002e9fc
- (id)debugDescription;	// IMP=0x000000000002e959
- (id)description;	// IMP=0x000000000002e91f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e815
- (unsigned long long)hash;	// IMP=0x000000000002e7ff
- (void)dealloc;	// IMP=0x000000000002e7bd
- (id)init;	// IMP=0x000000000002e792

@end
