//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBCell : NSObject
{
}

+ (void)readXlCell:(struct XlCell *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;	// IMP=0x00800000001284b4
+ (int)convertEDErrorValueEnumToXl:(int)arg1;	// IMP=0x00800000003979b8
+ (int)convertXlErrorEnumToED:(int)arg1;	// IMP=0x0080000000149649
+ (int)convertXlCellTypeToED:(int)arg1;	// IMP=0x00800000001287e4

@end
