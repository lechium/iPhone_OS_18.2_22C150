//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

__attribute__((visibility("hidden")))
@interface PGHostedWindow : _UIHostedWindow
{
}

@property(readonly, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
- (_Bool)_canBecomeKeyWindow;	// IMP=0x000000000000aeda
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000000aed2
- (void)dealloc;	// IMP=0x000000000000ae5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000adca

@end
