//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC8StocksUI16SharedImageCache : _TtCs12_SwiftObject
{
    MISSING_TYPE *memoryCache;	// 16 = 0x10
}

- (void)cache:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002ff1d0
- (void)cache:(id)arg1 forKey:(id)arg2 immediately:(_Bool)arg3;	// IMP=0x00000000002ff150
- (id)fetchImageForKey:(id)arg1;	// IMP=0x00000000002ff0f0
- (void)pruneImagesOlderThan:(double)arg1;	// IMP=0x00000000002ff0e0

@end

