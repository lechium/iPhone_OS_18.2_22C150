//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSiriIntelligenceSettings : NSObject
{
    _Atomic _Bool _shouldShowSiriSuggestions;	// 8 = 0x8
    int _notificationToken;	// 12 = 0xc
}

- (void)setShouldShowSiriSuggestions:(_Bool)arg1;	// IMP=0x0000000000162cca
- (_Bool)shouldShowSiriSuggestions;	// IMP=0x0000000000162c96
- (void)dealloc;	// IMP=0x0000000000162c59
- (id)init;	// IMP=0x0000000000162a51

@end
