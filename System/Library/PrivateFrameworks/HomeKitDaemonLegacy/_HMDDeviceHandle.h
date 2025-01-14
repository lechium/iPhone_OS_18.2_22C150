//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccountHandle, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMDDeviceHandle : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002b6a06
+ (id)identifierNamespace;	// IMP=0x00100000002b69d6
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x00100000002b6922
- (void).cxx_destruct;	// IMP=0x00000000002b690f
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b688e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b6801
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b67f6
@property(readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property(readonly, nonatomic, getter=isGlobal) _Bool global;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000002b6670
- (id)initWithDestination:(id)arg1;	// IMP=0x00000000002b663d
@property(readonly, copy, nonatomic) NSString *destination;
- (id)init;	// IMP=0x00000000002b64ed

@end

