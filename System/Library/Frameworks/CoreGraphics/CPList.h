//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPParagraphListItem;

__attribute__((visibility("hidden")))
@interface CPList : NSObject
{
    struct CGRect spacer;	// 8 = 0x8
    int type;	// 40 = 0x28
    unsigned int ordinalPrefixLength;	// 44 = 0x2c
    unsigned int ordinalSuffixLength;	// 48 = 0x30
    CPParagraphListItem *parentItem;	// 56 = 0x38
    struct __CFArray *items;	// 64 = 0x40
}

@property(retain, nonatomic) CPParagraphListItem *parentItem; // @synthesize parentItem;
@property(nonatomic) unsigned int ordinalSuffixLength; // @synthesize ordinalSuffixLength;
@property(nonatomic) unsigned int ordinalPrefixLength; // @synthesize ordinalPrefixLength;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) struct CGRect spacer; // @synthesize spacer;
- (_Bool)isMultilevel;	// IMP=0x00000000000ae763
- (_Bool)containsParagraph:(id)arg1;	// IMP=0x00000000000ae6e6
- (void)addItem:(id)arg1;	// IMP=0x00000000000ae6b6
- (id)itemAtIndex:(unsigned int)arg1;	// IMP=0x00000000000ae6a6
- (unsigned int)itemCount;	// IMP=0x00000000000ae698
- (void)dealloc;	// IMP=0x00000000000ae650
- (void)finalize;	// IMP=0x00000000000ae612
- (void)dispose;	// IMP=0x00000000000ae5ec
- (id)init;	// IMP=0x00000000000ae599

@end

