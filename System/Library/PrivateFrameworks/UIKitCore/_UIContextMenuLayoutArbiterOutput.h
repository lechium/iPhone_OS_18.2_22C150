//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterOutput : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSMapTable *_accessoryPositions;	// 16 = 0x10
    struct CGRect _contentBounds;	// 24 = 0x18
    CDStruct_17a0fc55 _anchor;	// 56 = 0x38
    CDStruct_d52ce5d2 _preview;	// 96 = 0x60
    CDStruct_d52ce5d2 _menu;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000c6f3b9
@property(retain, nonatomic) NSMapTable *accessoryPositions; // @synthesize accessoryPositions=_accessoryPositions;
@property(nonatomic) CDStruct_17a0fc55 anchor; // @synthesize anchor=_anchor;
@property(nonatomic) CDStruct_d52ce5d2 menu; // @synthesize menu=_menu;
@property(nonatomic) CDStruct_d52ce5d2 preview; // @synthesize preview=_preview;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

