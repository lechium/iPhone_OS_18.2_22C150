//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIPSDSublayerInfo : NSObject
{
    unsigned int _numOfSublayers;	// 8 = 0x8
}

+ (id)newWithSublayerCount:(unsigned int)arg1 indexSet:(id)arg2;	// IMP=0x00600000000307e3
- (unsigned int)sublayerAtIndex:(unsigned int)arg1 isValid:(_Bool *)arg2;	// IMP=0x00000000000308fe
- (unsigned int)numberOfSublayers;	// IMP=0x00000000000308f5

@end

