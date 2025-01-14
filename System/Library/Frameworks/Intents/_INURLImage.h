//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _INURLImage : INImage
{
    NSData *_sandboxExtensionData;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000250ba0
- (void).cxx_destruct;	// IMP=0x0000000000250b6f
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000250a52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002509b3
- (void)_setSandboxExtensionData:(id)arg1;	// IMP=0x000000000025097f
- (id)_sandboxExtensionData;	// IMP=0x000000000025096a
- (_Bool)_isSupportedForDonation;	// IMP=0x00000000002508f8
- (_Bool)_isEligibleForProxying;	// IMP=0x00000000002508b4
- (id)_initWithURLRepresentation:(id)arg1;	// IMP=0x00000000002508a2
- (id)_URLRepresentation;	// IMP=0x0000000000250890
- (void)_setUri:(id)arg1;	// IMP=0x0000000000250835
- (id)_uri;	// IMP=0x0000000000250823
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x0000000000250756
- (_Bool)_requiresRetrieval;	// IMP=0x000000000025074e
- (id)_identifier;	// IMP=0x00000000002506fe
- (id)_dictionaryRepresentation;	// IMP=0x00000000002505d4
- (id)initWithImageURL:(id)arg1;	// IMP=0x0000000000250564
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b877c

@end

