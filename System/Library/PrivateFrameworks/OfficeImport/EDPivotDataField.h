//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject
{
    long long mBaseField;	// 8 = 0x8
    unsigned long long mBaseItem;	// 16 = 0x10
    unsigned long long mFieldId;	// 24 = 0x18
    unsigned long long mNumFmtId;	// 32 = 0x20
    NSString *mName;	// 40 = 0x28
    int mFormat;	// 48 = 0x30
}

+ (id)pivotDataField;	// IMP=0x0060000000231e1a
- (void).cxx_destruct;	// IMP=0x00000000003a5c0e
- (id)description;	// IMP=0x00000000003a5bd0
- (void)setShowDataAs:(int)arg1;	// IMP=0x000000000023204f
- (int)showDataAs;	// IMP=0x00000000003a5bc7
- (void)setName:(id)arg1;	// IMP=0x0000000000231ea2
- (id)name;	// IMP=0x00000000003a5bb9
- (void)setNumFmtId:(unsigned long long)arg1;	// IMP=0x0000000000231e98
- (unsigned long long)numFmtId;	// IMP=0x00000000003a5baf
- (void)setFieldId:(unsigned long long)arg1;	// IMP=0x0000000000231e8e
- (unsigned long long)fieldId;	// IMP=0x00000000003a5ba5
- (void)setBaseItem:(unsigned long long)arg1;	// IMP=0x0000000000231e84
- (unsigned long long)baseItem;	// IMP=0x00000000003a5b9b
- (void)setBaseField:(long long)arg1;	// IMP=0x0000000000231e7a
- (long long)baseField;	// IMP=0x00000000003a5b91
- (id)init;	// IMP=0x0000000000231e34

@end

