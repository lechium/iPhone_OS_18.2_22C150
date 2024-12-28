//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;	// 8 = 0x8
    _Bool mRelative;	// 9 = 0x9
    _Bool mSelected;	// 10 = 0xa
    unsigned long long mFieldId;	// 16 = 0x10
    unsigned long long mCount;	// 24 = 0x18
}

+ (id)pivotAreaReference;	// IMP=0x00600000003a60bc
- (id)description;	// IMP=0x00000000003a6134
- (void)setCount:(unsigned long long)arg1;	// IMP=0x00000000003a612a
- (unsigned long long)count;	// IMP=0x00000000003a6120
- (void)setFieldId:(unsigned long long)arg1;	// IMP=0x00000000003a6116
- (unsigned long long)fieldId;	// IMP=0x00000000003a610c
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003a6103
- (_Bool)selected;	// IMP=0x00000000003a60fa
- (void)setRelative:(_Bool)arg1;	// IMP=0x00000000003a60f1
- (_Bool)relative;	// IMP=0x00000000003a60e8
- (void)setByPosition:(_Bool)arg1;	// IMP=0x00000000003a60df
- (_Bool)byPosition;	// IMP=0x00000000003a60d6
- (id)init;	// IMP=0x00000000003a6077

@end
