//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, NSArray, NSString;

@interface BrowseCategory : NSObject
{
    NSArray *_subCategories;	// 8 = 0x8
    GEOSearchCategory *_category;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000952633
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
- (unsigned long long)hash;	// IMP=0x00100000009525ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009524ee
- (id)description;	// IMP=0x001000000095242c
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
- (void)imageWithScale:(double)arg1 isCarplay:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000952346
- (void)imageWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000095232c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000952321
- (id)initWithCategory:(id)arg1;	// IMP=0x00100000009520cc

@end
