//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, UnitsInfo;

__attribute__((visibility("hidden")))
@interface CalculateUnitOutput : NSObject
{
    int _count;	// 8 = 0x8
    CDStruct_a734b2e2 *_lengths;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    UnitsInfo *_unitsInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000095e60
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) UnitsInfo *unitsInfo; // @synthesize unitsInfo=_unitsInfo;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) CDStruct_a734b2e2 *lengths; // @synthesize lengths=_lengths;
- (void)dealloc;	// IMP=0x0000000000095dc5
- (unsigned long long)resolvedUnitFormatForUnitID:(int)arg1 string:(id)arg2;	// IMP=0x0000000000095aad
- (id)initWithLocale:(id)arg1;	// IMP=0x00000000000959e7

@end
