//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _AAUIRawImageAndCropRectCacheEntry : NSObject
{
    UIImage *_rawImage;	// 8 = 0x8
    NSString *_serverCacheTag;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    struct CGRect _rawCropRect;	// 32 = 0x20
}

+ (id)entryWithRawImage:(id)arg1 rawCropRect:(struct CGRect)arg2 serverCacheTag:(id)arg3;	// IMP=0x0060000000033eb4
- (void).cxx_destruct;	// IMP=0x0000000000034042
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(readonly, nonatomic) struct CGRect rawCropRect; // @synthesize rawCropRect=_rawCropRect;
@property(readonly, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

