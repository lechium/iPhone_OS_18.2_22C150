//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SUUIImageViewElementCacheKey : NSObject
{
    long long _imageTreatment;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    NSURL *_url;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000086945
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000868aa
- (unsigned long long)hash;	// IMP=0x0000000000086894
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;	// IMP=0x00000000000867d8

@end
