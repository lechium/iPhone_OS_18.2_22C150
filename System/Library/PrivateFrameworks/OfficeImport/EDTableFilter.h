//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject
{
    int mScale;	// 8 = 0x8
    int mOperator;	// 12 = 0xc
    double mValue;	// 16 = 0x10
    double mFilterValue;	// 24 = 0x18
}

+ (id)edTableFilter;	// IMP=0x00600000003bfa59
- (id)description;	// IMP=0x00000000003bfac2
- (void)setOperatorType:(int)arg1;	// IMP=0x00000000003bfab9
- (int)operatorType;	// IMP=0x00000000003bfab0
- (void)setScale:(int)arg1;	// IMP=0x00000000003bfaa7
- (int)scale;	// IMP=0x00000000003bfa9e
- (void)setFilterValue:(double)arg1;	// IMP=0x00000000003bfa93
- (double)filterValue;	// IMP=0x00000000003bfa88
- (void)setValue:(double)arg1;	// IMP=0x00000000003bfa7d
- (double)value;	// IMP=0x00000000003bfa72

@end
