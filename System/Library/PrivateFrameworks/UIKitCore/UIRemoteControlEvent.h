//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIEvent
{
    long long _subtype;	// 56 = 0x38
}

- (void)_simpleRemoteActionNotification:(id)arg1;	// IMP=0x00000000013bcf0a
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x00000000013bceef
- (id)_allWindows;	// IMP=0x00000000013bce85
- (void)_setSubtype:(long long)arg1;	// IMP=0x00000000013bce74
- (long long)subtype;	// IMP=0x00000000013bce63
- (long long)type;	// IMP=0x00000000013bce58
- (void)dealloc;	// IMP=0x00000000013bcdcf
- (id)_init;	// IMP=0x00000000013bcd34

@end

