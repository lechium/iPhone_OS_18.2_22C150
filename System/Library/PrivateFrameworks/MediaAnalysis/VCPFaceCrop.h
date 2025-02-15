//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, VCPPhotosFace;

@interface VCPFaceCrop : NSObject
{
    NSData *_faceCropData;	// 8 = 0x8
    VCPPhotosFace *_originatingFace;	// 16 = 0x10
    struct CGSize _cachedImageDimensions;	// 24 = 0x18
    short _state;	// 40 = 0x28
    NSString *_localIdentifier;	// 48 = 0x30
}

+ (id)generateFaceCropsForFace:(id)arg1 resourceURL:(id)arg2 groupingIdentifier:(id)arg3;	// IMP=0x0060000000240089
- (void).cxx_destruct;	// IMP=0x000000000024084d
@property(nonatomic) short state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (id)description;	// IMP=0x0000000000240749
- (struct CGSize)imageDimensions;	// IMP=0x00000000002406f3
- (id)originatingFace;	// IMP=0x00000000002406e5
- (id)faceCropData;	// IMP=0x00000000002406d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002406cc
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;	// IMP=0x000000000023ffca
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;	// IMP=0x000000000023ff1f

@end

