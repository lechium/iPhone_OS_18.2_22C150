//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCIconOfferMetadata : ASCOfferMetadata
{
    NSString *_animationName;	// 8 = 0x8
    NSString *_baseImageName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000005d88f
- (void).cxx_destruct;	// IMP=0x000000000005deed
@property(readonly, copy, nonatomic) NSString *baseImageName; // @synthesize baseImageName=_baseImageName;
@property(readonly, copy, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
- (_Bool)isIcon;	// IMP=0x000000000005dec3
- (id)imageNameForSize:(id)arg1;	// IMP=0x000000000005ddfd
- (id)description;	// IMP=0x000000000005dd21
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005db7e
- (unsigned long long)hash;	// IMP=0x000000000005dacc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005d9f8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005d897
- (id)initWithBaseImageName:(id)arg1 animationName:(id)arg2;	// IMP=0x000000000005d7c8

@end
