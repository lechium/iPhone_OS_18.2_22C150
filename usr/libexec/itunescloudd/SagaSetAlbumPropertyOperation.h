//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SagaSetAlbumPropertyOperation
{
    long long _albumPersistentID;	// 8 = 0x8
    NSString *_albumCloudLibraryID;	// 16 = 0x10
    NSDictionary *_albumProperties;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000a6e72
- (void).cxx_destruct;	// IMP=0x00200000000a6c5e
- (void)main;	// IMP=0x00100000000a6624
- (_Bool)isPersistent;	// IMP=0x00100000000a661c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a657c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a63bf
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 albumPersistentID:(long long)arg3 properties:(id)arg4;	// IMP=0x00100000000a62e5

@end
