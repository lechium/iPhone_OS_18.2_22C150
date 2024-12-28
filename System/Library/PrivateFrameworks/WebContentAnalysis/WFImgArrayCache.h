//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WFImgArrayCache : NSObject
{
    NSMutableString *imageAlternativeDescriptions;	// 8 = 0x8
    long long numberOfUnknownSizedImages;	// 16 = 0x10
    long long numberOfKnownImagePixels;	// 24 = 0x18
}

+ (id)imgArrayCacheWithArray:(id)arg1;	// IMP=0x006000000000387d
- (void)dealloc;	// IMP=0x0000000000003bc9
- (long long)numberOfKnownImagePixels;	// IMP=0x0000000000003bbf
- (long long)numberOfUnknownSizedImages;	// IMP=0x0000000000003bb5
- (id)imageAlternativeDescriptions;	// IMP=0x0000000000003bab
- (id)initWithArray:(id)arg1;	// IMP=0x00000000000038ac

@end
