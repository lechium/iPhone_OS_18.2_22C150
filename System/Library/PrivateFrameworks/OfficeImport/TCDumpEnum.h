//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpEnum : NSObject
{
    NSString *mTypeName;	// 8 = 0x8
    NSMutableDictionary *mValueToNameMap;	// 16 = 0x10
    NSMutableDictionary *mNameToValueMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002d005c
- (id)nameForValue:(int)arg1;	// IMP=0x00000000002cffde
- (id)valueForName:(id)arg1;	// IMP=0x00000000002cffb8
- (id)typeName;	// IMP=0x00000000002cffaa
- (id)initWithTypeName:(id)arg1 pairs:(struct TCDumpEnumPair *)arg2;	// IMP=0x00000000002cfe30

@end

