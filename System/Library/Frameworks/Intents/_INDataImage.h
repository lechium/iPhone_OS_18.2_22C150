//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage
{
    NSUUID *_sha256HashUUID;	// 8 = 0x8
    struct os_unfair_lock_s _hashLock;	// 16 = 0x10
    NSData *_imageData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000149a67
- (void).cxx_destruct;	// IMP=0x0000000000149a36
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014997b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001498fe
- (id)_sha256HashUUID;	// IMP=0x00000000001497e3
- (_Bool)_isEligibleForProxying;	// IMP=0x00000000001497db
- (void)_setImageData:(id)arg1;	// IMP=0x0000000000149761
- (id)_imageData;	// IMP=0x000000000014974f
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x0000000000149682
- (id)_dictionaryRepresentation;	// IMP=0x00000000001494fa
- (id)_identifier;	// IMP=0x00000000001494aa
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000149491
- (_Bool)_requiresRetrieval;	// IMP=0x000000000014945e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001493ad
- (id)initWithImageData:(id)arg1;	// IMP=0x000000000014932e
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b99bb

@end
