//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSHTTPCookieInternal_Ref
{
    struct CompactHTTPCookieReference *_fromRef;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000001523b9
- (id)_initWithReference:(const struct CompactCookieArray *)arg1 index:(long long)arg2;	// IMP=0x00000000001522be
- (id)init;	// IMP=0x000000000015228f
- (struct HTTPCookie *)_inner;	// IMP=0x000000000015227e

@end
