//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECIntToTwoIntKeyCache : NSObject
{
    NSMutableDictionary *mCache;	// 8 = 0x8
}

+ (id)keyForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2;	// IMP=0x00600000003c186b
- (void).cxx_destruct;	// IMP=0x00000000003c19f2
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;	// IMP=0x00000000003c1943
- (_Bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long *)arg3;	// IMP=0x00000000003c1893
- (id)init;	// IMP=0x00000000003c17f7

@end
