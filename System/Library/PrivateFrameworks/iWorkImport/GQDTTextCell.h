//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDWPLayoutStorage;

@interface GQDTTextCell
{
    struct __CFString *mStringValue;	// 24 = 0x18
    GQDWPLayoutStorage *mLayoutStorage;	// 32 = 0x20
}

- (id)layoutStorage;	// IMP=0x000000000001d7b6
- (struct __CFString *)stringValue;	// IMP=0x000000000001d7a5
- (void)dealloc;	// IMP=0x000000000001d74e
- (int)readContentForTCell:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001d803
- (int)readContentForTextCell:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001d7c7

@end

