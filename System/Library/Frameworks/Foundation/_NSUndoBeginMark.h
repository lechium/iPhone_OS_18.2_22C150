//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark
{
    id _groupIdentifier;	// 32 = 0x20
    _Bool _isDiscardable;	// 40 = 0x28
    NSMutableDictionary *_userInfo;	// 48 = 0x30
}

- (id)description;	// IMP=0x0000000000869f66
- (_Bool)isBeginMark;	// IMP=0x0000000000869f5e
- (void)setDiscardable:(_Bool)arg1;	// IMP=0x0000000000869f4e
- (_Bool)isDiscardable;	// IMP=0x0000000000869f3e
- (id)userInfo;	// IMP=0x0000000000869f20
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000869ec5
- (id)groupIdentifier;	// IMP=0x0000000000869ea7
- (void)setGroupIdentifier:(id)arg1;	// IMP=0x0000000000869e4c
- (void)dealloc;	// IMP=0x0000000000869dd1

@end
