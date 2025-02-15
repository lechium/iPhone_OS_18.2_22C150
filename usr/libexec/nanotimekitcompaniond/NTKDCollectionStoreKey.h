//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface NTKDCollectionStoreKey : NSObject
{
    NSString *_collectionIdentifier;	// 8 = 0x8
    NSUUID *_deviceUUID;	// 16 = 0x10
}

+ (id)keyWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0020000000008986
- (void).cxx_destruct;	// IMP=0x0020000000008bc3
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
- (id)description;	// IMP=0x0010000000008b9d
- (id)plistRepresentation;	// IMP=0x0010000000008b12
- (unsigned long long)hash;	// IMP=0x0010000000008ad3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000008a0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000008a03

@end

