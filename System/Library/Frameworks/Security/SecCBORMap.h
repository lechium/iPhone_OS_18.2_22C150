//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface SecCBORMap
{
    NSMapTable *m_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010b77d
- (void)write:(id)arg1;	// IMP=0x000000000010b602
- (id)dictionaryRepresentation;	// IMP=0x000000000010b5e5
- (id)getSortedKeys;	// IMP=0x000000000010b58c
- (void)setKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000010b566
- (id)init;	// IMP=0x000000000010b4f2
- (int)fieldType;	// IMP=0x000000000010b4e7

@end
