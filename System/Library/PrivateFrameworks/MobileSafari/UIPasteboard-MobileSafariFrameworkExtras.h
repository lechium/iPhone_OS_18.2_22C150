//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPasteboard.h>

@interface UIPasteboard (MobileSafariFrameworkExtras)
+ (_Bool)safari_canCopyLinksForTabs:(id)arg1;	// IMP=0x00800000000b6a14
- (void)_safari_copyRichText:(id)arg1 withPlainTextFallback:(id)arg2;	// IMP=0x00100000000b6b80
- (void)safari_copyLinksForTabs:(id)arg1;	// IMP=0x00100000000b6acd
- (void)safari_copyLinksForTabGroup:(id)arg1;	// IMP=0x00100000000b6a34
@end
