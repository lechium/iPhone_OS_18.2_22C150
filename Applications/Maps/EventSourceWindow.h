//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindow.h>

@class NSHashTable, NSString;

@interface EventSourceWindow : UIWindow
{
    NSHashTable *_eventTaps;	// 8 = 0x8
    _Bool _hasEventTaps;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
}

+ (_Bool)_supportsCallstackSymbolLog;	// IMP=0x0020000000b249fd
- (void).cxx_destruct;	// IMP=0x0020000000b24e8b
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000b24cd9
- (void)registerEventTap:(id)arg1;	// IMP=0x0010000000b24c54
- (void)_updateAnalyticsState;	// IMP=0x0010000000b24bcc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000b24a35
- (void)setHidden:(_Bool)arg1;	// IMP=0x0010000000b24627
@property(readonly, nonatomic) double keyboardHeight;
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0010000000b245d7
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x0010000000b24527
- (void)_commonUpdate;	// IMP=0x0010000000b243fb
- (id)initWithContentRect:(struct CGRect)arg1;	// IMP=0x0010000000b2439e
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0010000000b24352

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
