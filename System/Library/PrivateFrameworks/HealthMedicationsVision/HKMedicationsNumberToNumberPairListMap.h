//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKMedicationsNumberToNumberPairListMap : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002836
- (void)enumerateIntegersForKey:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002635
- (void)addInteger:(long long)arg1 andInteger:(long long)arg2 forKey:(long long)arg3;	// IMP=0x0000000000002511
- (id)init;	// IMP=0x00000000000024bb

@end
