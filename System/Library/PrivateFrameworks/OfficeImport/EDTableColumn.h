//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDString;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    unsigned long long mHeaderRowDxfIndex;	// 16 = 0x10
    unsigned long long mTotalsRowDxfIndex;	// 24 = 0x18
    unsigned long long mDataAreaDxfIndex;	// 32 = 0x20
    EDString *mName;	// 40 = 0x28
    EDString *mUniqueName;	// 48 = 0x30
    EDString *mTotalsRowLabel;	// 56 = 0x38
}

+ (id)tableColumnWithResources:(id)arg1;	// IMP=0x00600000003a9a60
- (void).cxx_destruct;	// IMP=0x00000000003a9f5a
- (id)description;	// IMP=0x00000000003a9f1c
- (void)setTotalsRowLabel:(id)arg1;	// IMP=0x00000000003a9ed8
- (id)totalsRowLabel;	// IMP=0x00000000003a9eca
- (void)setUniqueName:(id)arg1;	// IMP=0x00000000003a9e86
- (id)uniqueName;	// IMP=0x00000000003a9e78
- (void)setName:(id)arg1;	// IMP=0x0000000000202280
- (id)name;	// IMP=0x00000000003a9e6a
- (void)setDataAreaDxf:(id)arg1;	// IMP=0x00000000003a9dc6
- (id)dataAreaDxf;	// IMP=0x00000000003a9d33
- (void)setTotalsRowDxf:(id)arg1;	// IMP=0x00000000003a9c8f
- (id)totalsRowDxf;	// IMP=0x00000000003a9bfc
- (void)setHeaderRowDxf:(id)arg1;	// IMP=0x00000000003a9b58
- (id)headerRowDxf;	// IMP=0x00000000003a9ac5
- (id)initWithResources:(id)arg1;	// IMP=0x00000000002021e4
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000021a267
- (unsigned long long)dataAreaDxfIndex;	// IMP=0x00000000003a9fbe
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;	// IMP=0x00000000003a9fb4
- (unsigned long long)totalsRowDxfIndex;	// IMP=0x00000000003a9faa
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;	// IMP=0x00000000003a9fa0
- (unsigned long long)headerRowDxfIndex;	// IMP=0x00000000003a9f96

@end
