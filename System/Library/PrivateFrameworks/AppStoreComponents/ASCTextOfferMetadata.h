//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCTextOfferMetadata : ASCOfferMetadata
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000005d22e
- (void).cxx_destruct;	// IMP=0x000000000005d797
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isText;	// IMP=0x000000000005d76d
- (id)description;	// IMP=0x000000000005d691
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d4ee
- (unsigned long long)hash;	// IMP=0x000000000005d43c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005d368
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005d236
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000005d167

@end
