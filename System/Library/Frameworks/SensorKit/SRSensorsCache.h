//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;

__attribute__((visibility("hidden")))
@interface SRSensorsCache : NSObject
{
    NSCache *_sensorsCache;	// 8 = 0x8
    NSArray *_sensorDescriptionsDirs;	// 16 = 0x10
}

+ (void)setDefaultCache:(id)arg1;	// IMP=0x0040000000002e26
+ (void)initialize;	// IMP=0x0040000000002da2
- (void)dealloc;	// IMP=0x00000000000030ac
- (id)initWithDirectories:(id)arg1;	// IMP=0x000000000000304c
- (id)init;	// IMP=0x0000000000002e71

@end

