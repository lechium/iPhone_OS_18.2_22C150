//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject
{
    struct EshObject *mEshObject;	// 8 = 0x8
    ESDContainer *mParent;	// 16 = 0x10
    _Bool mIsChart;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032b268
- (void)setChart:(_Bool)arg1;	// IMP=0x000000000018aeec
- (_Bool)isChart;	// IMP=0x000000000002844a
- (void)writeToWriter:(struct OcWriter *)arg1;	// IMP=0x000000000032b23d
- (id)parent;	// IMP=0x00000000000dd5b4
- (struct EshObject *)eshObject;	// IMP=0x0000000000017e3b
- (void)dealloc;	// IMP=0x00000000000a4b9d
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;	// IMP=0x00000000000dce92
- (id)initWithType:(unsigned short)arg1;	// IMP=0x000000000000c8d6
- (id)initWithEshObject:(struct EshObject *)arg1;	// IMP=0x000000000000cc15
- (int)shapeID;	// IMP=0x000000000032b29d
- (void *)eshGroup;	// IMP=0x000000000032b276
- (void *)eshShape;	// IMP=0x0000000000028414
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x0000000000397ee1
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x000000000042d31b

@end
