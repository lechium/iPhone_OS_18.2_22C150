//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMLayoutHeader, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutTable
{
    AXMLayoutHeader *_header;	// 8 = 0x8
    NSMutableArray *_rows;	// 16 = 0x10
    NSMutableArray *_columns;	// 24 = 0x18
}

+ (id)region:(id)arg1 row:(id)arg2;	// IMP=0x00600000000407df
- (void).cxx_destruct;	// IMP=0x0000000000040a10
- (id)columns;	// IMP=0x00000000000409fb
- (id)rows;	// IMP=0x00000000000409e6
- (id)firstColumn;	// IMP=0x00000000000409c9
- (void)addColumn:(id)arg1;	// IMP=0x00000000000409ac
- (id)header;	// IMP=0x0000000000040997
- (id)firstLine;	// IMP=0x000000000004097a
- (void)addRow:(id)arg1;	// IMP=0x000000000004095d
- (struct CGRect)normalizedFrame;	// IMP=0x0000000000040912
- (struct CGRect)frame;	// IMP=0x00000000000408c7

@end
